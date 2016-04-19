#-------------------------------------------------
#
# Project created by QtCreator 2016-03-29T14:21:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mice1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tabla.cpp \
    polje.cpp \
    partija.cpp \
    igrac.cpp \
    potez.cpp \
    figura.cpp

HEADERS  += mainwindow.h \
    tabla.h \
    polje.h \
    partija.h \
    igrac.h \
    potez.h \
    figura.h \
    projectHeader.h

FORMS    += mainwindow.ui

RESOURCES += \
    slike.qrc
