//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PBSRestrictionService;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVContentRestrictionsService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueueForRequests;
    _Bool _presentingPasscodePrompt;
    _Bool _profileRestrictingMovies;
    _Bool _profileRestrictingTVShows;
    _Bool _requestingAccess;
    id _requestToken;
}

+ (id)shared;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isRequestingAccess) _Bool requestingAccess; // @synthesize requestingAccess=_requestingAccess;
@property(retain, nonatomic) id requestToken; // @synthesize requestToken=_requestToken;
@property(nonatomic, getter=hasProfileRestrictingTVShows) _Bool profileRestrictingTVShows; // @synthesize profileRestrictingTVShows=_profileRestrictingTVShows;
@property(nonatomic, getter=hasProfileRestrictingMovies) _Bool profileRestrictingMovies; // @synthesize profileRestrictingMovies=_profileRestrictingMovies;
@property(nonatomic, getter=isPresentingPasscodePrompt) _Bool presentingPasscodePrompt; // @synthesize presentingPasscodePrompt=_presentingPasscodePrompt;
- (void)_updateProfileRestrictions;
@property(readonly, nonatomic) PBSRestrictionService *restrictionService;
- (void)cancelRequest:(id)arg1;
- (id)validateMediaContentRating:(id)arg1 allowInteraction:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldRevalidateMediaContentRating:(id)arg1 validatedRating:(id)arg2 validatedDate:(id)arg3;
- (void)_presentDeniedByProfile:(CDUnknownBlockType)arg1;
- (unsigned long long)_pbsRestrictedContentTypeFromDomain:(long long)arg1;
- (long long)_restrictionValueFromPBSRestrictionValue:(unsigned long long)arg1;
- (id)init;
- (id)_init;

@end

