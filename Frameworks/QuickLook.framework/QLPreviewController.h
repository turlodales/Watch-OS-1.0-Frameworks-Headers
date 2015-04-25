//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class QLPreviewControllerReserved;

@interface QLPreviewController : UIViewController
{
    QLPreviewControllerReserved *_reserved;
}

+ (BOOL)canPreviewItem:(id)arg1;
+ (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)copyPreviewItemToPasteboard:(id)arg1;
+ (id)titleForPreviewItem:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;
+ (BOOL)canPreviewDocumentType:(id)arg1;
+ (BOOL)_shouldPassThroughDocumentType:(id)arg1;
+ (id)_passThroughDocumentTypes;
+ (id)contentTypeForPreviewItem:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
@property int currentPreviewItemIndex;
- (void)_prepareDelayedAppearance;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
- (void)setSourceIsManaged:(BOOL)arg1;
- (id)printInfoForDocumentInteractionController:(id)arg1;
- (id)activityItemForDocumentInteractionController:(id)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (BOOL)sourceIsManaged;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (int)mode;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)_currentInteractionController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_commonInit;
- (void)didReceiveMemoryWarning;
- (BOOL)prefersStatusBarHidden;
- (int)preferredStatusBarStyle;
@property id <QLPreviewControllerDelegate> delegate;
@property id <QLPreviewControllerDataSource> dataSource;
- (void)reloadData;
- (void)dealloc;
- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
- (id)_fixedSpaceItemWithWidth:(float)arg1;
- (void)_hideOverlayWithStatusBar:(BOOL)arg1 duration:(double)arg2;
- (BOOL)_needsToolbar;
- (BOOL)_updateAVState;
- (id)_flexibleSpaceItem;
- (BOOL)_updateActionItem;
- (id)_listDescriptionStringWithTitle:(id)arg1;
- (id)_indexFormatter;
- (BOOL)_needsToolbarForTraitCollection:(id)arg1;
- (BOOL)_needsAVControls;
- (void)wirelessRoutesDidChange:(id)arg1;
- (void)_refreshListItem;
- (void)_refreshArchiveItem;
- (id)imageWithImage:(id)arg1 drawnOnTopOf:(id)arg2 stretchedToSize:(struct CGSize)arg3 scale:(float)arg4;
- (BOOL)canPrint;
- (void)navigationGoBackAction:(id)arg1;
- (void)playButtonAction:(id)arg1;
- (void)showArchiveContent:(id)arg1;
- (void)arrowsAction:(id)arg1;
- (void)customActionButtonTapped:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)overlayWasTappedInPreviewContentController:(id)arg1;
- (void)showContentsWasTappedInPreviewContentController:(id)arg1;
- (void)contentWasTappedInPreviewContentController:(id)arg1;
- (void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4;
- (void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3;
- (void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2;
- (void)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2;
- (int)numberOfPreviewItemsInPreviewContentController:(id)arg1;
- (int)currentSourceUUIDForPreviewContentController:(id)arg1;
- (id)_documentProxyForPreviewItem:(id)arg1;
- (id)previewContentController;
- (id)passThroughViewsForIndexSheet;
- (void)animateWhenReadyWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)showActionAsDefaultButton;
- (void)setShowActionAsDefaultButton:(BOOL)arg1;
- (BOOL)useCustomActionButton;
- (void)setUseCustomActionButton:(BOOL)arg1;
- (BOOL)blockRemoteImages;
- (void)prepareForPrinting;
- (BOOL)_canPrint;
- (id)_pdfPreviewDataAtURL:(id)arg1;
- (void)showArchiveContentAnimated:(BOOL)arg1;
- (void)_updateToolbarVisibilityWithTraitCollection:(id)arg1 animated:(BOOL)arg2;
- (void)_updateNavigationBarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(BOOL)arg3;
- (void)_updateToolbarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(BOOL)arg3;
- (void)_refreshListOrArchiveItem;
- (id)_updatedArchiveButton;
- (void)rightArrowAction:(id)arg1;
- (void)leftArrowAction:(id)arg1;
- (void)_updateRouteImages;
- (void)_removeChildPreviewContentControllerIfNeeded;
- (void)_createControls;
- (struct CGRect)_contentFrameForRemoteView;
- (BOOL)_overlayVisible;
- (void)_loadInternalViews;
- (BOOL)_addPreviewContentController;
- (void)_setupPreferredModeWithParentViewController:(id)arg1;
- (void)_setupWithMode:(int)arg1 parentViewController:(id)arg2;
- (int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2;
- (int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2 traitCollection:(id)arg3;
- (void)_contentWasTapped;
- (void)_setControlsOverlayVisible:(BOOL)arg1 withStatusBar:(BOOL)arg2 duration:(double)arg3;
- (void)_showGenericDisplayBundle;
- (void)_setCurrentPreviewItemIndex:(int)arg1 fromClient:(BOOL)arg2 showContentsIfPossible:(BOOL)arg3;
- (id)previewItemAtIndex:(int)arg1;
- (int)numberOfPreviewItems;
- (void)refreshCurrentPreviewItem;
- (void)_showOverlayWithStatusBar:(BOOL)arg1 duration:(double)arg2;
- (void)_showContentsIfPossibleAnimated:(BOOL)arg1;
- (void)_updateToolbarAnimated:(BOOL)arg1;
- (id)_displayedInteractionController;
- (void)_configurePreviewContentController;
- (void)_updateToolbarVisibilityAnimated:(BOOL)arg1;
- (id)_currentNavigationController;
- (void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(CDUnknownBlockType)arg2;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)_updateNavigationBarAnimated:(BOOL)arg1;
@property(readonly) id <QLPreviewItem> currentPreviewItem;
- (id)itemsSource;
- (void)_unloadInternalViews;
- (void)_runDeferredAnimationBlock;
- (void)_requestRemoteViewControllerIfNeeded;

@end
