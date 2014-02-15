/**********
 * Copyright 1990 Regents of the University of California. All rights reserved.
 * File: b3v1noi.c
 * Author: 1995 Min-Chie Jeng and Mansun Chan. 
 * Modified by Paolo Nenzi 2002
 **********/
 
/* 
 * Release Notes: 
 * BSIM3v3.1,   Released by yuhua  96/12/08
 */

#include "ngspice.h"
#include "bsim3v1def.h"
#include "cktdefs.h"
#include "iferrmsg.h"
#include "noisedef.h"
#include "suffix.h"
#include "const.h"  /* jwan */

/*
 * BSIM3v1noise (mode, operation, firstModel, ckt, data, OnDens)
 *    This routine names and evaluates all of the noise sources
 *    associated with MOSFET's.  It starts with the model *firstModel and
 *    traverses all of its insts.  It then proceeds to any other models
 *    on the linked list.  The total output noise density generated by
 *    all of the MOSFET's is summed with the variable "OnDens".
 */

/*
 Channel thermal and flicker noises are calculated based on the value
 of model->BSIM3v1noiMod.
 If model->BSIM3v1noiMod = 1,
    Channel thermal noise = SPICE2 model
    Flicker noise         = SPICE2 model
 If model->BSIM3v1noiMod = 2,
    Channel thermal noise = BSIM3v1 model
    Flicker noise         = BSIM3v1 model
 If model->BSIM3v1noiMod = 3,
    Channel thermal noise = SPICE2 model
    Flicker noise         = BSIM3v1 model
 If model->BSIM3v1noiMod = 4,
    Channel thermal noise = BSIM3v1 model
    Flicker noise         = SPICE2 model
 */

extern void   NevalSrc (double *noise, double *lnNoise, CKTcircuit *ckt, int type, int node1, int node2, double param);
extern double Nintegrate (double noizDens, double lnNdens, double lnNlstDens, Ndata *data);

double
StrongInversionNoiseEval_b3v1(double vgs, double vds, BSIM3v1model *model, 
                         BSIM3v1instance *here, double freq, double temp)
{
struct bsim3v1SizeDependParam *pParam;
double cd, esat, DelClm, EffFreq, N0, Nl, Vgst;
double T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, Ssi;

    pParam = here->pParam;
    cd = fabs(here->BSIM3v1cd) * here->BSIM3v1m;
    if (vds > here->BSIM3v1vdsat)
    {   esat = 2.0 * pParam->BSIM3v1vsattemp / here->BSIM3v1ueff;
	T0 = ((((vds - here->BSIM3v1vdsat) / pParam->BSIM3v1litl) + model->BSIM3v1em)
	   / esat);
        DelClm = pParam->BSIM3v1litl * log (MAX(T0, N_MINLOG));
    }
    else 
        DelClm = 0.0;
    EffFreq = pow(freq, model->BSIM3v1ef);
    T1 = CHARGE * CHARGE * 8.62e-5 * cd * temp * here->BSIM3v1ueff;
    T2 = 1.0e8 * EffFreq * model->BSIM3v1cox
       * pParam->BSIM3v1leff * pParam->BSIM3v1leff;
    Vgst = vgs - here->BSIM3v1von;
    N0 = model->BSIM3v1cox * Vgst / CHARGE;
    if (N0 < 0.0)
	N0 = 0.0;
    Nl = model->BSIM3v1cox * (Vgst - MIN(vds, here->BSIM3v1vdsat)) / CHARGE;
    if (Nl < 0.0)
	Nl = 0.0;

    T3 = model->BSIM3v1oxideTrapDensityA
       * log(MAX(((N0 + 2.0e14) / (Nl + 2.0e14)), N_MINLOG));
    T4 = model->BSIM3v1oxideTrapDensityB * (N0 - Nl);
    T5 = model->BSIM3v1oxideTrapDensityC * 0.5 * (N0 * N0 - Nl * Nl);

    T6 = 8.62e-5 * temp * cd * cd;
    T7 = 1.0e8 * EffFreq * pParam->BSIM3v1leff
       * pParam->BSIM3v1leff * pParam->BSIM3v1weff * here->BSIM3v1m;
    T8 = model->BSIM3v1oxideTrapDensityA + model->BSIM3v1oxideTrapDensityB * Nl
       + model->BSIM3v1oxideTrapDensityC * Nl * Nl;
    T9 = (Nl + 2.0e14) * (Nl + 2.0e14);

    Ssi = T1 / T2 * (T3 + T4 + T5) + T6 / T7 * DelClm * T8 / T9;
    return Ssi;
}

