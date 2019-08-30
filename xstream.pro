TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        abstractreader.cpp \
        abstractwriter.cpp \
        filereader.cpp \
        filewriter.cpp \
        lazywriter.cpp \
        main.cpp \
        memorywriter.cpp

HEADERS += \
    abstractreader.h \
    abstractwriter.h \
    filereader.h \
    filewriter.h \
    lazywriter.h \
    memorywriter.h
