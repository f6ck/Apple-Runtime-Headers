//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <CloudDocs/BROperationClient-Protocol.h>

@class NSObject, NSString;
@protocol BRCancellable, OS_dispatch_queue;

@interface BROperation : NSOperation <BROperationClient>
{
    id _remoteOperation;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _uuid[16];
    id _executionTransation;
    _Bool _finished;
    _Bool _waitForRemoteToBeCancelled;
    _Bool _nonDiscretionary;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool nonDiscretionary; // @synthesize nonDiscretionary=_nonDiscretionary;
@property(nonatomic) _Bool waitForRemoteToBeCancelled; // @synthesize waitForRemoteToBeCancelled=_waitForRemoteToBeCancelled;
@property(retain, nonatomic) NSObject<BRCancellable> *remoteOperation; // @synthesize remoteOperation=_remoteOperation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_queue;
@property(readonly, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (oneway void)invalidate;
- (oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2;
- (oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2;
- (void)_setRemoteOperation:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (id)remoteObject;
- (_Bool)finishIfCancelled;
- (_Bool)_finishIfCancelled;
- (void)cancel;
- (void)start;
- (void)_setExecuting:(_Bool)arg1;
@property(readonly, getter=isExecuting) _Bool executing;
- (void)_setFinished:(_Bool)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

