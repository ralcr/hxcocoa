//
//  MKPlacemark.h
//  MapKit
//
//  Copyright (c) 2009-2012, Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MKAnnotation.h>
#import <MapKit/MKFoundation.h>
#import <CoreLocation/CLLocation.h>
#import <CoreLocation/CLPlacemark.h>

MK_CLASS_AVAILABLE(NA, 3_0)
extern class MKPlacemark extends CLPlacemark <MKAnnotation> {
    
}

// An address dictionary is a dictionary in the same form as returned by 
// ABRecordCopyValue(person, kABPersonAddressProperty).
- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate
       addressDictionary:(NSDictionary *)addressDictionary;

// To create an MKPlacemark from a CLPlacemark, call [MKPlacemark initWithPlacemark:] passing the CLPlacemark instance that is returned by CLGeocoder.
// See CLGeocoder.h and CLPlacemark.h in CoreLocation for more information.

	public var String *countryCode;

}
