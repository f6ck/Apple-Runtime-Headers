//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SSDistributedNotificationCenterObserver : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)dealloc;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

