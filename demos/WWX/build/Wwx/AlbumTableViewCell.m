//
//  AlbumTableViewCell
//  Wwx
//
//  Source generated by Haxe Objective-C target
//

#import "AlbumTableViewCell.h"

@implementation AlbumTableViewCell

- (void)dealloc {
	
	[Log trace:@"dealloc collection cell" infos:@{@"fileName":@"AlbumTableViewCell.hx", @"lineNumber":@"70", @"className":@"AlbumTableViewCell", @"methodName":@"dealloc"}];
	[self.customImageView removeFromSuperview];
	self.customImageView = nil;
	[self.customTextLabel removeFromSuperview];
	self.customTextLabel = nil;
}
- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
	
	[super setSelected:selected animated:animated];
}
- (void)cacheImage:(NSData*)imageData {
	
	self.customImageView.image = [[UIImage alloc]  initWithData:imageData];
}
- (void)loadImageData:(NSString*)url {
	
	
	NSData *imageData = [[NSData alloc]  initWithContentsOfURL:[NSURL URLWithString:url]];
	[self performSelectorOnMainThread:@selector(cacheImage:) withObject:imageData waitUntilDone:NO];
}
- (void)loadFacebookImage:(NSString*)imageURL {
	
	[NSThread detachNewThreadSelector:@selector(loadImageData:) toTarget:self withObject:imageURL];
}
- (void)setLocalImage:(UIImage*)img {
	
	self.customImageView.image = img;
}
- (void)_initWithStyle:(UITableViewCellStyle*)style reuseIdentifier:(NSString*)reuseIdentifier {
	
	self.backgroundColor = [UIColor clearColor];
	self.imageView.contentMode = UIViewContentModeScaleAspectFill;
	self.imageView.clipsToBounds = YES;
	self.customImageView = [[UIImageView alloc] init];
	self.customImageView.frame =  CGRectMake(6, 10, 60, 60);
	[self.contentView addSubview:self.customImageView];
	self.customTextLabel = [[UILabel alloc] init];
	self.customTextLabel.frame =  CGRectMake(80, 30, self.frame.size.width - 80, 20);
	self.customTextLabel.font = [UIFont boldSystemFontOfSize:13];
	self.customTextLabel.textColor = [UIColor whiteColor];
	self.customTextLabel.backgroundColor = [UIColor clearColor];
	self.customTextLabel.autoresizingMask = UIViewAutoresizingFlexibleWidth;
	self.customTextLabel.adjustsFontSizeToFitWidth = YES;
	[self.contentView addSubview:self.customTextLabel];
	
	UIView *bg = [[UIView alloc] init];
	bg.frame =  CGRectMake(0, 0, self.frame.size.width, self.frame.size.height);
	bg.backgroundColor = [UIColor orangeColor];
	self.selectedBackgroundView = bg;
}
@synthesize customTextLabel;
@synthesize customImageView;

@end