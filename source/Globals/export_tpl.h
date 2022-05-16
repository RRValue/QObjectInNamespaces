#pragma once

#include <QtCore/QtGlobal>

#ifdef EXPORT_${COMPNAME}
#define ${COMPNAME}_API Q_DECL_EXPORT
#else
#define ${COMPNAME}_API Q_DECL_IMPORT
#endif