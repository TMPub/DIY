

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TREVLMap : NSObject

+ (NSString *)afLogEventIDWithEventID:(NSString *)eventID;
+ (NSString *)afLogKeyWithKey:(NSString *)logKey;

+ (NSDictionary *)afLogParameters:(NSDictionary *)parameters;

@end

NS_ASSUME_NONNULL_END
