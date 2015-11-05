#-------------------------------------------------
#
# Project created by QtCreator 2015-10-21T18:08:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProyectoOrga
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    blocks.cpp \
    tree.cpp \
    frag.cpp \
    desfrag.cpp \
    addfile.cpp \
    superblock.cpp \
    filetable.cpp \
    inodos.cpp \
    disk.cpp

HEADERS  += mainwindow.h \
    blocks.h \
    tree.h \
    frag.h \
    desfrag.h \
    addfile.h \
    superblock.h \
    filetable.h \
    inodos.h \
    disk.h

FORMS    += mainwindow.ui \
    blocks.ui \
    tree.ui \
    frag.ui \
    desfrag.ui \
    addfile.ui
