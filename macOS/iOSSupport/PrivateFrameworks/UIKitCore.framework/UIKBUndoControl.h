//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class NSLayoutConstraint, UIImageView, UIKBUndoStyling, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIKBUndoControl : UIControl
{
    long long _type;
    UIKBUndoStyling *_style;
    UIView *_springCoverView;
    UILabel *_label;
    UIImageView *_icon;
    NSLayoutConstraint *_coverConstraintLeftAnchor;
    NSLayoutConstraint *_coverConstraintRightAnchor;
    NSLayoutConstraint *_coverConstraintTopAnchor;
    NSLayoutConstraint *_coverConstraintBottomAnchor;
}

+ (id)controlLableTextByType:(long long)arg1 available:(BOOL)arg2;
+ (id)undoStateControlUnavailableLabelFont;
+ (id)undoStateControlLabelFont;
+ (id)undoInteractiveControlLabelFont;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *coverConstraintBottomAnchor; // @synthesize coverConstraintBottomAnchor=_coverConstraintBottomAnchor;
@property(retain, nonatomic) NSLayoutConstraint *coverConstraintTopAnchor; // @synthesize coverConstraintTopAnchor=_coverConstraintTopAnchor;
@property(retain, nonatomic) NSLayoutConstraint *coverConstraintRightAnchor; // @synthesize coverConstraintRightAnchor=_coverConstraintRightAnchor;
@property(retain, nonatomic) NSLayoutConstraint *coverConstraintLeftAnchor; // @synthesize coverConstraintLeftAnchor=_coverConstraintLeftAnchor;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *springCoverView; // @synthesize springCoverView=_springCoverView;
@property(retain, nonatomic) UIKBUndoStyling *style; // @synthesize style=_style;
@property(nonatomic) long long type; // @synthesize type=_type;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutControlForType:(long long)arg1 andStyling:(id)arg2;
- (id)controlImageByType:(long long)arg1;
- (id)imageSymbolConfiguration;
- (id)controlLabelImageNameByType:(long long)arg1 isRTL:(BOOL)arg2;
- (void)updateCoverWithTavelProcess:(double)arg1 isRTL:(BOOL)arg2;
- (void)updateUndoControlStyleForState:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithType:(long long)arg1 andStyling:(id)arg2;

@end

