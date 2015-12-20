//
//  PiratePig
//  PiratePig
//
//  Source generated by Haxe Objective-C target
//

#import "PiratePig.h"

@implementation PiratePig


- (void)applicationWillResignActive:(UIApplication*)application {
	
}
- (void)applicationDidBecomeActive:(UIApplication*)application {
	
}
- (void)construct {
	
}
- (void)initialize {
	
}
- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)didFinishLaunchingWithOptions {
	
	[Log trace:@"Start" infos:@{@"fileName":@"PiratePig.hx", @"lineNumber":@"31", @"className":@"PiratePig", @"methodName":@"application"}];
	self.window = [[UIWindow alloc] init];
	
	UIScreen *screen = [UIScreen mainScreen];
	self.window.frame = screen.bounds;
	self.view = [[UIView alloc] init];
	self.viewController = [[UIViewController alloc] init];
	self.viewController.view = self.view;
	self.window.rootViewController = self.viewController;
	[self.window makeKeyAndVisible];
	self.view.frame = CGRectMake(0,20,self.window.frame.size.width * 2,self.window.frame.size.height * 2);
	self.view.autoresizesSubviews = YES;
	self.view.autoresizingMask = (UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight);
	self.view.backgroundColor = [UIColor grayColor];
	self.view.clipsToBounds = YES;
	self.background = [[UIImageView alloc]  initWithImage:[UIImage imageNamed:@"background_tile.png"]];
	CGRect bs = self.background.frame;
	bs.size.width = self.view.frame.size.width;
	self.background.frame = bs;
	[self.view addSubview:self.background];
	self.footer = [[UIImageView alloc]  initWithImage:[UIImage imageNamed:@"center_bottom.png"]];
	CGRect bs1 = self.footer.frame;
	bs1.origin.x = self.view.frame.size.width / 2 - bs1.size.width / 2;
	bs1.origin.y = self.view.frame.size.height - bs1.size.height;
	self.footer.frame = bs1;
	self.footer.alpha = 0.5;
	[self.view addSubview:self.footer];
	self.game = [[PiratePigGame alloc] init];
	self.game.frame = self.view.frame;
	[self.view addSubview:self.game];
	self.view.transform =  CGAffineTransformScale(self.view.transform, 0.5, 0.5);
	self.view.transform =  CGAffineTransformTranslate(self.view.transform, -self.window.frame.size.width, -self.window.frame.size.height);
	return YES;
}
@synthesize game;
@synthesize footer;
@synthesize background;
@synthesize view;
@synthesize viewController;
@synthesize window;

@end
