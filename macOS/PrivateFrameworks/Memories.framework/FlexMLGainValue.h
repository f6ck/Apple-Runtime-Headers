//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlexMLGainValue : NSObject
{
    float _gain;
    CDStruct_1b6d18a9 _segmentTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 segmentTime; // @synthesize segmentTime=_segmentTime;
@property(readonly, nonatomic) float gain; // @synthesize gain=_gain;
- (long long)compare:(id)arg1;
- (id)initWithGain:(float)arg1 segmentTime:(CDStruct_1b6d18a9)arg2;

@end

