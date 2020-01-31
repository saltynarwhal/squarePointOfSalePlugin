#import <Cordova/CDVPlugin.h>
#import <Cordova/CDVAvailability.h>
#import <SquarePointOfSaleSDK.h>
#import <Cordova/CDVAppDelegate.h>

@interface CDVAppDelegate+squarePOSplugin : CDVAppDelegate

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString *,id> *)options;

@end
