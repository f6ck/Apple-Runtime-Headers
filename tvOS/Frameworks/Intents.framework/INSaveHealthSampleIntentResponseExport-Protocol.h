//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, NSArray, NSString;

@protocol INSaveHealthSampleIntentResponseExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *punchoutUrl;
@property(copy, nonatomic) NSArray *valuesUserProvidedUnits;
@property(copy, nonatomic) NSString *userProvidedUnit;
@property(copy, nonatomic) NSArray *valuesDefaultUnits;
@property(copy, nonatomic) NSString *defaultUnit;
@property(copy, nonatomic) INDateComponentsRange *recordDate;
@property(copy, nonatomic) NSArray *sampleUuids;
@property(readonly, nonatomic) long long code;
@end

