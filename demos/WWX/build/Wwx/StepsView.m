//
//  StepsView
//  Wwx
//
//  Source generated by Haxe Objective-C target
//

#import "StepsView.h"

@implementation StepsView

- (void)touchesEnded:(NSSet*)touches withEvent:(UIEvent*)withEvent {
	
	
	UITouch *touch = [touches anyObject];
	CGPoint p = [touch locationInView:self];
	
	StepLabel *s = [self.steps hx_objectAtIndex:self.currentStep];
	if (p.x > s.frame.origin.x)  {
		[self.delegate stepTouched:self.currentStep + 1];
	}
	else  {
		[self.delegate stepTouched:self.currentStep - 1];
	}
	
	NSString *s1 = [@"a" stringByAppendingString:@"b"];
}
- (void)touchesBegan:(NSSet*)touches withEvent:(UIEvent*)withEvent {
	
}
- (void)stepTouched:(NSInteger)i {
	
	[self.delegate stepTouched:i];
}
- (void)setStep:(NSInteger)j {
	
	self.currentStep = j;
	 {
		
		NSInteger _g1 = 0;
		NSInteger _g = self.steps.length;
		while (_g1 < _g)  {
			
			NSInteger i = _g1++;
			[[self.steps hx_objectAtIndex:i] select:i == j];
		}
	}
}
- (void)_initWithFrame:(CGRect)frame {
	
	self.currentStep = 0;
	
	UIView *background = [[UIView alloc] init];
	background.frame = CGRectMake(0,20,frame.size.width,3);
	background.backgroundColor = [UIColor darkGrayColor];
	background.autoresizingMask = UIViewAutoresizingFlexibleWidth;
	[self addSubview:background];
	self.steps = [[NSMutableArray<id> alloc] init];
	 {
		
		NSInteger _g = 0;
		while (_g < 4)  {
			
			NSInteger i = _g++;
			
			StepLabel *v = [[StepLabel alloc] init];
			v.frame = CGRectMake(38 + 82 * i,21,40,40);
			v.delegate = self;
			v.autoresizingMask = (UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin);
			[v setIndex:i];
			[self addSubview:v];
			[self.steps push:v];
		}
	}
}
@synthesize steps;
@synthesize currentStep;
@synthesize delegate;

@end
