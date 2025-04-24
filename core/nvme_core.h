#pragma once

#ifdef _WIN32
  #ifdef NVMECORE_EXPORTS
    #define NVME_API __declspec(dllexport)
  #else
    #define NVME_API __declspec(dllimport)
  #endif
#else
  #define NVME_API
#endif

#ifdef __cplusplus
extern "C" {
#endif

NVME_API int nvme_list();
NVME_API int nvme_identify(const char* device);

#ifdef __cplusplus
}
#endif