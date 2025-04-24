add_library(nvme_core SHARED
    nvme_core.cpp
)

target_include_directories(nvme_core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})