//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DADaemonSupport/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol DAEventsCalendarAvailabilityResponseConsumer <NSObject>
- (void)calendarAvailabilityRequestFinishedWithError:(NSError *)arg1;
- (void)calendarAvailabilityRequestReturnedResults:(NSDictionary *)arg1;
@end

