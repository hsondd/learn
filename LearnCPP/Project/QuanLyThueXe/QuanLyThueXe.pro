TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    xe.cpp \
    xedap.cpp \
    xemay.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    xe.h \
    xedap.h \
    xemay.h

