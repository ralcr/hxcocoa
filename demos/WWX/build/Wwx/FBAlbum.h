//
//  FBAlbum
//  Wwx
//
//  Source generated by Haxe Objective-C target
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "String.h"

@interface FBAlbum : NSObject 

- (void)dispatchLoadingEvent;
- (void)cacheImage:(NSData*)imageData;
- (void)loadImageData:(NSString*)url;
- (void)preload;
// Dynamic method defined with an objc method and a block property
- (void)onImageCached:(UIImage*)image;
@property (nonatomic, copy) void(^hx_dyn_onImageCached)(UIImage*);
@property (nonatomic) id delegate;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *albumId;
@property (nonatomic, strong) NSString *coverPhoto;
@property (nonatomic, strong) NSString *nr;
- (id)init;

@end

