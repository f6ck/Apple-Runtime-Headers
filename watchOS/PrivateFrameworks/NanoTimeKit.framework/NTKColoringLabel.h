//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKLegibilityLabel.h>

#import <NanoTimeKit/CLKUILabel-Protocol.h>
#import <NanoTimeKit/NTKColoringView-Protocol.h>
#import <NanoTimeKit/NTKTimeTravelState-Protocol.h>

@class CLKDevice, CLKFont, CLKTextProvider, NSAttributedString, NSNumber, NSParagraphStyle, NSString, UIColor, UIFont, UIView, _NTKColorManager;
@protocol CLKMonochromeFilterProvider;

@interface NTKColoringLabel : NTKLegibilityLabel <NTKColoringView, CLKUILabel, NTKTimeTravelState>
{
    CLKDevice *_device;
    unsigned int _options;
    _NTKColorManager *_colorManager;
    NSNumber *_updateToken;
    _Bool _updatedAfterTimeTravelStateChange;
    CLKFont *_preTimeTravelFont;
    _Bool _monochromeSnapshot;
    float _previousFraction;
    NSAttributedString *_originalString;
    UIView *_snapshot;
    _Bool _inTimeTravel;
    _Bool _uppercase;
    _Bool _usesTextProviderTintColoring;
    _Bool _isTextTruncated;
    _Bool _cachedSizeIsValid;
    _Bool _cachedOpticalEdgeInsetsIsValid;
    _Bool _usesTextProviderSize;
    UIColor *_overrideColor;
    CLKTextProvider *_textProvider;
    CLKFont *_textProviderFont;
    CLKFont *_textProviderSmallCapsBaseFont;
    float _maxWidth;
    NSParagraphStyle *_paragraphStyle;
    float _tracking;
    CDUnknownBlockType _nowProvider;
    CDUnknownBlockType _needsResizeHandler;
    int _twoToneStyleInMonochrome;
    id <CLKMonochromeFilterProvider> _filterProvider;
    struct CGSize _cachedSingleLineSize;
    struct UIEdgeInsets _cachedOpticalEdgeInsets;
}

+ (id)labelWithOptions:(unsigned int)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool usesTextProviderSize; // @synthesize usesTextProviderSize=_usesTextProviderSize;
@property(nonatomic) _Bool cachedOpticalEdgeInsetsIsValid; // @synthesize cachedOpticalEdgeInsetsIsValid=_cachedOpticalEdgeInsetsIsValid;
@property(readonly, nonatomic) struct UIEdgeInsets cachedOpticalEdgeInsets; // @synthesize cachedOpticalEdgeInsets=_cachedOpticalEdgeInsets;
@property(nonatomic) _Bool cachedSizeIsValid; // @synthesize cachedSizeIsValid=_cachedSizeIsValid;
@property(nonatomic) struct CGSize cachedSingleLineSize; // @synthesize cachedSingleLineSize=_cachedSingleLineSize;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property(nonatomic) int twoToneStyleInMonochrome; // @synthesize twoToneStyleInMonochrome=_twoToneStyleInMonochrome;
@property(copy, nonatomic) CDUnknownBlockType needsResizeHandler; // @synthesize needsResizeHandler=_needsResizeHandler;
@property(copy, nonatomic) CDUnknownBlockType nowProvider; // @synthesize nowProvider=_nowProvider;
@property(nonatomic) float tracking; // @synthesize tracking=_tracking;
@property(copy, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(readonly, nonatomic) _Bool isTextTruncated; // @synthesize isTextTruncated=_isTextTruncated;
@property(nonatomic) _Bool usesTextProviderTintColoring; // @synthesize usesTextProviderTintColoring=_usesTextProviderTintColoring;
@property(nonatomic) _Bool uppercase; // @synthesize uppercase=_uppercase;
@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) CLKFont *textProviderSmallCapsBaseFont; // @synthesize textProviderSmallCapsBaseFont=_textProviderSmallCapsBaseFont;
@property(retain, nonatomic) CLKFont *textProviderFont; // @synthesize textProviderFont=_textProviderFont;
@property(retain, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
@property(readonly, nonatomic) unsigned int options; // @synthesize options=_options;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) _Bool inTimeTravel; // @synthesize inTimeTravel=_inTimeTravel;
- (void)_setAnimationAlpha:(float)arg1;
- (void)_setUpSnapshot;
- (void)editingDidEnd;
- (void)_updateTwoToneLabelMonochromeColor;
- (void)updateMonochromeColorWithStyle:(int)arg1;
- (void)_transitionTwoToneLabelToMonochromeWithFraction:(float)arg1;
- (void)transitionToMonochromeWithFraction:(float)arg1 style:(int)arg2;
- (id)_fontWithMonospaceNumbers:(id)arg1;
- (void)_updateDynamicTracking;
- (void)setShadowOffset:(struct CGSize)arg1;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIFont *font;
- (id)_activeFont;
- (id)_font;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateCachedSize;
@property(readonly, nonatomic) struct UIEdgeInsets opticalInsets;
- (float)minimumWithFont:(id)arg1 smallCapsBaseFont:(id)arg2;
- (float)minimumWithFont:(id)arg1;
- (float)minimumWidth;
- (float)widthForMaxWidth:(float)arg1 withFont:(id)arg2 smallCapsBaseFont:(id)arg3;
- (float)widthForMaxWidth:(float)arg1 withFont:(id)arg2;
- (float)widthForMaxWidth:(float)arg1;
- (void)_requeryTextProviderAndNotify:(_Bool)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)tritium_forceUpdateColoringViews;
@property(nonatomic) _Bool usesLegibility; // @dynamic usesLegibility;
- (_Bool)usesLegibility:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)sizeToFit;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (float)_firstLineBaseline;
@property(readonly, nonatomic) float _lastLineBaseline;
@property(retain, nonatomic) UIColor *color;
- (id)initWithFrame:(struct CGRect)arg1 options:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) UIColor *contentColor; // @dynamic contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(nonatomic) int textAlignment;
@property(retain, nonatomic) UIColor *textColor;

@end

