//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface DGFastHighShadFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputHighlightAmount;
    NSNumber *inputShadowAmount;
    NSNumber *inputRadius;
}

+ (id)filterWithName:(id)arg1;
+ (void)initialize;
- (void)setDefaults;
- (id)outputImage;
- (struct CGRect)expandByOneROI:(long long)arg1 destRect:(struct CGRect)arg2;
- (id)customAttributes;

@end

