//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFButton.h"

@class UILabel, _UIBackdropView;

@interface SBSUIWallpaperMotionButton : SBFButton
{
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    float _maxRightLabelWidth;
    _UIBackdropView *_backdropView;
}

- (float)_separationWidth;
- (float)_labelHorizontalPadding;
- (id)_newBackdropView;
- (float)_maxRightLabelWidth;
- (void)_updateForStateChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
