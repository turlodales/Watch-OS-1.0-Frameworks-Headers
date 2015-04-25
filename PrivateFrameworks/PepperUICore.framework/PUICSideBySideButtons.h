//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, PUICButton, UIColor;

@interface PUICSideBySideButtons : UIView
{
    PUICButton *_leftButton;
    PUICButton *_rightButton;
    BOOL _shouldCalculateFontSize;
    BOOL _primaryButtonEnabled;
    NSString *_leftTitle;
    NSString *_rightTitle;
    CDUnknownBlockType _leftActionBlock;
    CDUnknownBlockType _rightActionBlock;
    int _style;
    UIColor *_primaryColor;
    float _primaryColorPlatterAlpha;
}

+ (id)sideBySideButtons;
+ (void)_setupSideBySideButtonsSpec;
@property(nonatomic) float primaryColorPlatterAlpha; // @synthesize primaryColorPlatterAlpha=_primaryColorPlatterAlpha;
@property(copy, nonatomic) CDUnknownBlockType rightActionBlock; // @synthesize rightActionBlock=_rightActionBlock;
@property(copy, nonatomic) CDUnknownBlockType leftActionBlock; // @synthesize leftActionBlock=_leftActionBlock;
@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
- (float)_fontSizeFittingLeftLabel:(id)arg1 rightLabel:(id)arg2 inSize:(struct CGSize)arg3;
@property(nonatomic, getter=isPrimaryButtonEnabled) BOOL primaryButtonEnabled; // @synthesize primaryButtonEnabled=_primaryButtonEnabled;
- (id)_primaryAppColor;
- (void)_buttonAction:(id)arg1;
- (id)_defaultBackgroundColor;
- (id)_defaultTextColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (void).cxx_destruct;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
