/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifdef RN_DISABLE_OSS_PLUGIN_HEADER

// FB Internal: Plugins.h is autogenerated by the build system.
#import "Plugins.h"

#else

//OSS-compatibility layer: manually define these for github.

#import <Foundation/Foundation.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type-c-linkage"

#ifdef __cplusplus
extern "C" {
#endif

// NOTE: Sync these with FB internal version.

Class RCTPlatformCls(void);

#ifdef __cplusplus
}
#endif

#pragma GCC diagnostic pop

#endif // RN_DISABLE_OSS_PLUGIN_HEADER
