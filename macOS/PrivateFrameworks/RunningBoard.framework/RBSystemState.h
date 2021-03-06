//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>
#import <RunningBoard/NSCopying-Protocol.h>
#import <RunningBoard/NSMutableCopying-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    NSMutableSet *_tags;
    BOOL _preventLaunch;
    BOOL _preventIdleSleep;
    NSMutableSet *_preventIdleSleepIdentifiers;
    BOOL _throttleBestEffortNetworking;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) NSSet *preventIdleSleepIdentifiers; // @synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers;
@property(readonly, nonatomic) BOOL throttleBestEffortNetworking; // @synthesize throttleBestEffortNetworking=_throttleBestEffortNetworking;
@property(readonly, nonatomic) BOOL preventIdleSleep; // @synthesize preventIdleSleep=_preventIdleSleep;
@property(readonly, nonatomic) BOOL preventLaunch; // @synthesize preventLaunch=_preventLaunch;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

