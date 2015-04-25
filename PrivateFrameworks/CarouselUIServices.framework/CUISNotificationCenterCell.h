//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICTableViewCell.h"

@class CUISNotificationCenterCellHeaderView, CUISNotificationCenterCellPlatterView, NSString, UIColor, UIImage, UIView;

@interface CUISNotificationCenterCell : PUICTableViewCell
{
    NSString *_reuseIdentifier;
    CUISNotificationCenterCellHeaderView *_headerView;
    CUISNotificationCenterCellPlatterView *_platterView;
    UIView *_bodyView;
}

@property(copy, nonatomic) NSString *appName;
- (struct CGRect)actionBarFrame;
@property(retain, nonatomic) UIImage *icon;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) UIColor *appNameTextColor;
@property(retain, nonatomic) UIColor *bodyBackgroundColor;
- (void)_layoutInFrame:(struct CGRect)arg1;
- (void)createSubviews;
@property(nonatomic) unsigned int iconStyle;
@property(retain, nonatomic) UIColor *headerBackgroundColor;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
