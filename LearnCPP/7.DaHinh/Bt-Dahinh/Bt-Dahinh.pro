TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ../Demo-Da hinh/NhanVien.cpp \
    ../Demo-Da hinh/NVQuanLy.cpp \
    ../Demo-Da hinh/NVSanXuat.cpp \
    ../Demo-Da hinh/NVVanPhong.cpp \
    ../Demo-Da hinh/QuanLy.cpp \
    NhanVien.cpp \
    NVQuanLy.cpp \
    NVSanXuat.cpp \
    NVVanPhong.cpp \
    QuanLy.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    ../Demo-Da hinh/NhanVien.h \
    ../Demo-Da hinh/NVQuanLy.h \
    ../Demo-Da hinh/NVSanXuat.h \
    ../Demo-Da hinh/NVVanPhong.h \
    ../Demo-Da hinh/QuanLy.h \
    NhanVien.h \
    NVQuanLy.h \
    NVSanXuat.h \
    NVVanPhong.h \
    QuanLy.h

