//
//  PiratePigGame
//  PiratePig
//
//  Code generated by Haxe Objective-C target
//


#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "Array.h"
#import "Tile.h"
#import "haxe/Log.h"
#import "Math.h"
#import "PiratePigGame.h"
#import "Std.h"

@interface PiratePigGame : UIView 

+ (NSInteger)NUM_COLUMNS;
+ (void)setNUM_COLUMNS:(NSInteger)val;
+ (NSInteger)NUM_ROWS;
+ (void)setNUM_ROWS:(NSInteger)val;
+ (NSMutableArray<id>*)tileImages;
+ (void)setTileImages:(NSMutableArray<id>*)val;
- (void)resize:(NSInteger)newWidth newHeight:(NSInteger)newHeight;
- (void)loop:(NSTimer*)aTimer;
- (void)touchesCancelled:(NSSet*)touches withEvent:(UIEvent*)withEvent;
- (void)touchesEnded:(NSSet*)touches withEvent:(UIEvent*)withEvent;
- (void)touchesMoved:(NSSet*)touches withEvent:(UIEvent*)withEvent;
- (void)touchesBegan:(NSSet*)touches withEvent:(UIEvent*)withEvent;
- (void)dropTiles;
- (void)swapTile:(Tile*)tile targetRow:(NSInteger)targetRow targetColumn:(NSInteger)targetColumn;
- (void)removeTile:(NSInteger)row column:(NSInteger)column animate:(BOOL)animate;
- (void)addTile:(NSInteger)row column:(NSInteger)column animate:(BOOL)animate;
- (CGPoint)getPosition:(NSInteger)row column:(NSInteger)column;
- (NSMutableArray<id>*)findMatches:(BOOL)byRow accumulateScore:(BOOL)accumulateScore;
- (void)newGame;
- (void)construct;
- (void)initialize;
@property (nonatomic, strong) NSMutableArray<id> *usedTiles;
@property (nonatomic, strong) NSMutableArray<id> *tiles;
@property (nonatomic, strong) Tile *selectedTile;
@property (nonatomic) BOOL needToCheckMatches;
@property (nonatomic) CGPoint cacheMouse;
@property (nonatomic) NSInteger currentScore;
@property (nonatomic) CGFloat currentScale;
@property (nonatomic, strong) UIView *TileContainer;
@property (nonatomic, strong) UILabel *Score;
@property (nonatomic, strong) UIImageView *Logo;
@property (nonatomic, strong) UIView *Background;
- (id)init;

@end

