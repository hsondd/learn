TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../main.cpp \
    ../NhanVien.cpp \
    ../NVQuanLy.cpp \
    ../NVSanXuat.cpp \
    ../NVVanPhong.cpp \
    ../QuanLy.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    ../NhanVien.h \
    ../NVQuanLy.h \
    ../NVSanXuat.h \
    ../NVVanPhong.h \
    ../QuanLy.h

