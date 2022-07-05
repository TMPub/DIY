

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define TRINFOS [TRInfos shareTRInfos]

@interface TRInfos : NSObject

+ (instancetype)shareTRInfos;

@property (nonatomic, copy) NSString *channel;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *appVersion;

@property (nonatomic, copy) NSString *sdkVersion;

@property (nonatomic, strong) NSDictionary *logKeysMap;
@property (nonatomic, strong) NSDictionary *logEventsMap;

@property (nonatomic, assign) BOOL showLog;
@property (nonatomic, assign) BOOL evlOnlyForLog;

@end

NS_ASSUME_NONNULL_END
