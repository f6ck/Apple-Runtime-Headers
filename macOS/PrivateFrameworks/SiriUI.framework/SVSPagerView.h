//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class SVSPagingScrollView;
@protocol SVSPagerViewDataSource, SVSPagerViewDelegate;

__attribute__((visibility("hidden")))
@interface SVSPagerView : NSView
{
    SVSPagingScrollView *_scrollView;
    NSView *_activePageView;
    unsigned long long _transitionState;
    id <SVSPagerViewDataSource> _dataSource;
    id <SVSPagerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SVSPagerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSPagerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) unsigned long long transitionState; // @synthesize transitionState=_transitionState;
@property(retain, nonatomic) NSView *activePageView; // @synthesize activePageView=_activePageView;
- (BOOL)isFlipped;
- (BOOL)_containsPageView:(id)arg1;
- (id)_pageViews;
@property(nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;
- (void)removePageView:(id)arg1;
- (void)addPageView:(id)arg1;
- (void)insertPageView:(id)arg1 atIndex:(long long)arg2;
- (void)reloadData;
- (void)layout;
- (void)viewDidMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

