#pragma once
#include <QtCore/qglobal.h>

// When this dll will be compiled, Framework_EXPORTS will be automatically defined
// In that case we are going to export the Framework dll and import the Application dll

#ifdef Framework_EXPORTS
# define Framework_EXPORT_IMPORT_API Q_DECL_EXPORT
#else
# define Framework_EXPORT_IMPORT_API Q_DECL_IMPORT
#endif
