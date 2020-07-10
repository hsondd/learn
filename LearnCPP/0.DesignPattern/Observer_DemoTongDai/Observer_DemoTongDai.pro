TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    observer.cpp \
    subject.cpp \
    thuebao.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    observer.h \
    subject.h \
    thuebao.h

