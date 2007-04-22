#ifndef OPENCBM_VERSION_H
#define OPENCBM_VERSION_H

#define OPENCBM_VERSION_MAJOR       0
#define OPENCBM_VERSION_MINOR       4
#define OPENCBM_VERSION_SUBMINOR    0
#define OPENCBM_VERSION_PATCHLEVEL  0
#define OPENCBM_VERSION_DEVEL       56

#define OPENCBM_BUILD_VERSION_HELP(          _a        ) #_a
#define OPENCBM_BUILD_VERSION_STRING_PART(   _a        ) OPENCBM_BUILD_VERSION_HELP(_a)
#define OPENCBM_BUILD_VERSION_STRING_RELEASE(_a, _b, _c) OPENCBM_BUILD_VERSION_HELP(_a) "." OPENCBM_BUILD_VERSION_HELP(_b) "." OPENCBM_BUILD_VERSION_HELP(_c) 

#define OPENCBM_BUILD_VERSION_STRING_CVS "$Id: version.h,v 1.155 2007-04-22 16:19:52 strik Exp $"


#if OPENCBM_VERSION_DEVEL == 0
#define OPENCBM_VERSION_STRING   OPENCBM_BUILD_VERSION_STRING_RELEASE(OPENCBM_VERSION_MAJOR, OPENCBM_VERSION_MINOR, OPENCBM_VERSION_SUBMINOR)
#elif OPENCBM_VERSION_PATCHLEVEL == 0
#define OPENCBM_VERSION_STRING   OPENCBM_BUILD_VERSION_STRING_RELEASE(OPENCBM_VERSION_MAJOR, OPENCBM_VERSION_MINOR, OPENCBM_VERSION_SUBMINOR) "." OPENCBM_BUILD_VERSION_STRING_PART( OPENCBM_VERSION_DEVEL)
#else
#define OPENCBM_VERSION_STRING   OPENCBM_BUILD_VERSION_STRING_RELEASE(OPENCBM_VERSION_MAJOR, OPENCBM_VERSION_MINOR, OPENCBM_VERSION_SUBMINOR) "." OPENCBM_BUILD_VERSION_STRING_PART( OPENCBM_VERSION_DEVEL) "pl" OPENCBM_BUILD_VERSION_STRING_PART(OPENCBM_VERSION_PATCHLEVEL)
#endif

#endif /* #ifndef OPENCBM_VERSION_H */
