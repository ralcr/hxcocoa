//
//  CollectionCell
//  Wwx
//
//  Source generated by Haxe Objective-C target
//


#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>

#import "haxe/Log.h"

@interface CollectionCell : UICollectionViewCell 

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIImageView *markImage;
@property (nonatomic) int index;
- (id)  initWithFrame:(CGRect)frame;
- (void) select:(BOOL)sel;
- (void) dealloc;

@end

