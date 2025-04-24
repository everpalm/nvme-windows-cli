#include <iostream>
#include "nvme_core.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: nvmecli <list|identify> [device]" << std::endl;
        return 1;
    }

    std::string cmd = argv[1];

    if (cmd == "list") {
        nvme_list();
    } else if (cmd == "identify" && argc >= 3) {
        nvme_identify(argv[2]);
    } else {
        std::cout << "Unknown command." << std::endl;
        return 1;
    }

    return 0;
}