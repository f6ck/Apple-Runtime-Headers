//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFColorPrimitive-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class NSString, UIColor;

@interface HFRGBColor : NSObject <HFColorPrimitive, NSCopying>
{
    float _red;
    float _green;
    float _blue;
}

@property(readonly, nonatomic) float blue; // @synthesize blue=_blue;
@property(readonly, nonatomic) float green; // @synthesize green=_green;
@property(readonly, nonatomic) float red; // @synthesize red=_red;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)hf_RGBColorRepresentation;
- (void)getHue:(float *)arg1 saturation:(float *)arg2 brightness:(float *)arg3;
@property(readonly, copy, nonatomic) UIColor *UIColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUIColor:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

