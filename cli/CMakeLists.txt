add_executable(nvme_cli main.cpp)
target_link_libraries(nvme_cli nvme_core)
target_include_directories(nvme_cli PRIVATE ../core)