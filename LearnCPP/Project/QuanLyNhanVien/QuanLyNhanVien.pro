TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    namsinh.cpp \
    nhanvien.cpp \
    nhanvienlaptrinh.cpp \
    nhanvienthietke.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    namsinh.h \
    nhanvien.h \
    nhanvienlaptrinh.h \
    nhanvienthietke.h

OTHER_FILES += \
    NhanVien.txt

