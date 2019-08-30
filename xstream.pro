TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        abstractreader.cpp \
        abstractwriter.cpp \
        filewriter.cpp \
        main.cpp

HEADERS += \
    abstractreader.h \
    abstractwriter.h \
    filewriter.h
