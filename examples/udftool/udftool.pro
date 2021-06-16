QT             = core
QT            -= gui
QT            += QtUDF

CONFIG        += console

TEMPLATE       = app

SOURCES       += $${PWD}/udftool.cpp

win32 {
RC_FILE        = $${PWD}/udftool.rc
OTHER_FILES   += $${PWD}/udftool.rc
OTHER_FILES   += $${PWD}/*.js
}
