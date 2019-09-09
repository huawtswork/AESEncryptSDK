
#import <Foundation/Foundation.h>

FOUNDATION_EXPORT double AESEncryptSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char AESEncryptSDKVersionString[];

#if __has_include(<AESEncryptSDK/AESEncryptSDK.h>)

#import <AESEncryptSDK/AESCrypt.h>
#import <AESEncryptSDK/DCAESCrypt.h>

#else

#import "AESCrypt.h"
#import "DCAESCrypt.h"

#endif

