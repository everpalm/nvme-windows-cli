#define NVMECORE_EXPORTS
#include "nvme_core.h"
#include <windows.h>
#include <iostream>

int nvme_list() {
    std::cout << "[DLL] Listing NVMe devices is not implemented yet.\n";
    return 0;
}

int nvme_identify(const char* device) {
    std::cout << "[DLL] Identify device: " << device << std::endl;
    return 0;
}