//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBCodable <NSCopying>
{
    double _arrivalDate;
    GEOMapItemStorage *_destinationLocation;
    double _expirationDate;
    int _transportType;
    struct {
        unsigned int has_arrivalDate:1;
        unsigned int has_expirationDate:1;
        unsigned int has_transportType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExpirationDate;
@property(nonatomic) double expirationDate;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType;
@property(retain, nonatomic) GEOMapItemStorage *destinationLocation;
@property(readonly, nonatomic) _Bool hasDestinationLocation;
@property(nonatomic) _Bool hasArrivalDate;
@property(nonatomic) double arrivalDate;

@end

