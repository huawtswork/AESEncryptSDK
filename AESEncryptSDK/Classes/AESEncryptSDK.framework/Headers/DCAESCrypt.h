
#import <Foundation/Foundation.h>

@interface DCAESCrypt : NSObject

+ (NSString*)encrypt:(NSString*)string password:(NSString *)password;

+ (NSString *)decrypt:(NSString *)base64EncodedString password:(NSString *)password;

@end
