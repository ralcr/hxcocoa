//
//  Wwx
//  Wwx
//
//  Code generated by Haxe Objective-C target
//

#import "Wwx.h"

@implementation Wwx


- (void)applicationWillResignActive:(UIApplication*)application {
	
}
- (void)applicationDidBecomeActive:(UIApplication*)application {
	
}
- (NSString*)getGHI {
	
	return @"GHI";
}
- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)didFinishLaunchingWithOptions {
	
	[Log trace:@"Start" infos:@{@"fileName":@"Wwx.hx", @"lineNumber":@"28", @"className":@"Wwx", @"methodName":@"application"}];
	application.statusBarStyle = UIStatusBarStyleBlackTranslucent;
	application.statusBarHidden = YES;
	self.window = [[UIWindow alloc] init];
	
	UIScreen *screen = [UIScreen mainScreen];
	self.window.frame = screen.bounds;
	self.viewController = [[ViewController alloc] init];
	self.window.rootViewController = self.viewController;
	[self.window makeKeyAndVisible];
	
	NSString *str = @"abc";
	str = [NSString stringWithFormat:@"%@%@", str, @"def"];
	str = [NSString stringWithFormat:@"%@%@", str, [self getGHI]];
	self.str2 = @"abc";
	self.str2 = [NSString stringWithFormat:@"%@%@", self.str2, @"def"];
	self.str2 = [NSString stringWithFormat:@"%@%@", self.str2, [self getGHI]];
	self.i += 1;
	self.i++;
	return YES;
}
@synthesize i;
@synthesize str2;
@synthesize session;
@synthesize viewController;
@synthesize window;
- (id)init {
	
	self = [super init];
	self.i = 0;
	return self;
}

@end