int
BSIM3v1noise (int mode, int operation, GENmodel *inModel, CKTcircuit *ckt, 
              Ndata *data, double *OnDens)
{
BSIM3v1model *model = (BSIM3v1model *)inModel;
BSIM3v1instance *here;
struct bsim3v1SizeDependParam *pParam;
char name[N_MXVLNTH];
double tempOnoise;
double tempInoise;
double noizDens[BSIM3v1NSRCS];
double lnNdens[BSIM3v1NSRCS];

double vgs, vds, Slimit;
double T1, T10, T11;
double Ssi, Swi;

int i;

    /* define the names of the noise sources */
    static char *BSIM3v1nNames[BSIM3v1NSRCS] =
    {   /* Note that we have to keep the order */
	".rd",              /* noise due to rd */
			    /* consistent with the index definitions */
	".rs",              /* noise due to rs */
			    /* in BSIM3v1defs.h */
	".id",              /* noise due to id */
	".1overf",          /* flicker (1/f) noise */
	""                  /* total transistor noise */
    };

    for (; model != NULL; model = model->BSIM3v1nextModel)
    {    for (here = model->BSIM3v1instances; here != NULL;
	      here = here->BSIM3v1nextInstance)
	 {    
	 
             if (here->BSIM3v1owner != ARCHme)
	             continue;
	 
	      pParam = here->pParam;
	      switch (operation)
	      {  case N_OPEN:
		     /* see if we have to to produce a summary report */
		     /* if so, name all the noise generators */

		      if (((NOISEAN*)ckt->CKTcurJob)->NStpsSm != 0)
		      {   switch (mode)
			  {  case N_DENS:
			          for (i = 0; i < BSIM3v1NSRCS; i++)
				  {    (void) sprintf(name, "onoise.%s%s",
					              here->BSIM3v1name,
						      BSIM3v1nNames[i]);
                                       data->namelist = (IFuid *) trealloc(
					     (char *) data->namelist,
					     (data->numPlots + 1)
					     * sizeof(IFuid));
                                       if (!data->namelist)
					   return(E_NOMEM);
		                       (*(SPfrontEnd->IFnewUid)) (ckt,
			                  &(data->namelist[data->numPlots++]),
			                  (IFuid) NULL, name, UID_OTHER,
					  NULL);
				       /* we've added one more plot */
			          }
			          break;
		             case INT_NOIZ:
			          for (i = 0; i < BSIM3v1NSRCS; i++)
				  {    (void) sprintf(name, "onoise_total.%s%s",
						      here->BSIM3v1name,
						      BSIM3v1nNames[i]);
                                       data->namelist = (IFuid *) trealloc(
					     (char *) data->namelist,
					     (data->numPlots + 1)
					     * sizeof(IFuid));
                                       if (!data->namelist)
					   return(E_NOMEM);
		                       (*(SPfrontEnd->IFnewUid)) (ckt,
			                  &(data->namelist[data->numPlots++]),
			                  (IFuid) NULL, name, UID_OTHER,
					  NULL);
				       /* we've added one more plot */

			               (void) sprintf(name, "inoise_total.%s%s",
						      here->BSIM3v1name,
						      BSIM3v1nNames[i]);
                                       data->namelist = (IFuid *) trealloc(
					     (char *) data->namelist,
					     (data->numPlots + 1)
					     * sizeof(IFuid));
                                       if (!data->namelist)
					   return(E_NOMEM);
		                       (*(SPfrontEnd->IFnewUid)) (ckt,
			                  &(data->namelist[data->numPlots++]),
			                  (IFuid) NULL, name, UID_OTHER,
					  NULL);
				       /* we've added one more plot */
			          }
			          break;
		          }
		      }
		      break;
	         case N_CALC:
		      switch (mode)
		      {  case N_DENS:
		              NevalSrc(&noizDens[BSIM3v1RDNOIZ],
				       &lnNdens[BSIM3v1RDNOIZ], ckt, THERMNOISE,
				       here->BSIM3v1dNodePrime, here->BSIM3v1dNode,
				       here->BSIM3v1drainConductance * here->BSIM3v1m);

		              NevalSrc(&noizDens[BSIM3v1RSNOIZ],
				       &lnNdens[BSIM3v1RSNOIZ], ckt, THERMNOISE,
				       here->BSIM3v1sNodePrime, here->BSIM3v1sNode,
				       here->BSIM3v1sourceConductance * here->BSIM3v1m);

                              switch( model->BSIM3v1noiMod )
			      {  case 1:
			         case 3:
			              NevalSrc(&noizDens[BSIM3v1IDNOIZ],
				               &lnNdens[BSIM3v1IDNOIZ], ckt, 
					       THERMNOISE, here->BSIM3v1dNodePrime,
				               here->BSIM3v1sNodePrime,
                                               (2.0 / 3.0 * fabs(here->BSIM3v1gm
				               + here->BSIM3v1gds
					       + here->BSIM3v1gmbs) * here->BSIM3v1m));
				      break;
			         case 2:
			         case 4:
		                      NevalSrc(&noizDens[BSIM3v1IDNOIZ],
				               &lnNdens[BSIM3v1IDNOIZ], ckt,
					       THERMNOISE, here->BSIM3v1dNodePrime,
                                               here->BSIM3v1sNodePrime,
					       (here->BSIM3v1ueff
					       * fabs((here->BSIM3v1qinv * here->BSIM3v1m)
					       / (pParam->BSIM3v1leff
					       * pParam->BSIM3v1leff))));
				      break;
			      }
		              NevalSrc(&noizDens[BSIM3v1FLNOIZ], (double*) NULL,
				       ckt, N_GAIN, here->BSIM3v1dNodePrime,
				       here->BSIM3v1sNodePrime, (double) 0.0);

                              switch( model->BSIM3v1noiMod )
			      {  case 1:
			         case 4:
			              noizDens[BSIM3v1FLNOIZ] *= model->BSIM3v1kf
					    * exp(model->BSIM3v1af
					    * log(MAX(fabs(here->BSIM3v1cd * here->BSIM3v1m),
					    N_MINLOG)))
					    / (pow(data->freq, model->BSIM3v1ef)
					    * pParam->BSIM3v1leff
				            * pParam->BSIM3v1leff
					    * model->BSIM3v1cox);
				      break;
			         case 2:
			         case 3:
			              vgs = *(ckt->CKTstates[0] + here->BSIM3v1vgs);
		                      vds = *(ckt->CKTstates[0] + here->BSIM3v1vds);
			              if (vds < 0.0)
			              {   vds = -vds;
				          vgs = vgs + vds;
			              }
                                      if (vgs >= here->BSIM3v1von + 0.1)
			              {   Ssi = StrongInversionNoiseEval_b3v1(vgs,
					      vds, model, here, data->freq,
					      ckt->CKTtemp);
                                          noizDens[BSIM3v1FLNOIZ] *= Ssi;
			              }
                                      else 
			              {   pParam = here->pParam;
				          T10 = model->BSIM3v1oxideTrapDensityA
					      * 8.62e-5 * ckt->CKTtemp;
		                          T11 = pParam->BSIM3v1weff * here->BSIM3v1m
					      * pParam->BSIM3v1leff
				              * pow(data->freq, model->BSIM3v1ef)
				              * 4.0e36;
		                          Swi = T10 / T11 * here->BSIM3v1cd * here->BSIM3v1m
				              * here->BSIM3v1cd * here->BSIM3v1m;
                                          Slimit = StrongInversionNoiseEval_b3v1(
				               here->BSIM3v1von + 0.1, vds, model,
					       here, data->freq, ckt->CKTtemp);
				          T1 = Swi + Slimit;
				          if (T1 > 0.0)
                                              noizDens[BSIM3v1FLNOIZ] *= (Slimit
								    * Swi) / T1; 
				          else
                                              noizDens[BSIM3v1FLNOIZ] *= 0.0;
			              }
				      break;
			      }

		              lnNdens[BSIM3v1FLNOIZ] =
				     log(MAX(noizDens[BSIM3v1FLNOIZ], N_MINLOG));

		              noizDens[BSIM3v1TOTNOIZ] = noizDens[BSIM3v1RDNOIZ]
						     + noizDens[BSIM3v1RSNOIZ]
						     + noizDens[BSIM3v1IDNOIZ]
						     + noizDens[BSIM3v1FLNOIZ];
		              lnNdens[BSIM3v1TOTNOIZ] = 
				     log(MAX(noizDens[BSIM3v1TOTNOIZ], N_MINLOG));

		              *OnDens += noizDens[BSIM3v1TOTNOIZ];

		              if (data->delFreq == 0.0)
			      {   /* if we haven't done any previous 
				     integration, we need to initialize our
				     "history" variables.
				    */

			          for (i = 0; i < BSIM3v1NSRCS; i++)
				  {    here->BSIM3v1nVar[LNLSTDENS][i] =
					     lnNdens[i];
			          }

			          /* clear out our integration variables
				     if it's the first pass
				   */
			          if (data->freq ==
				      ((NOISEAN*) ckt->CKTcurJob)->NstartFreq)
				  {   for (i = 0; i < BSIM3v1NSRCS; i++)
				      {    here->BSIM3v1nVar[OUTNOIZ][i] = 0.0;
				           here->BSIM3v1nVar[INNOIZ][i] = 0.0;
			              }
			          }
		              }
			      else
			      {   /* data->delFreq != 0.0,
				     we have to integrate.
				   */
			          for (i = 0; i < BSIM3v1NSRCS; i++)
				  {    if (i != BSIM3v1TOTNOIZ)
				       {   tempOnoise = Nintegrate(noizDens[i],
						lnNdens[i],
				                here->BSIM3v1nVar[LNLSTDENS][i],
						data);
				           tempInoise = Nintegrate(noizDens[i]
						* data->GainSqInv, lnNdens[i]
						+ data->lnGainInv,
				                here->BSIM3v1nVar[LNLSTDENS][i]
						+ data->lnGainInv, data);
				           here->BSIM3v1nVar[LNLSTDENS][i] =
						lnNdens[i];
				           data->outNoiz += tempOnoise;
				           data->inNoise += tempInoise;
				           if (((NOISEAN*)
					       ckt->CKTcurJob)->NStpsSm != 0)
					   {   here->BSIM3v1nVar[OUTNOIZ][i]
						     += tempOnoise;
				               here->BSIM3v1nVar[OUTNOIZ][BSIM3v1TOTNOIZ]
						     += tempOnoise;
				               here->BSIM3v1nVar[INNOIZ][i]
						     += tempInoise;
				               here->BSIM3v1nVar[INNOIZ][BSIM3v1TOTNOIZ]
						     += tempInoise;
                                           }
			               }
			          }
		              }
		              if (data->prtSummary)
			      {   for (i = 0; i < BSIM3v1NSRCS; i++)
				  {    /* print a summary report */
			               data->outpVector[data->outNumber++]
					     = noizDens[i];
			          }
		              }
		              break;
		         case INT_NOIZ:
			      /* already calculated, just output */
		              if (((NOISEAN*)ckt->CKTcurJob)->NStpsSm != 0)
			      {   for (i = 0; i < BSIM3v1NSRCS; i++)
				  {    data->outpVector[data->outNumber++]
					     = here->BSIM3v1nVar[OUTNOIZ][i];
			               data->outpVector[data->outNumber++]
					     = here->BSIM3v1nVar[INNOIZ][i];
			          }
		              }
		              break;
		      }
		      break;
	         case N_CLOSE:
		      /* do nothing, the main calling routine will close */
		      return (OK);
		      break;   /* the plots */
	      }       /* switch (operation) */
	 }    /* for here */
    }    /* for model */

    return(OK);
}



