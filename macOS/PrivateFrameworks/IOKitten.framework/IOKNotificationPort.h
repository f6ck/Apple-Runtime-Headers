//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IOKNotificationPort : NSObject
{
    struct IONotificationPort *_port;
}

@property(readonly, nonatomic) struct IONotificationPort *port; // @synthesize port=_port;
- (void)dealloc;
@property(readonly, nonatomic) unsigned int machPort;
- (id)initOnDispatchQueue:(id)arg1;
- (id)initWithMasterPort:(unsigned int)arg1 onDispatchQueue:(id)arg2;
- (id)init;

@end

