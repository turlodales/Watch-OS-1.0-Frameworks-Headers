//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "_UIDocumentPickerOverviewDelegate.h"
#import "_UIDocumentPickerRemoteViewControllerContaining.h"
#import "_UIDocumentPickerViewController.h"

@class NSArray, NSString, NSURL;

@interface _UIDocumentPickerViewServiceViewController : UINavigationController <_UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentPickerViewController>
{
    BOOL _displayedAsMenu;
    BOOL _hasBeenDismissed;
    int _displayMode;
    NSArray *_pickableTypes;
    unsigned int _pickerMode;
    NSURL *_uploadURL;
    NSArray *_auxiliaryOptions;
    NSString *_currentPickerIdentifier;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void)_willAppearInRemoteViewController;
- (void)_dismissWithImportURL:(id)arg1;
@property(nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
- (void)overviewController:(id)arg1 selectedAuxiliaryOptionWithIdentifier:(id)arg2;
- (void)dismissWithURL:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)overviewController:(id)arg1 selectedDocumentPickerWithIdentifier:(id)arg2;
@property(nonatomic) BOOL displayedAsMenu; // @synthesize displayedAsMenu=_displayedAsMenu;
- (void)_showLocationPopup:(id)arg1;
- (void)_doneButton:(id)arg1;
- (void)_showPicker:(id)arg1;
- (void)setupNavigationItemForPicker:(id)arg1 isRoot:(BOOL)arg2;
- (void)_showTopLevelViewController;
@property(retain, nonatomic) NSString *currentPickerIdentifier; // @synthesize currentPickerIdentifier=_currentPickerIdentifier;
- (void)_dismissWithFileProviderURL:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_createBookmarkAndDismissWithCloudURL:(id)arg1;
@property(nonatomic) BOOL hasBeenDismissed; // @synthesize hasBeenDismissed=_hasBeenDismissed;
@property(readonly, nonatomic) id <_UIDocumentPickerViewControllerHost> hostingViewController;
- (void)beginDownloadingURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic, setter=_setAuxiliaryOptions:) NSArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
- (void)_setUploadURL:(id)arg1;
- (void)_documentPickerDidDismiss;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) int sortOrder;
@property(nonatomic) unsigned int pickerMode; // @synthesize pickerMode=_pickerMode;
@property(copy, nonatomic) NSArray *pickableTypes; // @synthesize pickableTypes=_pickableTypes;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_preferredContentSizeChanged:(struct CGSize)arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
@property(copy, nonatomic) NSURL *uploadURL; // @synthesize uploadURL=_uploadURL;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_setPickerMode:(unsigned int)arg1;
- (void)_setPickableTypes:(id)arg1;
- (void)_prepareForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissViewController;
- (void)_showDefaultPicker;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
