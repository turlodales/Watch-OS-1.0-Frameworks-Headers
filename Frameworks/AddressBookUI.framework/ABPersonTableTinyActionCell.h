//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ABPersonTableActionDataSource, UIView;

@interface ABPersonTableTinyActionCell : UITableViewCell
{
    ABPersonTableActionDataSource *_actionDataSource;
    UIView *_tinyActionContentView;
    id <ABStyleProvider> _styleProvider;
    id <ABPersonTableTinyActionDelegate> _delegate;
}

- (void)refreshActions;
- (void)setBackgroundView:(id)arg1;
@property(nonatomic) id <ABPersonTableTinyActionDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) ABPersonTableActionDataSource *actionDataSource; // @synthesize actionDataSource=_actionDataSource;
- (void)_resizeInnerContentView;
- (id)_tinyActionContentView;
@property(readonly) unsigned int actionsCount;

@end
