//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface _PUISwitchWellView : UIView
{
    BOOL _on;
    BOOL _showOnOffImages;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    UIView *_onImageView;
    UIView *_offImageView;
}

@property(retain, nonatomic) UIView *offImageView; // @synthesize offImageView=_offImageView;
@property(retain, nonatomic) UIView *onImageView; // @synthesize onImageView=_onImageView;
@property(nonatomic) BOOL showOnOffImages; // @synthesize showOnOffImages=_showOnOffImages;
- (void)updateWellColor;
- (id)initWithTintColor:(id)arg1 onTintColor:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) BOOL on; // @synthesize on=_on;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)layoutSubviews;

@end
