#-------------------------------------------------
#
# Project created by QtCreator 2019-08-08T16:40:50
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt4Test
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp

HEADERS  += dialog.h

FORMS    += dialog.ui

win32: LIBS += -L$$PWD/../xdb/lib/ -lRTDB

INCLUDEPATH += $$PWD/../xdb/include
DEPENDPATH += $$PWD/../xdb/include
