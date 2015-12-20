//
//  String
//  Wwx
//
//  Source generated by Haxe Objective-C target
//



#import "String.h"
#import "Array.h"

@interface NSString ( String )

+ (NSString*)fromCharCode:(NSInteger)code;
- (NSString*)toString;
- (NSString*)substring:(NSInteger)startIndex endIndex:(NSInteger)endIndex;
- (NSString*)substr:(NSInteger)pos len:(NSInteger)len;
- (NSMutableArray<id>*)split:(NSString*)delimiter;
- (NSInteger)lastIndexOf:(NSString*)str startIndex:(NSInteger)startIndex;
- (NSInteger)indexOf:(NSString*)str startIndex:(NSInteger)startIndex;
- (NSInteger)charCodeAt:(NSInteger)index;
- (NSString*)charAt:(NSInteger)index;
- (NSString*)toLowerCase;
- (NSString*)toUpperCase;
@property (nonatomic) NSInteger length;
- (id)init:(NSString*)string;

@end
