//
//  LengthProtocol.h
//  Pods
//
//  Created by materik on 15/02/16.
//
//

#import <Foundation/Foundation.h>

@class Centimeter, Foot, Inch, Meter;

@protocol LengthProtocol <NSObject>

- (Centimeter *)convertToCentimeters;
- (Foot *)convertToFeet;
- (Inch *)convertToInches;
- (Meter *)convertToMeters;

@end
