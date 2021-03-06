//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface AXFMarshal : NSObject
{
    NSObject<OS_dispatch_group> *__group;
    NSObject<OS_dispatch_queue> *__syncQueue;
    NSObject<OS_dispatch_queue> *__widthQueue;
    NSObject<OS_dispatch_semaphore> *__width;
    NSMutableArray *__results;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *_results; // @synthesize _results=__results;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *_width; // @synthesize _width=__width;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_widthQueue; // @synthesize _widthQueue=__widthQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_syncQueue; // @synthesize _syncQueue=__syncQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *_group; // @synthesize _group=__group;
- (void)notify:(CDUnknownBlockType)arg1;
- (id)waitForResults:(long long)arg1;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

