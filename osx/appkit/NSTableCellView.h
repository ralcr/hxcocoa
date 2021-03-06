/*
    NSTableCellView.h
    Application Kit
    Copyright (c) 2009-2011, Apple Inc.
    All rights reserved.
*/

#import <Foundation/NSObject.h>

#import <AppKit/NSNibDeclarations.h>

#import <AppKit/NSView.h>
#import <AppKit/NSCell.h>
#import <AppKit/NSTableView.h>

@class NSTextField, NSImageView;

/* View Based NSTableView: The NSTableCellView is a reusable container view shown for a particular cell in the table. See NSTableView.h for more information. 
 */
NS_CLASS_AVAILABLE(10_7, NA)
extern class NSTableCellView extends NSView {
@private
    NSBackgroundStyle _backgroundStyle;
    id _objectValue;
    id _aux;
    NSTableViewRowSizeStyle _rowSizeStyle;

    NSTextField *_textField;
    NSImageView *_imageView;
}

/* The 'objectValue' is automatically set by the table when using bindings bindings, or the result from the dataSource method -tableView:objectValueForTableColumn:row:. Key Value Observing (KVO) compliant so user interface elements can be bound to the 'objectValue'. 
 */
	public var id objectValue;

/* The following two properties are provided for the developer to hook up as outlets. These outlets can then be accessed in -tableView:viewForTableColumn:row: and modified. Additional outlets can be added by subclassing NSTableCellView, adding appropriate ivars and properties, and hooking it up in Interface Builder.
 */
	public var (assign) IBOutlet NSTextField *textField;
	public var (assign) IBOutlet NSImageView *imageView;

/* The backgroundStyle property is automatically set by the enclosing NSTableRowView to let this view know what its background looks like. For instance, when the -backgroundStyle is NSBackgroundStyleDark, the view should use a light text color. Upon setting, the default implementation automatically forwards calls to all subviews that implement -setBackgroundStyle: or are an NSControl (which have NSCells that respond to -setBackgroundStyle:).
 */
	public var  NSBackgroundStyle backgroundStyle;

/* The rowSizeStyle is set by the NSTableView to its -effectiveRowSizeStyle. The cell view will layout the textField and imageView based on the rowSizeStyle. A value of NSTableViewRowSizeStyleDefault should never be set on the cell view, as it is an appropriate value only for the table. See NSTableView.h for more information. 
 */
	public var  NSTableViewRowSizeStyle rowSizeStyle;

/* Multi-Item Drag Support. The default implementation will return an array of up to two NSDraggingImageComponent instances -- one for the imageView and another for the textField (if not nil). These methods can be subclassed and overridden to provide a custom set of NSDraggingImageComponents to create the drag image from this view.
 */
	public var (retain, readonly) NSArray *draggingImageComponents;

}
