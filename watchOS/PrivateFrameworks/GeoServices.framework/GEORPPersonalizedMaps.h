//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPAddress;

@interface GEORPPersonalizedMaps : PBCodable <NSCopying>
{
    GEORPAddress *_address;
    int _addressType;
    int _placeType;
    CDStruct_2d9f5d20 _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(retain, nonatomic) GEORPAddress *address;
@property(readonly, nonatomic) _Bool hasAddress;
- (int)StringAsPlaceType:(id)arg1;
- (id)placeTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceType;
@property(nonatomic) int placeType;
- (int)StringAsAddressType:(id)arg1;
- (id)addressTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAddressType;
@property(nonatomic) int addressType;

@end

