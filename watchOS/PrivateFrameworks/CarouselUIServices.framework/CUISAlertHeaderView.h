//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CUISAlertIconView, CUISAlertPlatterView, UIImageView, UILabel, UITapGestureRecognizer;
@protocol CUISAlertHeaderViewDataSource, CUISAlertHeaderViewDelegate;

@interface CUISAlertHeaderView : UIView
{
    _Bool _emailWrappingRequired;
    struct CGRect _cachedLongLookTitleFrame;
    id <CUISAlertHeaderViewDataSource> _dataSource;
    id <CUISAlertHeaderViewDelegate> _delegate;
    unsigned int _style;
    UIView *_quickLookIconView;
    UILabel *_quickLookTitleLabel;
    UILabel *_quickLookTitleSecondLabel;
    UILabel *_quickLookSubtitleLabel;
    UIImageView *_quickLookSubtitleIcon;
    CUISAlertIconView *_longLookIconView;
    CUISAlertPlatterView *_longLookPlatter;
    UILabel *_longLookTitleLabel;
    UIImageView *_longLookTitleIcon;
    unsigned int _iconType;
    UITapGestureRecognizer *_quickLookTapGesture;
    UIView *_quickLookTitleContainer;
    UIView *_quickLookSubtitleContainer;
    struct CGSize _titleFitSize;
    struct CGSize _secondTitleFitSize;
    struct CGSize _subtitleFitSize;
}

+ (float)idealHeightForLongLook;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *quickLookSubtitleContainer; // @synthesize quickLookSubtitleContainer=_quickLookSubtitleContainer;
@property(retain, nonatomic) UIView *quickLookTitleContainer; // @synthesize quickLookTitleContainer=_quickLookTitleContainer;
@property(retain, nonatomic) UITapGestureRecognizer *quickLookTapGesture; // @synthesize quickLookTapGesture=_quickLookTapGesture;
@property(nonatomic) struct CGSize subtitleFitSize; // @synthesize subtitleFitSize=_subtitleFitSize;
@property(nonatomic) struct CGSize secondTitleFitSize; // @synthesize secondTitleFitSize=_secondTitleFitSize;
@property(nonatomic) struct CGSize titleFitSize; // @synthesize titleFitSize=_titleFitSize;
@property(nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;
@property(readonly, nonatomic) UIImageView *longLookTitleIcon; // @synthesize longLookTitleIcon=_longLookTitleIcon;
@property(retain, nonatomic) UILabel *longLookTitleLabel; // @synthesize longLookTitleLabel=_longLookTitleLabel;
@property(retain, nonatomic) CUISAlertPlatterView *longLookPlatter; // @synthesize longLookPlatter=_longLookPlatter;
@property(retain, nonatomic) CUISAlertIconView *longLookIconView; // @synthesize longLookIconView=_longLookIconView;
@property(readonly, nonatomic) UIImageView *quickLookSubtitleIcon; // @synthesize quickLookSubtitleIcon=_quickLookSubtitleIcon;
@property(retain, nonatomic) UILabel *quickLookSubtitleLabel; // @synthesize quickLookSubtitleLabel=_quickLookSubtitleLabel;
@property(retain, nonatomic) UILabel *quickLookTitleSecondLabel; // @synthesize quickLookTitleSecondLabel=_quickLookTitleSecondLabel;
@property(retain, nonatomic) UILabel *quickLookTitleLabel; // @synthesize quickLookTitleLabel=_quickLookTitleLabel;
@property(retain, nonatomic) UIView *quickLookIconView; // @synthesize quickLookIconView=_quickLookIconView;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) __weak id <CUISAlertHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CUISAlertHeaderViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_didTapQuickLook:(id)arg1;
- (void)_didTapLongLookIcon:(id)arg1;
- (void)animateToLongLookWithAdditionalAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateInLongLookWithDuration:(double)arg1 additionalAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateInQuickLookWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_layoutLongLook;
- (void)_layoutQuickLook;
- (void)layoutInStyle:(unsigned int)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateLongLookTitleWithText:(id)arg1;
- (_Bool)_lineWrapForEmailInText:(id)arg1 firstRange:(struct _NSRange *)arg2 secondRange:(struct _NSRange *)arg3;
- (_Bool)_hasSingleLineSubtitle;
- (_Bool)_hasSingleLineTitle;
- (void)reloadData;
- (void)_setLongLookTitleIcon:(id)arg1;
@property(readonly, nonatomic) struct CGPoint longLookIconCenter;
@property(readonly, nonatomic) float longLookTitleFrameOriginX;
@property(readonly, nonatomic) struct CGSize longLookTitleFrameSize;
@property(readonly, nonatomic) struct CGSize longLookIconSize;
- (_Bool)_isCriticalAlertStyle;
- (void)_reloadQuickLookLabelsWithTitle:(id)arg1 subtitle:(id)arg2 maxTitleWidth:(float)arg3 maxSubtitleWidth:(float)arg4;
- (void)_initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

