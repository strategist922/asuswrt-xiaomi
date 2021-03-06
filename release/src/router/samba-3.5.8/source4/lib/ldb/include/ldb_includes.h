#ifndef _LDB_PRIVATE_INCLUDES_H_
#define _LDB_PRIVATE_INCLUDES_H_
/*
  a temporary includes file until I work on the ldb build system
*/

#if (_SAMBA_BUILD_ <= 3)
/* allow forbidden string functions - should be replaced with _m functions */
#undef strcasecmp
#undef strncasecmp
#define dyn_MODULESDIR dyn_LIBDIR
#endif

#include "replace.h"
#include "system/filesys.h"
#include "system/time.h"

#endif /*_LDB_PRIVATE_INCLUDES_H_*/
