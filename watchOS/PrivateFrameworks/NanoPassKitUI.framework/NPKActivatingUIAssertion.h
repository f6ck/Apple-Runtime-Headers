//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSLSActivatingUIAssertion;

@interface NPKActivatingUIAssertion : NSObject
{
    CDUnknownBlockType _invalidationHandler;
    CSLSActivatingUIAssertion *_carouselAssertion;
    unsigned long long _usageCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long usageCount; // @synthesize usageCount=_usageCount;
@property(retain, nonatomic) CSLSActivatingUIAssertion *carouselAssertion; // @synthesize carouselAssertion=_carouselAssertion;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)invalidate;
- (_Bool)releaseCarouselAssertion;
- (void)dealloc;
- (void)releaseUsage;
- (void)retainUsage;
- (id)initWithInvalidationHandler:(CDUnknownBlockType)arg1;

@end

