//
//  Array
//  HelloWorld
//
//  Source generated by Haxe Swift target
//



class Array  {
	
	
	func hx_objectAtIndex (index index :Int?) -> AnyObject? {
		
		if (index >= [self count]) while ([self count] <= index) [self addObject:[NSNull null]]
		var obj :AnyObject?
		if ([obj isKindOfClass:[NSNull class]]) obj = nil
		return obj
	}
	func hx_replaceObjectAtIndex (index index :Int?, withObject withObject :AnyObject?) {
		
		if (index >= [self count]) while ([self count] <= index) [self addObject:[NSNull null]]
		[self replaceObjectAtIndex:index withObject:(withObject==nil?[NSNull null]:withObject)]
	}
	func filter (f f :AnyObject?) -> Array? {
		
		return nil
	}
	func map (f f :AnyObject?) -> Array? {
		
		return nil
	}
	func iterator () -> AnyObject? {
		
		var it :HxIterator?
		it.arr = self
		it.len = self.length
		return it
	}
	func splice (pos pos :Int?, len len :Int?) -> Array? {
		
		NSArray *newArray = [self subarrayWithRange:NSMakeRange(pos, len)]
		(self removeObjectsInArray)(:newArray)
		return (Array arrayWithArray)(:newArray)
	}
	func sort (f f :AnyObject?) {
		
	}
	func slice (pos pos :Int?, end end :Int?) -> Array? {
		
		// Optional arguments
		if (!end) end = nil;
		
		return self.splice(pos:pos, len:end - pos)
	}
	func shift () -> AnyObject? {
		
		if (self.length > 0) {
			
			var obj :AnyObject?
			(self removeObjectAtIndex)(:0)
			return obj
		}
		return nil
	}
	func reverse () {
		
		var reverseArray :AnyObject?
	}
	func remove (x x :AnyObject?) -> Bool? {
		
		var containsObject :Bool?
		if (containsObject) {
			(self removeObject)(:x)
		}
		return containsObject
	}
	func unshift (x x :AnyObject?) {
		
		[self insertObject:(x!=nil?x:[NSNull null]) atIndex:0]
	}
	func push (x x :AnyObject?) -> Int? {
		
		[self addObject:(x!=nil?x:[NSNull null])]
		return (self count)()
	}
	func pop () -> AnyObject? {
		
		if ((self count)() == 0) {
			return nil
		}
		var theLastObject :AnyObject?
		if ([theLastObject isKindOfClass:[NSNull class]]) theLastObject = nil
		(self removeLastObject)()
		return theLastObject
	}
	func toString () -> String? {
		
		return NSMutableString.stringWithString(:(self description)())
	}
	func join (sep sep :String?) -> String? {
		
		return NSMutableString.stringWithString(:(self componentsJoinedByString)(:sep))
	}
	func lastIndexOf (x x :AnyObject?, fromIndex fromIndex :Int?) -> Int? {
		
		// Optional arguments
		if (!fromIndex) fromIndex = nil;
		
		return 0
	}
	func indexOf (x x :AnyObject?, fromIndex fromIndex :Int?) -> Int? {
		
		// Optional arguments
		if (!fromIndex) fromIndex = nil;
		
		return 0
	}
	func insert (pos pos :Int?, x x :AnyObject?) {
		
		[self insertObject:(x!=nil?x:[NSNull null]) atIndex:pos]
	}
	func copy () -> Array? {
		
		return (Array arrayWithArray)(:self)
	}
	func concat (a a :Array?) -> Array? {
		
		var b :Array?
		(b addObjectsFromArray)(:self)
		(b addObjectsFromArray)(:a)
		return b
	}
	var length :Int?
	func init () {
		
		super.init()
	}
}
