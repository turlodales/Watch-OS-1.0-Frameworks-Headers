//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString;

@interface ABBannerView : UITableViewCell
{
    NSString *_title;
    NSString *_value;
}

+ (float)defaultHeight;
- (void)showMenu;
- (void)copy:(id)arg1;
- (void)_updateLabel;
- (BOOL)canBecomeFirstResponder;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setTitle:(id)arg1 value:(id)arg2;
- (void)menuDidHide:(id)arg1;
- (void)cellWasDoubleTapped:(id)arg1;
- (void)cellWasLongPressed:(id)arg1;

@end
