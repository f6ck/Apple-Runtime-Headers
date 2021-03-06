//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSCopying-Protocol.h>
#import <FlightUtilities/NSSecureCoding-Protocol.h>

@class CLPlacemark, NSString, NSTimeZone;

@interface FUAirport : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_IATACode;
    NSString *_name;
    NSString *_city;
    NSTimeZone *_timeZone;
    CLPlacemark *_placemark;
    struct CLLocationCoordinate2D _location;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) NSString *city; // @synthesize city=_city;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *IATACode; // @synthesize IATACode=_IATACode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchPlacemarkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

