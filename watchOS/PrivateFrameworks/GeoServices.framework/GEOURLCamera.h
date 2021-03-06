//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOURLCamera : PBCodable <NSCopying>
{
    double _altitude;
    double _heading;
    double _latitude;
    double _longitude;
    double _pitch;
    struct {
        unsigned int has_altitude:1;
        unsigned int has_heading:1;
        unsigned int has_latitude:1;
        unsigned int has_longitude:1;
        unsigned int has_pitch:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAltitude;
@property(nonatomic) double altitude;
@property(nonatomic) _Bool hasPitch;
@property(nonatomic) double pitch;
@property(nonatomic) _Bool hasHeading;
@property(nonatomic) double heading;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) double longitude;
@property(nonatomic) _Bool hasLatitude;
@property(nonatomic) double latitude;

@end

