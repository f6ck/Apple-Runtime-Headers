//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarRoundedCornerView.h>

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>
#import <UIKitCore/_UIStatusBarPersistentAnimation-Protocol.h>

@class CALayer, NSString, UIAccessibilityHUDItem, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPillView : _UIStatusBarRoundedCornerView <_UIStatusBarDisplayable, _UIStatusBarPersistentAnimation>
{
    _Bool _pulsing;
    UIColor *_pillColor;
    UIView *_subviewForBaselineAlignment;
    CALayer *_pulseLayer;
    struct UIEdgeInsets _alignmentRectInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *pulseLayer; // @synthesize pulseLayer=_pulseLayer;
@property(nonatomic) __weak UIView *subviewForBaselineAlignment; // @synthesize subviewForBaselineAlignment=_subviewForBaselineAlignment;
@property(retain, nonatomic) UIColor *pillColor; // @synthesize pillColor=_pillColor;
@property(nonatomic) _Bool pulsing; // @synthesize pulsing=_pulsing;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (id)viewForLastBaselineLayout;
- (void)applyStyleAttributes:(id)arg1;
- (void)_updateBackgroundColor;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)isUserInteractionEnabled;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (void)resumePersistentAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

