//
//  CustomMapView
//  HelloWorld
//
//  Source generated by Haxe Swift target
//

import MapKit


class CustomMapView : MKMapView {
	
	
	func locate (lat lat :Float?, _long _long :Float?, zoom zoom :Float?) {
		
		CLLocationCoordinate2D zoomLocation
		zoomLocation.latitude = lat
		zoomLocation.longitude = _long
		MKCoordinateRegion viewRegion = MKCoordinateRegionMakeWithDistance (zoomLocation, 40000, 40000)
		MKCoordinateRegion adjustedRegion = [self regionThatFits:viewRegion]
		self.setRegion(region:adjustedRegion, animated:true)
	}
	func locateMe () {
		
		self.showsUserLocation = true
	}
	func locateLondon () {
		
		self.locate(lat:51.4788, _long:0.0106, zoom:1.2)
	}
}
