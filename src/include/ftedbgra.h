/**********
Copyright 1990 Regents of the University of California.  All rights reserved.
Author: 1987 Jeffrey M. Hsu
**********/

/*
    $Header: /cvsroot/ngspice/ngspice/ng-spice-rework/src/include/ftedbgra.h,v 1.2 2010/06/23 19:33:54 rlar Exp $

    External definitions for the graph database module.
*/

extern GRAPH *currentgraph;

extern GRAPH *NewGraph(void);

extern GRAPH *FindGraph(int id);

extern GRAPH *CopyGraph(GRAPH *graph);
