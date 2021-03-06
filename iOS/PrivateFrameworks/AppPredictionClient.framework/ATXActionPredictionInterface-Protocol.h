//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ATXActionResponse, ATXContext, NSArray;

@protocol ATXActionPredictionInterface
- (void)sendFeedbackWithResponse:(ATXActionResponse *)arg1;
- (void)getActionPredictionsForContext:(ATXContext *)arg1 includeBundleIds:(NSArray *)arg2 excludeBundleIds:(NSArray *)arg3 includeActionTypes:(NSArray *)arg4 excludeActionTypes:(NSArray *)arg5 limit:(unsigned long long)arg6 reply:(void (^)(ATXActionResponse *, NSError *))arg7;
- (void)shouldDisplayDailyRoutineForContext:(ATXContext *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(NSArray *)arg1 candidateActionTypes:(NSArray *)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 limit:(int)arg5 reply:(void (^)(ATXActionResponse *, NSError *))arg6;
@end

