## Process this file with automake to produce Makefile.in
## $Id: Makefile.am,v 1.19 2010/09/17 16:11:26 rlar Exp $

noinst_LTLIBRARIES = libmisc.la


libmisc_la_SOURCES = \
		getopt_long_bsd.c	\
		getopt_bsd.h	\
		alloc.c		\
		alloc.h		\
		dup2.c		\
		dstring.c	\
		dup2.h		\
		hash.c		\
		ivars.c		\
		ivars.h		\
		mktemp.c	\
		mktemp.h	\
		printnum.c	\
		printnum.h	\
		string.c	\
		stringutil.h	\
		tilde.c		\
		tilde.h		\
		misc_time.c	\
		misc_time.h	\
		wlist.c		\
		util.c		\
		util.h

## Note that the getopt files get compiled unconditionnaly but some
## magic #define away the body of their own code if the compilation environment
## provides an implementation of its own (like GNU libc)




AM_CPPFLAGS = -I$(top_srcdir)/src/include
MAINTAINERCLEANFILES = Makefile.in
