//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityFoundation/AXFObserverManager.h>

@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AXFObserverManagerIPC : AXFObserverManager
{
    NSLock *__observerLock;
    NSObject<OS_dispatch_source> *__pruneTimer;
    NSObject<OS_dispatch_queue> *__pruneTimerQueue;
    NSMutableDictionary *__applicationAXObservers;
    NSMutableDictionary *__applicationLocks;
    NSMutableDictionary *__applicationObserverGroupSets;
    NSLock *__observerIDToAppLock;
    NSMutableDictionary *__observerIDToApp;
}

+ (id)shared;
+ (id)observerThread;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *_observerIDToApp; // @synthesize _observerIDToApp=__observerIDToApp;
@property(retain, nonatomic) NSLock *_observerIDToAppLock; // @synthesize _observerIDToAppLock=__observerIDToAppLock;
@property(retain, nonatomic) NSMutableDictionary *_applicationObserverGroupSets; // @synthesize _applicationObserverGroupSets=__applicationObserverGroupSets;
@property(retain, nonatomic) NSMutableDictionary *_applicationLocks; // @synthesize _applicationLocks=__applicationLocks;
@property(retain, nonatomic) NSMutableDictionary *_applicationAXObservers; // @synthesize _applicationAXObservers=__applicationAXObservers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_pruneTimerQueue; // @synthesize _pruneTimerQueue=__pruneTimerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *_pruneTimer; // @synthesize _pruneTimer=__pruneTimer;
@property(retain, nonatomic) NSLock *_observerLock; // @synthesize _observerLock=__observerLock;
- (void)fireObserverID:(long long)arg1 element:(id)arg2 info:(id)arg3;
- (BOOL)removeAllObserversForApplication:(id)arg1;
- (BOOL)removeObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 element:(id)arg4 application:(id)arg5;
- (BOOL)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 element:(id)arg4 application:(id)arg5 queue:(id)arg6;
- (void)_pruneObservers;
- (void)_cleanupNonObservingGroups;
- (void)unregisterApplication:(id)arg1;
- (BOOL)registerApplication:(id)arg1;
- (id)init;

@end

