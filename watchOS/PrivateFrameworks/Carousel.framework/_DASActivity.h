//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/NSCopying-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface _DASActivity : NSObject <NSCopying>
{
    _Bool _cancelAfterDeadline;
    _Bool _requestsApplicationLaunch;
    _Bool _requiresDeviceInactivity;
    _Bool _shouldBePersisted;
    _Bool _requiresNetwork;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    CDUnknownBlockType _startHandler;
    CDUnknownBlockType _suspendHandler;
    unsigned int _schedulingPriority;
    NSDate *_startAfter;
    NSDate *_startBefore;
    unsigned int _duration;
    NSDictionary *_userInfo;
    NSString *_bundleId;
    NSArray *_relatedApplications;
    NSString *_launchReason;
}

+ (id)applicationLaunchActivityWithName:(id)arg1 priority:(unsigned int)arg2 forApplication:(id)arg3 withReason:(id)arg4 duration:(unsigned int)arg5 startingAfter:(id)arg6 startingBefore:(id)arg7;
+ (id)activityWithName:(id)arg1 priority:(unsigned int)arg2 duration:(unsigned int)arg3 startingAfter:(id)arg4 startingBefore:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool requiresNetwork; // @synthesize requiresNetwork=_requiresNetwork;
@property(nonatomic) _Bool shouldBePersisted; // @synthesize shouldBePersisted=_shouldBePersisted;
@property(nonatomic) _Bool requiresDeviceInactivity; // @synthesize requiresDeviceInactivity=_requiresDeviceInactivity;
@property(nonatomic) _Bool requestsApplicationLaunch; // @synthesize requestsApplicationLaunch=_requestsApplicationLaunch;
@property(retain, nonatomic) NSString *launchReason; // @synthesize launchReason=_launchReason;
@property(retain, nonatomic) NSArray *relatedApplications; // @synthesize relatedApplications=_relatedApplications;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool cancelAfterDeadline; // @synthesize cancelAfterDeadline=_cancelAfterDeadline;
@property(retain, nonatomic) NSDate *startBefore; // @synthesize startBefore=_startBefore;
@property(retain, nonatomic) NSDate *startAfter; // @synthesize startAfter=_startAfter;
@property(nonatomic) unsigned int schedulingPriority; // @synthesize schedulingPriority=_schedulingPriority;
@property(copy, nonatomic) CDUnknownBlockType suspendHandler; // @synthesize suspendHandler=_suspendHandler;
@property(copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;

@end

