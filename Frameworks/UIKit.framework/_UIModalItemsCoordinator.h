//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, _UIModalItemAppViewController, _UIModalItemHostingWindow, _UIModalItemSBViewController;

@interface _UIModalItemsCoordinator : NSObject
{
    NSMapTable *_presentingSessionsMapTable;
    NSMapTable *_sessionForItemMapTable;
    _UIModalItemSBViewController *__viewControllerForSBAlerts;
    _UIModalItemHostingWindow *__hostingWindowForSBAlerts;
    _UIModalItemAppViewController *__viewControllerForAlerts;
    _UIModalItemHostingWindow *__hostingWindowForAlerts;
}

+ (void)_getRidOfViewControllerForAlerts;
+ (void)_getRidOfViewControllerForSBAlerts;
+ (void)_desaturateUIForSB;
+ (void)_resaturateUIForSB;
+ (id)sharedModalItemsCoordinator;
+ (void)noteOrientationChangingTo:(int)arg1 animated:(BOOL)arg2;
- (void)showAfterSpringBoardAlert:(BOOL)arg1;
- (void)hideForSpringBoardAlert:(BOOL)arg1;
- (void)_hidePresentingSessionForModalItem:(id)arg1 keepDimmingView:(BOOL)arg2 animated:(BOOL)arg3;
- (id)hostingViewControllerForViewController:(id)arg1 andModalItem:(id)arg2 create:(BOOL)arg3;
- (id)_rootViewControllerForModalItem:(id)arg1;
- (id)_presentingViewControllerForAlertCompatibility;
- (void)_showModalItemsForType:(int)arg1 presentingViewController:(id)arg2 undimSpotlightView:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_presentingSessionForViewController:(id)arg1 ofItemsType:(int)arg2;
@property(retain, nonatomic) NSMapTable *sessionForItemMapTable; // @synthesize sessionForItemMapTable=_sessionForItemMapTable;
@property(retain, nonatomic) NSMapTable *presentingSessionsMapTable; // @synthesize presentingSessionsMapTable=_presentingSessionsMapTable;
- (void)_notifyDissmissedItem:(id)arg1;
- (void)_showNextModalItemIfNecessaryAfterHidingItem:(id)arg1 showingItem:(id)arg2 animate:(BOOL)arg3;
- (void)_getRidOfViewControllerForAlerts;
- (void)_getRidOfViewControllerForSBAlerts;
@property(retain, nonatomic) _UIModalItemHostingWindow *_hostingWindowForAlerts; // @synthesize _hostingWindowForAlerts=__hostingWindowForAlerts;
@property(retain, nonatomic) _UIModalItemAppViewController *_viewControllerForAlerts; // @synthesize _viewControllerForAlerts=__viewControllerForAlerts;
@property(retain, nonatomic) _UIModalItemHostingWindow *_hostingWindowForSBAlerts; // @synthesize _hostingWindowForSBAlerts=__hostingWindowForSBAlerts;
@property(retain, nonatomic) _UIModalItemSBViewController *_viewControllerForSBAlerts; // @synthesize _viewControllerForSBAlerts=__viewControllerForSBAlerts;
- (void)_hideModalItemsForType:(int)arg1 presentingViewController:(id)arg2 dimSpotlightView:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_presentingViewControllerForAlertCompatibilityCreateIfNeeded:(BOOL)arg1;
- (id)_presentingViewControllerForSBCompatibility;
- (void)_presentItem:(id)arg1 replacingItem:(id)arg2 inViewController:(id)arg3 animated:(BOOL)arg4;
- (void)_addItemToStack:(id)arg1 replacingItem:(id)arg2 forPresentingViewController:(id)arg3;
- (id)presentingViewControllerForItem:(id)arg1 create:(BOOL)arg2;
- (void)_updateItem:(id)arg1 animated:(BOOL)arg2;
- (void)_notifyDelegateDidPresentItem:(id)arg1;
- (void)_notifyDelegateWillPresentItem:(id)arg1;
- (void)_notifyDelegateDidDismissItem:(id)arg1 withIndex:(int)arg2;
- (void)_notifyDelegateWillDismissItem:(id)arg1 withIndex:(int)arg2;
- (void)_dismissItem:(id)arg1 withTappedButtonIndex:(int)arg2 animated:(BOOL)arg3 notifyDelegate:(BOOL)arg4;
- (BOOL)_notifyDelegateModalItem:(id)arg1 tappedButtonAtIndex:(int)arg2;
- (void)noteOrientationChangingTo:(int)arg1 animated:(BOOL)arg2;
- (id)init;
- (void)dealloc;

@end
