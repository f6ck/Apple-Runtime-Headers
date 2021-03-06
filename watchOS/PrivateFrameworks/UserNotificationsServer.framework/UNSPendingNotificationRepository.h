//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UNSBundleLibrarian, UNSKeyedDataStoreRepository, UNSKeyedObservable;
@protocol OS_dispatch_queue;

@interface UNSPendingNotificationRepository : NSObject
{
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
    UNSBundleLibrarian *_librarian;
}

- (void).cxx_destruct;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_performMigration;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_notifyObserversOfChangesFrom:(id)arg1 to:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)_queue_setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_setPendingNotificationDictionaries:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_pendingNotificationDictionariesForBundleIdentifier:(id)arg1;
- (void)contentProtectionStateChangedForFirstUnlock:(_Bool)arg1;
- (void)performMigration;
- (void)applicationStateDidRestore;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (id)allBundleIdentifiers;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 librarian:(id)arg3;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3;
- (int)_maxObjectsPerKey;

@end

