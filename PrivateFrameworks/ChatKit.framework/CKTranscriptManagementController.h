//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKViewController.h>

#import "CKAttachmentViewControllerDelegate.h"
#import "CKTranscriptManagementNameFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CKAttachmentViewController, CKConversation, CKTranscriptManagementNameField, CKTranscriptManagementView, NSString;

@interface CKTranscriptManagementController : CKViewController <CKAttachmentViewControllerDelegate, CKTranscriptManagementNameFieldDelegate, UIGestureRecognizerDelegate>
{
    BOOL _mapHidden;
    BOOL _initialLoad;
    BOOL _removeMapViewAfterScrollAnimation;
    CKConversation *_conversation;
    CKTranscriptManagementView *_managementView;
    CKAttachmentViewController *_attachmentsController;
    CKTranscriptManagementNameField *_nameField;
}

@property(nonatomic) BOOL removeMapViewAfterScrollAnimation; // @synthesize removeMapViewAfterScrollAnimation=_removeMapViewAfterScrollAnimation;
- (void *)annotationABRecordForHandle:(id)arg1;
- (void)attachmentsController:(id)arg1 collectionViewDidChangeEditState:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewDidEndScrollingAnimation:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewDidScroll:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewWillBeginDragging:(id)arg2;
- (void)_updateMapInsets;
- (float)_mapHeightForCurrentBounds;
- (void)_updateAttachmentsInsets;
- (void)_scrollAttachmentsToTopAnimated:(BOOL)arg1;
- (BOOL)_conversationHasLeft;
@property(nonatomic) BOOL mapHidden; // @synthesize mapHidden=_mapHidden;
- (void)_mapViewTouched:(id)arg1;
@property(retain, nonatomic) CKTranscriptManagementView *managementView; // @synthesize managementView=_managementView;
@property(retain, nonatomic) CKAttachmentViewController *attachmentsController; // @synthesize attachmentsController=_attachmentsController;
- (void)setMapHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_handleDisplayNameChangedNotification:(id)arg1;
- (void)_handleLocationChangedNotification:(id)arg1;
- (void)_handleFriendshipStatusChangedNotification:(id)arg1;
@property(retain, nonatomic) CKTranscriptManagementNameField *nameField; // @synthesize nameField=_nameField;
- (void)nameField:(id)arg1 didCommitGroupName:(id)arg2;
- (void)_conversationJoinStateDidChange:(id)arg1;
@property(nonatomic, getter=isInitialLoad) BOOL initialLoad; // @synthesize initialLoad=_initialLoad;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (id)initWithConversation:(id)arg1;
- (struct UIEdgeInsets)_navigationBarInsets;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

