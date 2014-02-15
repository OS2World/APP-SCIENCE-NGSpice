/* Michael Widlok 		2 Jun 1999 */
/* $Id: mw_coms.c,v 1.8 2010/06/23 17:40:56 rlar Exp $ */
/* New commands for unloading circuits */

#include "ngspice.h"
#include "cpdefs.h"
#include "ftedefs.h"
#include "ftedev.h"
#include "ftedebug.h"
#include "dvec.h"

#include "circuits.h"
#include "mw_coms.h"
#include "variable.h"
#include "runcoms.h"

/* Clears ckt and removes current circ. form database */
 
void
com_removecirc(wordlist *wl)
{
    struct variable *v, *next;
    struct circ *ct;
    struct circ *caux=NULL;
    struct plot *p;
    struct plot *paux;
    struct wordlist *wlist;
    int auxCir=1,i,auxPlot;

    char* namecircuit;
    char buf[80];

    /* Allocation of a temp wordlist */
    wlist = (struct wordlist *)malloc(sizeof(struct wordlist));

    if (ft_curckt == NULL) {
        fprintf(cp_err, "Error: there is no circuit loaded.\n");
        return;
    }

	ct = ft_curckt; 
    
    if_cktfree(ct->ci_ckt, ct->ci_symtab);
    for (v = ct->ci_vars; v; v = next) {
	next = v->va_next;
	tfree(v);
    }
    
    ct->ci_vars = NULL;
    caux=ft_circuits;
    namecircuit = strdup(ft_curckt->ci_name);
    /* The circuit  being removed is the first loaded and you have more circuits */
    if(ft_curckt==ft_circuits&&ft_circuits->ci_next!=NULL)
    	ft_circuits=ft_circuits->ci_next;


    /* The circuit being removed id the first loaded and there are no more circuits */
    else if(ft_circuits->ci_next==NULL)
	   ft_circuits=NULL;
    
    else {
	
	   
       /* Run over the circuit list to find how many of them are 
        * in front of the one to be removed 
        */
	   for (; ft_curckt != caux&&caux; caux = caux->ci_next)
		  auxCir++;
	
	   caux=ft_circuits;
	   /* Remove the circuit and move pointer to the next one */
	   for(i=1;i<auxCir-1;i++)
	       caux=caux->ci_next;
	   caux->ci_next=caux->ci_next->ci_next;
	   /* ft_curckt=ft_circuits; */
        
    }
    
    /* If the plot is the first one and there are no other plots */
    if(plot_list->pl_next==NULL&&strcmp(plot_list->pl_title,namecircuit)==0)
        plot_list=NULL;
    
        
    else if(plot_list&&plot_list->pl_next!=NULL){
	p = plot_list;
	while(p){
        auxPlot=1;
        /* If the plot is in the first position */
        if(plot_list->pl_next&&strcmp(plot_list->pl_title,namecircuit)==0)
	       plot_list=plot_list->pl_next;
	    /* otherwise we run over the list of plots */
        else {
            for (; strcmp(p->pl_title,namecircuit)!=0&&p->pl_next!=NULL; p = p->pl_next)
		        auxPlot++;
                if(strcmp(p->pl_title,namecircuit)==0){
                    paux = plot_list;
	            for(i=1;i<auxPlot-1;i++)
		            paux=paux->pl_next;
	            paux->pl_next=paux->pl_next->pl_next;		
        }
      }
    p=p->pl_next;
    }
    }
    
    /*if (ft_curckt) {
       
        ft_curckt->ci_devices = cp_kwswitch(CT_DEVNAMES, ft_circuits->ci_devices);
        ft_curckt->ci_nodes = cp_kwswitch(CT_NODENAMES, ft_circuits->ci_nodes);
    }*/
if(ft_circuits&&caux->ci_next){
	sprintf(buf,"%d",auxCir);
    wlist->wl_next = NULL;
    wlist->wl_prev = NULL;
    wlist->wl_word = buf;
    
	com_scirc(wlist);
	free(wlist);
}
else if(ft_circuits){
    sprintf(buf,"%d",(auxCir-1));
    wlist->wl_next = NULL;
    wlist->wl_prev = NULL;
    wlist->wl_word = buf;
    
	com_scirc(wlist);
	free(wlist);
    
}
else
	ft_curckt=NULL;
    return;
}

