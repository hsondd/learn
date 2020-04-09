cmake_minimum_required(VERSION 3.15)
project(LuongNhanVien)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(LuongNhanVien
        main.cpp
        NhanVien.cpp
        NhanVien.h
        NVSanXuat.cpp
        NVSanXuat.h
        NVVanPhong.cpp
        NVVanPhong.h NVQuanLy.cpp NVQuanLy.h QuanLy.cpp QuanLy.h)
