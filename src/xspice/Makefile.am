# Process this file with automake

EXTRA_DIST = README examples icm xspice.c

## This is removed because icm relies upon the existance of all other
## libs.  It is currently compiled manually, last.
##SUBDIRS = mif cm enh evt ipc idn icm

SUBDIRS = mif cm enh evt ipc idn cmpp icm


dist-hook:
	rm -rf `find $(distdir)/examples -name CVS`
	rm -f "$(distdir)/icm/makedefs"
	rm -rf `find $(distdir)/icm -name CVS`
	rm -rf `find $(distdir)/icm -name .cvsignore`
	rm -rf `find $(distdir)/icm -name .deps`
	rm -rf `find $(distdir)/icm -name *.o`
	rm -rf `find $(distdir)/icm -name *.cm`
	for sub in analog digital spice2poly xtradev xtraevt ; do \
	    rm -rf `find $(distdir)/icm/$$sub -name cmextrn.h`; \
	    rm -rf `find $(distdir)/icm/$$sub -name cminfo.h`; \
	    rm -rf `find $(distdir)/icm/$$sub -name udnextrn.h`; \
	    rm -rf `find $(distdir)/icm/$$sub -name udninfo.h`; \
	    rm -rf `find $(distdir)/icm/$$sub -name ifspec.c`; \
	    rm -rf `find $(distdir)/icm/$$sub -name cfunc.c`; \
	    rm -rf `find $(distdir)/icm/$$sub -name dlmain.c`; \
	    rm -rf `find $(distdir)/icm/$$sub -name objects.inc`; \
	done

MAINTAINERCLEANFILES = Makefile.in
