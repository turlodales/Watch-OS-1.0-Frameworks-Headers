//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class UILabel;

@interface KeychainSyncHeaderView : UIView <PSHeaderFooterView>
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    BOOL _usesCompactLayout;
}

@property(nonatomic) BOOL usesCompactLayout; // @synthesize usesCompactLayout=_usesCompactLayout;
- (void)setDetailText:(id)arg1;
- (float)preferredHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (void)setTitleText:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;

@end

