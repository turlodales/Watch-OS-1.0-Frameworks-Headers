//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface UIPrinterSetupDisplayPINView : UIView
{
    UILabel *_titleLabel;
    UIButton *_nextButton;
}

@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
- (void)setMessage:(id)arg1 showButton:(BOOL)arg2;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
