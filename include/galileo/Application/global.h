#pragma once
#include <QtCore/qglobal.h>


// When this dll will be compiled, Application_EXPORTS will be automatically defined
// In that case we are going to export the Application dll and import the Framework dll

#ifdef Application_EXPORTS
# define Application_EXPORT_IMPORT_API Q_DECL_EXPORT
#else
# define Application_EXPORT_IMPORT_API Q_DECL_IMPORT
#endif
