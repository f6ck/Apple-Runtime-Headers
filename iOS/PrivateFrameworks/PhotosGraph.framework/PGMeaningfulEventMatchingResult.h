//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PGMeaningfulEventRequiredCriteria;

@interface PGMeaningfulEventMatchingResult : NSObject
{
    _Bool _isMatching;
    _Bool _isReliable;
    double _score;
    PGMeaningfulEventRequiredCriteria *_requiredCriteria;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PGMeaningfulEventRequiredCriteria *requiredCriteria; // @synthesize requiredCriteria=_requiredCriteria;
@property(readonly, nonatomic) _Bool isReliable; // @synthesize isReliable=_isReliable;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) _Bool isMatching; // @synthesize isMatching=_isMatching;
- (id)description;
- (id)initWithIsMatching:(_Bool)arg1 score:(double)arg2 isReliable:(_Bool)arg3 requiredCriteria:(id)arg4;

@end

