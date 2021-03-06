/*
    NSUserInterfaceItemIdentification.h
    Application Kit
    Copyright (c) 2006-2011, Apple Inc.
    All rights reserved.
*/

#import <Foundation/NSObject.h>
#import <AppKit/AppKitDefines.h>

@class NSString;

/* New to Mac OS 10.7 */
@protocol NSUserInterfaceItemIdentification
@required

/* A string that identifies this user interface item. The value can be set in Interface Builder.  If not set in Interface Builder, it will be automatically set to a value unique within the nib file when loaded from the nib. It should be set to a unique value on NSViews when they are intended to be used inside a view-based NSTableView. Identifiers should be unique per-window. For programmatically created user interface items, you would typically set this value in code after creating a control but before adding it to a window. You may also want to set an identifier on a window, after creating it programmatically, to identify the window easily when it is reopened. You should not change the identifier after a control is added to a window. Identifiers beginning with an underscore are reserved for the system.  In framework classes that implement this protocol, the accessor methods are not intended to be overridden.

To help avoid collision of identifiers, it is recommended that identifiers use the same prefix as is used for the framework or application.  For example, identifiers for standard AppKit interface items, such as the open panel, will begin with "NS".

The slash '/', backslash '\', and colon ':' characters are reserved and should not be used in identifiers.
 */
	public var  (copy) NSString *identifier;

}
