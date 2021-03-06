//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UIImage, _UIActivityUserDefaults;

@interface _UIActivityUserDefaultsViewController : UITableViewController
{
    NSArray *_activities;
    _UIActivityUserDefaults *_userDefaults;
    UIImage *_placeholderImage;
}

@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (id)initWithActivities:(id)arg1 userDefaults:(id)arg2;
- (void)toggleActivityHiddenForRowAtIndexPath:(id)arg1;
- (void)toggleActivityHiddenForControl:(id)arg1;
- (id)settingsImageForActivity:(id)arg1;
- (id)activityForRowAtIndexPath:(id)arg1;
- (int)preferredActivityCategory;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(retain, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end

