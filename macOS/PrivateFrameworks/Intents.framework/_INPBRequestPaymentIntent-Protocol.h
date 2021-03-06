//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBContact, _INPBCurrencyAmount, _INPBIntentMetadata, _INPBString;

@protocol _INPBRequestPaymentIntent <NSObject>
@property(readonly, nonatomic) BOOL hasPayer;
@property(retain, nonatomic) _INPBContact *payer;
@property(readonly, nonatomic) BOOL hasNote;
@property(retain, nonatomic) _INPBString *note;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasCurrencyAmount;
@property(retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@end

