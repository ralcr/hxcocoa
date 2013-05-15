//
//  Wwx
//  Wwx
//
//  Source generated by Haxe Objective-C target
//

#import "Wwx.h"

@implementation Wwx


@synthesize window;
@synthesize viewController;
@synthesize session;
@synthesize str2;
@synthesize i;
- (BOOL) application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)didFinishLaunchingWithOptions{
	
	[Log trace:[@"Start" mutableCopy] infos:@{@"fileName":@"Wwx.hx", @"lineNumber":@"28", @"className":@"Wwx", @"methodName":@"application"}];
	application.statusBarStyle = UIStatusBarStyleBlackTranslucent;
	application.statusBarHidden = YES;
	self.window = [[UIWindow alloc] init];
	
	UIScreen *screen = [UIScreen mainScreen];
	self.window.frame = screen.bounds;
	self.viewController = [[ViewController alloc] init];
	self.window.rootViewController = self.viewController;
	[self.window makeKeyAndVisible];
	
	NSMutableString *str = [@"abc" mutableCopy];
	[str appendString:[@"def" mutableCopy]];
	[str appendString:[self getGHI]];
	self.str2 = [@"abc" mutableCopy];
	[self.str2 appendString:[@"def" mutableCopy]];
	[self.str2 appendString:[self getGHI]];
	self.i += 1;
	self.i++;
	return YES;
}
- (NSMutableString*) getGHI{
	
	return [@"GHI" mutableCopy];
}
- (void) applicationDidBecomeActive:(UIApplication*)application{
	
}
- (void) applicationWillResignActive:(UIApplication*)application{
	
}
- (id) init{
	
	self = [super init];
	self.i = 0;
	return self;
}

@end
