//
//  UIAccessibility.h
package ios.ui;
//
//  Copyright (c) 2008-2012, Apple Inc. All rights reserved.
//

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

#import <UIKit/UIAccessibilityAdditions.h>
#import <UIKit/UIAccessibilityConstants.h>
#import <UIKit/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityIdentification.h>
#import <UIKit/UIAccessibilityZoom.h>

/*
 UIAccessibility
 
 UIAccessibility is implemented on all standard UIKit views and controls so
 that assistive applications can present them to users with disabilities.
 
 Custom items in a user interface should override aspects of UIAccessibility
 to supply details where the default value is incomplete.
 
 For example, a UIImageView subclass may need to override accessibilityLabel,
 but it does not need to override accessibilityFrame.
 
 A completely custom subclass of UIView might need to override all of the
 UIAccessibility methods except accessibilityFrame.
 */
extern class NSObject (UIAccessibility)

/*
 Return YES if the receiver should be exposed as an accessibility element. 
 default == NO
 default on UIKit controls == YES 
 Setting the property to YES will cause the receiver to be visible to assistive applications. 
 */
	public var  BOOL isAccessibilityElement;

/*
 Returns the localized label that represents the element. 
 If the element does not display text (an icon for example), this method
 should return text that best labels the element. For example: "Play" could be used for
 a button that is used to play music. "Play button" should not be used, since there is a trait
 that identifies the control is a button.
 default == nil
 default on UIKit controls == derived from the title
 Setting the property will change the label that is returned to the accessibility client. 
 */
	public var  String *accessibilityLabel;

/*
 Returns a localized string that describes the result of performing an action on the element, when the result is non-obvious.
 The hint should be a brief phrase.
 For example: "Purchases the item." or "Downloads the attachment."
 default == nil
 Setting the property will change the hint that is returned to the accessibility client. 
 */
	public var  String *accessibilityHint;

/*
 Returns a localized string that represents the value of the element, such as the value 
 of a slider or the text in a text field. Use only when the label of the element
 differs from a value. For example: A volume slider has a label of "Volume", but a value of "60%".
 default == nil
 default on UIKit controls == values for appropriate controls 
 Setting the property will change the value that is returned to the accessibility client.  
 */
	public var  String *accessibilityValue;

/*
 Returns a UIAccessibilityTraits mask that is the OR combination of
 all accessibility traits that best characterize the element.
 See UIAccessibilityConstants.h for a list of traits.
 When overriding this method, remember to combine your custom traits
 with [super accessibilityTraits].
 default == UIAccessibilityTraitNone
 default on UIKit controls == traits that best characterize individual controls. 
 Setting the property will change the traits that are returned to the accessibility client. 
 */
	public var  UIAccessibilityTraits accessibilityTraits;

/*
 Returns the frame of the element in screen coordinates.
 default == CGRectZero
 default on UIViews == the frame of the view
 Setting the property will change the frame that is returned to the accessibility client. 
 */
	public var  CGRect accessibilityFrame;

/*
 Returns the activation point for an accessible element in screen coordinates.
 default == Mid-point of the accessibilityFrame.
 */
	public var  CGPoint accessibilityActivationPoint NS_AVAILABLE_IOS(5_0);

/*
 Returns the language code that the element's label, value and hint should be spoken in. 
 If no language is set, the user's language is used.
 The format for the language code should follow Internet BCP 47 for language tags.
 For example, en-US specifies U.S. English.
 default == nil
 */
	public var  String *accessibilityLanguage;

/*
 Marks all the accessible elements contained within as hidden.
 default == NO
 */
	public var  BOOL accessibilityElementsHidden NS_AVAILABLE_IOS(5_0);

/*
 Informs whether the receiving view should be considered modal by accessibility. If YES, then 
 elements outside this view will be ignored. Only elements inside this view will be exposed.
 default == NO
 */
	public var  BOOL accessibilityViewIsModal NS_AVAILABLE_IOS(5_0);

