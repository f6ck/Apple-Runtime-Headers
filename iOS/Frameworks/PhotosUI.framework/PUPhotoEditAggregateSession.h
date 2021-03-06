//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUPhotoEditAggregateSession : NSObject
{
    _Bool _toggledOriginal;
    _Bool _pluginStarted;
    _Bool _pluginSaved;
    _Bool _shouldUseVideoKeys;
    _Bool __hasCropSuggestion;
    _Bool __hasPerspectiveCropSuggestion;
    _Bool __autoCropAdjusted;
    _Bool __autoCropReset;
    double _originalDuration;
}

@property(nonatomic, setter=_setAutoCropReset:) _Bool _autoCropReset; // @synthesize _autoCropReset=__autoCropReset;
@property(nonatomic, setter=_setAutoCropAdjusted:) _Bool _autoCropAdjusted; // @synthesize _autoCropAdjusted=__autoCropAdjusted;
@property(nonatomic, setter=_setHasPerspectiveCropSuggestion:) _Bool _hasPerspectiveCropSuggestion; // @synthesize _hasPerspectiveCropSuggestion=__hasPerspectiveCropSuggestion;
@property(nonatomic, setter=_setHasCropSuggestion:) _Bool _hasCropSuggestion; // @synthesize _hasCropSuggestion=__hasCropSuggestion;
@property(nonatomic) double originalDuration; // @synthesize originalDuration=_originalDuration;
@property(nonatomic) _Bool shouldUseVideoKeys; // @synthesize shouldUseVideoKeys=_shouldUseVideoKeys;
@property(nonatomic) _Bool pluginSaved; // @synthesize pluginSaved=_pluginSaved;
@property(nonatomic) _Bool pluginStarted; // @synthesize pluginStarted=_pluginStarted;
@property(nonatomic) _Bool toggledOriginal; // @synthesize toggledOriginal=_toggledOriginal;
- (void)finishSessionWithEnd:(long long)arg1;
- (void)finishSessionWithEnd:(long long)arg1 newCompositionController:(id)arg2 oldCompositionController:(id)arg3;
- (void)_recordKeys:(id)arg1;
- (id)_sessionKeysWithEnd:(long long)arg1;
@property(readonly, nonatomic) __weak NSArray *_autoCropKeys;
- (void)notifyDidAdjustCrop;
- (void)notifyDidResetCrop;
- (void)notifyDidApplyPerspectiveAutoCrop;
- (void)notifyDidApplyAutoCrop;
- (struct __CFString *)_keyForSessionEnd:(long long)arg1;

@end

