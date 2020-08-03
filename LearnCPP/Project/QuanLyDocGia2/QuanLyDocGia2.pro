TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    docgia.cpp \
    docgiatreem.cpp \
    docgianguoilon.cpp \
    thuvien.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    docgia.h \
    docgiatreem.h \
    docgianguoilon.h \
    thuvien.h

