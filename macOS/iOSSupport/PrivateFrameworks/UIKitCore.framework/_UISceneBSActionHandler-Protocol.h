//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class FBSScene, FBSSceneTransitionContext, NSSet, UIScene, UISceneSession, _UISceneConnectionOptionsContext;

@protocol _UISceneBSActionHandler <NSObject>
- (NSSet *)_respondToActions:(NSSet *)arg1 forFBSScene:(FBSScene *)arg2 inUIScene:(UIScene *)arg3 fromTransitionContext:(FBSSceneTransitionContext *)arg4;

@optional
- (_UISceneConnectionOptionsContext *)_launchOptionsFromActions:(NSSet *)arg1 forFBSScene:(FBSScene *)arg2 uiSceneSession:(UISceneSession *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
@end

