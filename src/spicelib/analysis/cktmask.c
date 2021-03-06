/**********
Copyright 1990 Regents of the University of California.  All rights reserved.
Author: 1985 Thomas L. Quarles
**********/

    /* CKTmodAsk
     *  Ask questions about a specified device.
     */

#include "ngspice.h"
#include "cktdefs.h"
#include "ifsim.h"
#include "devdefs.h"
#include "sperror.h"


/* ARGSUSED */
int
CKTmodAsk(CKTcircuit *ckt, GENmodel *modfast, int which, IFvalue *value, IFvalue *selector)
{
    int type = modfast->GENmodType;
    if((*DEVices[type]).DEVmodAsk) {
        return( (*((*DEVices[type]).DEVmodAsk)) (ckt,
                modfast, which, value) );
    }
    return(E_BADPARM);
}
