cmake_minimum_required(VERSION 3.15)
project(nvme_windows_cli)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_subdirectory(core)
add_subdirectory(cli)