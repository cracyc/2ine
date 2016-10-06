#ifndef _INCL_NATIVE_H_
#define _INCL_NATIVE_H_

#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>

#include "os2types.h"
#include "os2errors.h"
#include "../lx_loader.h"

#if 1
#define TRACE_NATIVE(...) do { printf("2INE TRACE: "); printf(__VA_ARGS__); printf(";\n"); } while (0)
#else
#define TRACE_NATIVE(...) do {} while (0)
#endif

OS2EXPORT const LxExport * lxNativeModuleInit(LxLoaderState *lx_state, uint32 *lx_num_exports);
void OS2EXPORT lxNativeModuleDeinit(void);

#define LX_NATIVE_MODULE_DEINIT(deinitcode) \
    void lxNativeModuleDeinit(void) { deinitcode; }

#define LX_NATIVE_MODULE_INIT(initcode) \
    const LxExport *lxNativeModuleInit(LxLoaderState *lx_state, uint32 *lx_num_exports) { \
        initcode; \
        static const LxExport lx_native_exports[] = {

#define LX_NATIVE_EXPORT(fn, ord) { ord, #fn, fn }

#define LX_NATIVE_MODULE_INIT_END() \
    }; \
    *lx_num_exports = sizeof (lx_native_exports) / sizeof (lx_native_exports[0]); \
    return lx_native_exports; \
}

#endif

// end of native.h ...

