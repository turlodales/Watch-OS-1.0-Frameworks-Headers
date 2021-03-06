//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ABRepeatingGradientSeparatorView, UITextField;

@interface ABSplitTextFieldCell : UITableViewCell
{
    UITextField *_textFieldLeft;
    UITextField *_textFieldRight;
    ABRepeatingGradientSeparatorView *_separator;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) ABRepeatingGradientSeparatorView *separator; // @synthesize separator=_separator;
- (void)setNeedsUpdateConstraints;
- (void)updateConstraints;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
@property(retain, nonatomic) UITextField *textFieldRight; // @synthesize textFieldRight=_textFieldRight;
@property(retain, nonatomic) UITextField *textFieldLeft; // @synthesize textFieldLeft=_textFieldLeft;

@end

