//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CHHapticEventParameter : NSObject
{
    NSString *_param;
    float _value;
}

- (void).cxx_destruct;
@property float value; // @synthesize value=_value;
@property(readonly) NSString *parameterID; // @synthesize parameterID=_param;
- (id)initWithParameterID:(id)arg1 value:(float)arg2;
- (id)init;

@end

