/*************
 * Header file for parse.c
 * 1999 E. Rouat
 * $Id: parse.h,v 1.5 2010/07/30 16:09:39 rlar Exp $
 ************/

#ifndef _PARSE_H
#define _PARSE_H

#include <pnode.h>
#include <wordlist.h>

struct pnode * ft_getpnames(wordlist *wl, bool check);
#ifndef free_pnode
#define free_pnode(ptr)  free_pnode_x(ptr); ptr=NULL;
#endif
void free_pnode_x(struct pnode *t);

void free_pnode_o(struct pnode *t);

#endif
