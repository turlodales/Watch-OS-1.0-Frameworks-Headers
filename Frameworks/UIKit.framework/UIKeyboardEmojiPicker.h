//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UIImageView, UITableView;

@interface UIKeyboardEmojiPicker : UIKBKeyView <UITableViewDelegate, UITableViewDataSource>
{
    UIImageView *_container;
    UITableView *_picker;
    UIImageView *_innerShadow;
}

- (id)defaultIndexPath;
@property(readonly) UITableView *picker; // @synthesize picker=_picker;
- (BOOL)shouldCache;
- (id)container;
- (id)containerView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

