

#import <Foundation/Foundation.h>
#import "TREVLDefines.h"

NS_ASSUME_NONNULL_BEGIN

@interface TREVL : NSObject

+ (void)eventLogWithId:(NSString *)eventId parameters:(nullable NSDictionary *)parameters;

@end

NS_ASSUME_NONNULL_END