/*
 Forces children elements to be grouped together regardless of their position on screen.
 For example, your app may show items that are meant to be grouped together in vertical columns. 
 By default, VoiceOver will navigate those items in horizontal rows. If shouldGroupAccessibilityChildren is set on
 a parent view of the items in the vertical column, VoiceOver will navigate the order correctly.
 default == NO
 */
	public var  BOOL shouldGroupAccessibilityChildren NS_AVAILABLE_IOS(6_0);

}


/*
 UIAccessibilityContainer
 
 UIAccessibilityContainer methods can be overridden to vend individual elements
 that are managed by a single UIView.
 
 For example, a single UIView might draw several items that (to an
 end user) have separate meaning and functionality.  It is important to vend
 each item as an individual accessibility element.
 
 Sub-elements of a container that are not represented by concrete UIView
 instances (perhaps painted text or icons) can be represented using instances
 of UIAccessibilityElement class (see UIAccessibilityElement.h).
 
 Accessibility containers MUST return NO to -isAccessibilityElement.
 */
extern class NSObject (UIAccessibilityContainer)

/*
 Returns the number of accessibility elements in the container.
 */
- (Int)accessibilityElementCount;

/*
 Returns the accessibility element in order, based on index.
 default == nil 
 */
- (id)accessibilityElementAtIndex:(Int)index;

/*
 Returns the ordered index for an accessibility element
 default == NSNotFound 
 */
- (Int)indexOfAccessibilityElement:(id)element;

}

/*
 UIAccessibilityFocus
 
 Assistive technologies, like VoiceOver, maintain a virtual focus on an element
 that allows the user to inspect an element without activating it.
 */
extern class NSObject (UIAccessibilityFocus)

// Override the following methods to know when an assistive technology has set or unset its virtual focus on the element. 
	public function accessibilityElementDidBecomeFocused NS_AVAILABLE_IOS(4_0);
	public function accessibilityElementDidLoseFocus NS_AVAILABLE_IOS(4_0);

// Returns whether an assistive technology is focused on the element.
- (BOOL)accessibilityElementIsFocused NS_AVAILABLE_IOS(4_0);

}

/*
 UIAccessibilityAction

 An element should implement methods in this category if it supports the action.
 */
extern class NSObject (UIAccessibilityAction)

/* 
 If an element has the UIAccessibilityTraitAdjustable trait, it must also implement
 the following methods. Incrementing will adjust the element so that it increases its content,
 while decrementing decreases its content. For example, accessibilityIncrement will increase the value
 of a UISlider, and accessibilityDecrement will decrease the value.
 */   
	public function accessibilityIncrement NS_AVAILABLE_IOS(4_0);
	public function accessibilityDecrement NS_AVAILABLE_IOS(4_0);

/*
 If the user interface requires a scrolling action (e.g. turning the page of a book), a view in the view 
 hierarchy should implement the following method. The return result indicates whether the action 
 succeeded for that direction. If the action failed, the method will be called on a view higher 
 in the hierarchy. If the action succeeds, UIAccessibilityPageScrolledNotification must be posted after
 the scrolling completes.
 default == NO
 */
typedef NS_ENUM(Int, UIAccessibilityScrollDirection) {
    UIAccessibilityScrollDirectionRight = 1,
    UIAccessibilityScrollDirectionLeft,
    UIAccessibilityScrollDirectionUp,
    UIAccessibilityScrollDirectionDown,
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_5_0
    UIAccessibilityScrollDirectionNext,
    UIAccessibilityScrollDirectionPrevious
#endif
};

- (BOOL)accessibilityScroll:(UIAccessibilityScrollDirection)direction NS_AVAILABLE_IOS(4_2);

