//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUICActivityIndicatorView, UIButton, UIImageView;

@interface _MKUserTrackingButtonController : NSObject
{
    id <MKUserTrackingButtonTarget> _target;
    id <MKUserTrackingView> _userTrackingView;
    int _state;
    UIImageView *_imageView;
    UIButton *_button;
    PUICActivityIndicatorView *_activityIndicatorView;
}

- (void).cxx_destruct;
- (void)_updateState;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)dealloc;
- (id)_activityIndicatorView;
- (id)_expandAnimation;
- (void)_updateLoading;
- (void)_reloadState;
- (id)_contentAnimation;
- (id)_shrinkAnimation;
- (BOOL)_shouldAnimateFromState:(int)arg1 toState:(int)arg2;
- (void)_authorizationStatusChanged:(id)arg1;
@property(retain, nonatomic) id <MKUserTrackingView> userTrackingView; // @synthesize userTrackingView=_userTrackingView;
- (id)_imageForState:(int)arg1 controlState:(unsigned int)arg2;
- (id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4;
- (void)_goToNextMode:(id)arg1;

@end
