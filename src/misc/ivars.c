/**********
Copyright 1991 Regents of the University of California.  All rights reserved.
**********/

#include "ngspice.h"
#include "ivars.h"

#ifdef HAVE_ASPRINTF
#ifdef HAVE_LIBIBERTY_H /* asprintf */
#include <libiberty.h>
#undef AND /* obsolete macro in ansidecl.h */
#elif defined(__MINGW32__)/* we have asprintf, but not libiberty.h */
#include <stdarg.h>
extern int asprintf(char **out, const char *fmt, ...);
extern int vasprintf(char **out, const char *fmt, va_list ap);
#endif
#endif

char *Spice_Path;
char *News_File;
char *Default_MFB_Cap;
char *Help_Path;
char *Lib_Path;


static void
env_overr(char **v, char *e)
{
    char *p;
    if (v && e && (p = getenv(e)))
        *v = p;
}

static void
mkvar(char **p, char *path_prefix, char *var_dir, char *env_var)
{
    char *buffer;

    /* Override by environment variables */
    buffer = getenv(env_var);

#ifdef HAVE_ASPRINTF
    if (buffer)
	asprintf(p, "%s", buffer);
    else
	asprintf(p, "%s%s%s", path_prefix, DIR_PATHSEP, var_dir);
#else /* ~ HAVE_ASPRINTF */
    if (buffer){
        *p = (char *) tmalloc(strlen(buffer)+1);
        sprintf(*p,"%s",buffer);
        /* asprintf(p, "%s", buffer); */
    }
    else{
        *p = (char *) tmalloc(strlen(path_prefix) + 
            strlen(DIR_PATHSEP) + strlen(var_dir) + 1);
        sprintf(*p, "%s%s%s", path_prefix, DIR_PATHSEP, var_dir); 
        /* asprintf(p, "%s%s%s", path_prefix, DIR_PATHSEP, var_dir); */
    }
#endif /* HAVE_ASPRINTF */
}

void
ivars(void)
{
    char *temp=NULL;
	 /* $dprefix has been set to /usr/local or C:/Spice (Windows) in configure.ac,
    NGSPICEBINDIR has been set to $dprefix/bin in configure.ac, 
    Spice_Exec_Dir has been set to NGSPICEBINDIR in conf.c,
    may be overridden here by environmental variable SPICE_EXEC_DIR */
    env_overr(&Spice_Exec_Dir, "SPICE_EXEC_DIR");
    env_overr(&Spice_Lib_Dir, "SPICE_LIB_DIR");

    /* for printing a news file */
    mkvar(&News_File, Spice_Lib_Dir, "news", "SPICE_NEWS");
    /* not used in ngspice */
    mkvar(&Default_MFB_Cap, Spice_Lib_Dir, "mfbcap", "SPICE_MFBCAP");
    /* help directory, not used in Windows mode */
    mkvar(&Help_Path, Spice_Lib_Dir, "helpdir", "SPICE_HELP_DIR");
    /* where spinit is found */
    mkvar(&Lib_Path, Spice_Lib_Dir, "scripts", "SPICE_SCRIPTS");
    /* used to call ngspice with aspice command, not used in Windows mode */
    mkvar(&Spice_Path, Spice_Exec_Dir, "ngspice", "SPICE_PATH");

    env_overr(&Spice_Host, "SPICE_HOST"); /* aspice */
    env_overr(&Bug_Addr, "SPICE_BUGADDR");
    env_overr(&Def_Editor, "SPICE_EDITOR");
    
    /* Set raw file mode, 0 by default (binary) set in conf.c, 
    may be overridden by environmental
    variable, not sure if acknowledged everywhere in ngspice */
    env_overr(&temp, "SPICE_ASCIIRAWFILE");
    if(temp)
       AsciiRawFile = atoi(temp);
    
}

void
cleanvars(void)
{
    tfree(News_File);
    tfree(Default_MFB_Cap);
    tfree(Help_Path);
    tfree(Lib_Path);
    tfree(Spice_Path);
}
