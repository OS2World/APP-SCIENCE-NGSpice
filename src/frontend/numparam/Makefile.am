## Process this file with automake to produce Makefile.in

EXTRA_DIST = downgrad.txt ngconfig.sh readme.txt nupatest.c washprog.c

noinst_LTLIBRARIES = libnumparam.la

libnumparam_la_SOURCES = \
	spicenum.c	\
	xpressn.c	\
	mystring.c	\
	general.h	\
	numpaif.h	\
	numparam.h

AM_CPPFLAGS = -I$(top_srcdir)/src/include
MAINTAINERCLEANFILES = Makefile.in
