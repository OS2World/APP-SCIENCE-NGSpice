/**********
Copyright 1990 Regents of the University of California.  All rights reserved.
Author: 1985 Thomas L. Quarles
**********/


#ifndef TRAN
#define TRAN


#include "cktdefs.h"
#include "jobdefs.h"
#include "tskdefs.h"
    /*
     * TRANdefs.h - defs for transient analyses 
     */

typedef struct {
    int JOBtype;
    JOB *JOBnextJob;
    char *JOBname;
    double TRANfinalTime;
    double TRANstep;
    double TRANmaxStep;
    double TRANinitTime;
    long TRANmode;
    void * TRANplot;
} TRANan;

#define TRAN_TSTART 1
#define TRAN_TSTOP 2
#define TRAN_TSTEP 3
#define TRAN_TMAX 4
#define TRAN_UIC 5
extern int TRANsetParm(CKTcircuit *ckt, void *anal, int which, IFvalue *value);
extern int TRANaskQuest(CKTcircuit *ckt, void *anal, int which,IFvalue *value);
#endif /*TRAN*/
