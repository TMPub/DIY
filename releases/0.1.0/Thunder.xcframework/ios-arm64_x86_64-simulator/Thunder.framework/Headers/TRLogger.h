

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#ifdef DEBUG
#define TMLog(FORMAT, ...) [TRLogger logMsg:[NSString stringWithFormat:(FORMAT), ##__VA_ARGS__]]
#else
#define TMLog(FORMAT, ...)
#endif

@interface TRLogger : NSObject

+ (void)logMsg:(NSString *)msg;

@end

NS_ASSUME_NONNULL_END
