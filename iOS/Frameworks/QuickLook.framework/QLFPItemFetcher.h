//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLUbiquitousItemFetcher.h>

#import <QuickLook/FPItemCollectionDelegate-Protocol.h>

@class FPItem, FPItemCollection, NSString, QLURLHandler;

__attribute__((visibility("hidden")))
@interface QLFPItemFetcher : QLUbiquitousItemFetcher <FPItemCollectionDelegate>
{
    FPItem *_fpItem;
    QLURLHandler *_fetchedURLHandler;
    FPItemCollection *_itemCollection;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)prepareShareableItem:(CDUnknownBlockType)arg1;
- (id)itemSize;
- (_Bool)isLongFetchOperation;
- (id)shareableItem;
- (id)fileURL;
- (void)dealloc;
- (void)_urlHandler:(CDUnknownBlockType)arg1;
- (void)_unregisterItemCollectionIfNeeded;
- (void)_registerItemCollectionIfNeeded;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithFPItem:(id)arg1 shouldZipPackageIfNeeded:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

