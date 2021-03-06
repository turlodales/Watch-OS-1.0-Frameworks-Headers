//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertySimpleCell.h>

@class ABTransportButton, UIColor, UIImageView;

@interface ABPropertySimpleTransportCell : ABPropertySimpleCell
{
    ABTransportButton *_transportIcon1;
    ABTransportButton *_transportIcon2;
    UIImageView *_starView;
    BOOL _allowsActions;
    UIColor *_actionsColor;
}

- (void)_contentSizeCategoryDidChange:(id)arg1;
@property(nonatomic) BOOL allowsActions; // @synthesize allowsActions=_allowsActions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
@property(retain, nonatomic) UIColor *actionsColor; // @synthesize actionsColor=_actionsColor;
@property(readonly, nonatomic) UIImageView *standardStarView;
@property(readonly, nonatomic) ABTransportButton *standardTransportIcon;
- (void)_updateStarImageForView:(id)arg1;
- (void)updateTransportButtons;
- (void)updateStarIcon;
@property(readonly, nonatomic) BOOL shouldShowStar;
@property(readonly, nonatomic) ABTransportButton *transportIcon2;
@property(readonly, nonatomic) ABTransportButton *transportIcon1;
- (void)transportButtonClicked:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (id)rightMostView;
- (BOOL)shouldPerformDefaultAction;
- (id)variableConstraints;
- (void)setCardGroupItem:(id)arg1;

@end

