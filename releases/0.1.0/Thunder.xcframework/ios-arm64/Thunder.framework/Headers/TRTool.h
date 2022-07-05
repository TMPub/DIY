

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TRTool : NSObject

+ (NSString *)encryptAES128ECBWithString:(NSString *)string;
+ (NSString *)decryptAES128ECBWithString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
