//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerInteractiveTransitioning.h"

@class NSString, QLPreviewController;

@interface QLPreviewTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    BOOL showing;
    id <UIViewControllerContextTransitioning> _transitionContext;
}

@property(readonly) QLPreviewController *previewController;
@property BOOL showing; // @synthesize showing;
- (void)startInteractiveTransition:(id)arg1;
@property id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateStatusBarWithDuration:(double)arg1;
- (void)didTransitionWithAnimationEnding:(BOOL)arg1;
- (void)willTransitionWithAnimationEnding:(BOOL)arg1;
- (int)_transitionStateForAnimationEnding:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

