/*
	NSPrinter.h
	Application Kit
	Copyright (c) 1994-2011, Apple Inc.
	All rights reserved.
*/

#import <Foundation/NSGeometry.h>
#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

/* Valid return values for -[NSPrinter statusForTable:].
*/
enum {
    NSPrinterTableOK = 0,
    NSPrinterTableNotFound = 1,
    NSPrinterTableError = 2
};
typedef NSUInteger NSPrinterTableStatus;

extern class NSPrinterextends NSObject<NSCopying, NSCoding> {
    @private
    NSString *_printerName;
    void *_printer;
    NSDictionary *_cachedDeviceDescription;
    int _ppdCreationNum;
    void *_ppdNodes;
    void *_ppdPriv;
#if __LP64__
    id _reserved[3];
#else
    unsigned char _compatibilityPadding[20];
#endif
}

/* Return an array of strings that contain the human-readable names of all available printers.
*/
+ (NSArray *)printerNames;

/* Return an array of strings that contain the human-readable descriptions of the makes and models of all available printers. The array may contain fewer entries than the array that would be returned by an invocation of +printerNames.
*/
+ (NSArray *)printerTypes;

/* Given a human-readable printer name of the sort that appears in a Print panel's "Printer:" popup menu, return an instance of NSPrinter if the named printer is available, nil otherwise.
*/
+ (NSPrinter *)printerWithName:(NSString *)name;

/* Given a string of the sort returned by +printerTypes:, return the first printer whose description matches, or nil if no available printer matches.
*/
+ (NSPrinter *)printerWithType:(NSString *)type;

/* Return the printer's human-readable name, or an empty string for failure.
*/
- (NSString *)name;

/* Return a human-readable description of the printer's make and model, or an empty string for failure.
*/
- (NSString *)type;

/* Return the PostScript language level of the printer if it is a PostScript printer, or 0 if it is not a PostScript printer or for failure.
*/
- (Int)languageLevel;

/* Given a valid paper name, return the corresponding paper size in points, or NSZeroSize for failure.
*/
- (NSSize)pageSizeForPaper:(NSString *)paperName;

/* Return the status of the named table in the printer's PostScript Printer Description (PPD) if the PPD is available. NSPrinterTableNotFound is returned for every table name if no PPD is available.
*/
- (NSPrinterTableStatus)statusForTable:(NSString *)tableName;

/* Methods for accessing the information in the printer's PPD. If no PPD is available for the printer, values such as NO, 0, NSZeroRect, NSZeroSize, and nil are returned.
*/
- (BOOL)isKey:(NSString *)key inTable:(NSString *)table;
- (BOOL)booleanForKey:(NSString *)key inTable:(NSString *)table;
- (float)floatForKey:(NSString *)key inTable:(NSString *)table;
- (int)intForKey:(NSString *)key inTable:(NSString *)table;
- (NSRect)rectForKey:(NSString *)key inTable:(NSString *)table;
- (NSSize)sizeForKey:(NSString *)key inTable:(NSString *)table;
- (NSString *)stringForKey:(NSString *)key inTable:(NSString *)table;
- (NSArray *)stringListForKey:(NSString *)key inTable:(NSString *)table;

/* Return a dictionary that describes the printing device using entries keyed by the NSDevice... strings declared in NSGraphics.h. The only entry that is guaranteed to exist in the returned dictionary is NSDeviceIsPrinter.
*/
- (NSDictionary *)deviceDescription;

}

extern class NSPrinter(NSDeprecated)

/* A method that was deprecated in Mac OS 10.2. -[NSPrinter imageRectForPaper:] will attempt to determine and return the bounds of the imageable area for a particular paper name, but querying such information by paper name alone is not reliable. Use -[NSPrintInfo imageablePageBounds], which was introduced in Mac OS 10.2, instead.
*/
- (NSRect)imageRectForPaper:(NSString *)paperName NS_DEPRECATED_MAC(10_0, 10_2);

/* Methods that were deprecated in Mac OS 10.2. NSPrinter's implementations of these methods return values that are not reliable or meaningful for some printers.
*/
- (BOOL)acceptsBinary NS_DEPRECATED_MAC(10_0, 10_2);
- (BOOL)isColor NS_DEPRECATED_MAC(10_0, 10_2);
- (BOOL)isFontAvailable:(NSString *)faceName NS_DEPRECATED_MAC(10_0, 10_2);
- (BOOL)isOutputStackInReverseOrder NS_DEPRECATED_MAC(10_0, 10_2);

/* Methods that were deprecated in Mac OS 10.2. NSPrinter's implementation of each of these methods returns nil.
*/
+ (NSPrinter *)printerWithName:(NSString *)name domain:(NSString *)domain includeUnavailable:(BOOL)flag NS_DEPRECATED_MAC(10_0, 10_2);
- (NSString *)domain NS_DEPRECATED_MAC(10_0, 10_2);
- (NSString *)host NS_DEPRECATED_MAC(10_0, 10_2);
- (NSString *)note NS_DEPRECATED_MAC(10_0, 10_2);

}
