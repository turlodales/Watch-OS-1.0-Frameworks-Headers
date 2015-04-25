//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "_UIDocumentPickerServiceInvalidating.h"

@class NSString, _UIDocumentPickerContainerModel, _UIDocumentPickerViewServiceViewController, _UINavigationControllerPalette;

@interface _UIDocumentPickerContainerViewController : UIViewController <_UIDocumentPickerServiceInvalidating>
{
    BOOL _rootContainer;
    UIViewController *_childViewController;
    _UIDocumentPickerContainerModel *_model;
    _UIDocumentPickerViewServiceViewController *_serviceViewController;
    _UINavigationControllerPalette *_searchPalette;
}

- (void)_doneButtonPressed;
- (void)displayModeChanged;
- (id)_mangledFilenameForURL:(id)arg1;
- (void)_tryExportingFile:(id)arg1 toLocation:(id)arg2;
- (void)_pickCurrentLocationForUpload:(id)arg1;
@property(retain, nonatomic) _UINavigationControllerPalette *searchPalette; // @synthesize searchPalette=_searchPalette;
- (void)setupPalettes;
- (void)_updateForServiceView;
- (void)ensureChildViewController;
- (void)setChildViewController:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)teardownPalettes;
@property(nonatomic, getter=isRootContainer) BOOL rootContainer; // @synthesize rootContainer=_rootContainer;
- (id)initWithModel:(id)arg1;
@property(retain, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
@property(nonatomic) _UIDocumentPickerViewServiceViewController *serviceViewController; // @synthesize serviceViewController=_serviceViewController;
- (id)initWithURL:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)url;
- (void)invalidate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
