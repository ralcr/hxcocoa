//
//  Array
//  HelloWorld
//
//  Source generated by Haxe Objective-C target
//



#import "Array.h"
#import "HxIterator.h"
#import "String.h"

@interface NSMutableArray ( Array )

- (id)hx_objectAtIndex:(NSInteger)index;
- (void)hx_replaceObjectAtIndex:(NSInteger)index withObject:(id)withObject;
- (NSMutableArray<id>*)filter:(id)f;
- (NSMutableArray<id>*)map:(id)f;
- (id)iterator;
- (NSMutableArray<id>*)splice:(NSInteger)pos len:(NSInteger)len;
- (void)sort:(id)f;
- (NSMutableArray<id>*)slice:(NSInteger)pos end:(NSInteger)end;
- (id)shift;
- (void)reverse;
- (BOOL)remove:(id)x;
- (void)unshift:(id)x;
- (NSInteger)push:(id)x;
- (id)pop;
- (NSString*)toString;
- (NSString*)join:(NSString*)sep;
- (NSInteger)lastIndexOf:(id)x fromIndex:(NSInteger)fromIndex;
- (NSInteger)indexOf:(id)x fromIndex:(NSInteger)fromIndex;
- (void)insert:(NSInteger)pos x:(id)x;
- (NSMutableArray<id>*)copy;
- (NSMutableArray<id>*)concat:(NSMutableArray<id>*)a;
@property (nonatomic) NSInteger length;
- (id)init;

@end