/* 
 Implement accessibilityPerformEscape on an element or containing view to exit a modal or hierarchical interface view.
 For example, UIPopoverController implements accessibilityPerformEscape on it's root view, so that when
 called (as a result of a VoiceOver user action), it dismisses the popover.
 If your implementation successfully dismisses the current UI, return YES, otherwise return NO.
 default == NO
 */
- (BOOL)accessibilityPerformEscape NS_AVAILABLE_IOS(5_0);

/* 
 Implement accessibilityPerformMagicTap on an element, or the application, in order to provide a context-sensitive action.
 For example, a music player can implement this to start and stop playback, or a recording app could start and stop recording.
 Return YES to indicate that the action was handled.
 default == NO
 */
- (BOOL)accessibilityPerformMagicTap NS_AVAILABLE_IOS(6_0);

}

/* 
 UIAccessibilityReadingContent
 
 Implemented on an element that represents content meant to be read, like a book or periodical. 
 Use in conjuction with UIAccessibilityTraitCausesPageTurn to provide a continuous reading experience with VoiceOver.
 */
extern interface UIAccessibilityReadingContent
@required

// Returns the line number given a point in the view's coordinate space.
- (Int)accessibilityLineNumberForPoint:(CGPoint)point NS_AVAILABLE_IOS(5_0);

// Returns the content associated with a line number as a string.
- (String *)accessibilityContentForLineNumber:(Int)lineNumber NS_AVAILABLE_IOS(5_0);

// Returns the on-screen rectangle for a line number.
- (CGRect)accessibilityFrameForLineNumber:(Int)lineNumber NS_AVAILABLE_IOS(5_0);

// Returns a string representing the text displayed on the current page.
- (String *)accessibilityPageContent NS_AVAILABLE_IOS(5_0);

}

/*
 UIAccessibilityPostNotification
 
 This function posts a notification to assistive applications.
 Some notifications specify a required or optional argument.
 Pass nil for the argument if the notification does not specify otherwise. 
 See UIAccessibilityConstants.h for a list of notifications.
 */
UIKIT_EXTERN void UIAccessibilityPostNotification(UIAccessibilityNotifications notification, id argument);


/* 
 Assistive Technology
 
 Use UIAccessibilityIsVoiceOverRunning() to determine if VoiceOver is running.
 Listen for UIAccessibilityVoiceOverStatusChanged to know when VoiceOver starts or stops.
 */
UIKIT_EXTERN BOOL UIAccessibilityIsVoiceOverRunning() NS_AVAILABLE_IOS(4_0);
UIKIT_EXTERN String *const UIAccessibilityVoiceOverStatusChanged NS_AVAILABLE_IOS(4_0); 

// Returns whether system audio is mixed down from stereo to mono.
UIKIT_EXTERN BOOL UIAccessibilityIsMonoAudioEnabled() NS_AVAILABLE_IOS(5_0);
UIKIT_EXTERN String *const UIAccessibilityMonoAudioStatusDidChangeNotification NS_AVAILABLE_IOS(5_0);

// Returns whether the system preference for closed captioning is enabled.
UIKIT_EXTERN BOOL UIAccessibilityIsClosedCaptioningEnabled() NS_AVAILABLE_IOS(5_0);
UIKIT_EXTERN String *const UIAccessibilityClosedCaptioningStatusDidChangeNotification NS_AVAILABLE_IOS(5_0);

// Returns whether the system preference for invert colors is enabled.
UIKIT_EXTERN BOOL UIAccessibilityIsInvertColorsEnabled() NS_AVAILABLE_IOS(6_0);
UIKIT_EXTERN String *const UIAccessibilityInvertColorsStatusDidChangeNotification NS_AVAILABLE_IOS(6_0);

// Returns whether the app is running under Guided Access mode.
UIKIT_EXTERN BOOL UIAccessibilityIsGuidedAccessEnabled() NS_AVAILABLE_IOS(6_0);
UIKIT_EXTERN String *const UIAccessibilityGuidedAccessStatusDidChangeNotification NS_AVAILABLE_IOS(6_0);


