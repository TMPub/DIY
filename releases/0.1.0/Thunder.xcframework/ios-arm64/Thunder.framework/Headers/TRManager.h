

#import <Foundation/Foundation.h>
#import "TREVL.h"
#import "TRLogger.h"

NS_ASSUME_NONNULL_BEGIN

@interface TRManager : NSObject

/// didFinishLaunchingWithOptions 调用
/// @param application application
/// @param launchOptions launchOptions
/// @param tmAKey tmAKey
/// @param tmAId tmAId
+ (void)configAttributionWithApplication:(UIApplication *)application launchOptions:(NSDictionary *)launchOptions tmAKey:(NSString *)tmAKey tmAId:(NSString *)tmAId;

/// applicationDidBecomeActive 调用
+ (void)startWhileActive;

/// 设置调试模式
/// @param isDebug 是否为调试模式; 默认NO
+ (void)configDebugMode:(BOOL)isDebug;

/// 设置打印日志
/// @param showLog 是否打印日志
+ (void)configLogMode:(BOOL)showLog;

/// 设置埋点仅打印不上报
/// @param evlOnlyForLog 是/否
+ (void)evlOnlyForLog:(BOOL)evlOnlyForLog;

/// 配置App相关信息
/// @param channel app渠道
/// @param appId appId
/// @param appName app名称
/// @param appVersion app版本
+ (void)configChannel:(NSString *)channel appId:(NSString *)appId appName:(NSString *)appName appVersion:(NSString *)appVersion;

@end

NS_ASSUME_NONNULL_END
