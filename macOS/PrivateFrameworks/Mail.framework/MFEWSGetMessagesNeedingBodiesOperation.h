//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFEWSPersistenceTaskOperation.h>

@class NSArray;
@protocol MFEWSGetMessagesNeedingBodiesOperationDelegate;

@interface MFEWSGetMessagesNeedingBodiesOperation : MFEWSPersistenceTaskOperation
{
    id <MFEWSGetMessagesNeedingBodiesOperationDelegate> _delegate;
    NSArray *_mailboxes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(nonatomic) __weak id <MFEWSGetMessagesNeedingBodiesOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)main;
- (id)init;
- (id)initWithMailboxes:(id)arg1;

@end

