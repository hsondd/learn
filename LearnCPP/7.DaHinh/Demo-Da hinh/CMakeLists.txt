cmake_minimum_required(VERSION 3.15)
project(Demo_Da_hinh)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Demo_Da_hinh
        main.cpp
        NhanVien.cpp
        NhanVien.h
        NVQuanLy.cpp
        NVQuanLy.h
        NVSanXuat.cpp
        NVSanXuat.h
        NVVanPhong.cpp
        NVVanPhong.h
        QuanLy.cpp
        QuanLy.h)
