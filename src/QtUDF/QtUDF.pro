NAME         = QtUDF
TARGET       = $${NAME}
QT           = core
QT          -= gui
CONFIG(static,static|shared) {
# static version does not support Qt Script now
QT          -= script
} else {
QT          += script
}

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/QtUDF

HEADERS     += $${PWD}/../../include/QtUDF/QtUDF
HEADERS     += $${PWD}/../../include/QtUDF/qtudf.h

SOURCES     += $${PWD}/qtudf.cpp

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)
