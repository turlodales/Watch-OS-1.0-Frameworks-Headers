//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "QLPreviewControllerDataSource.h"
#import "QLPreviewControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CNContact, NSDictionary, NSString, UIGestureRecognizer, UIImage, UIImageView, UILabel;

@interface ABContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource>
{
    BOOL _editing;
    BOOL _modified;
    BOOL _isAnimatingBounce;
    CNContact *_contact;
    id <ABPresenterDelegate> _delegate;
    id <ABContactPhotoViewDelegate> _photoViewDelegate;
    NSDictionary *_photoPickerInfo;
    UIImage *_currentThumbnailImage;
    UIImage *_currentImage;
    UIImageView *_contactImageView;
    UILabel *_addPhotoLabel;
    UILabel *_editPhotoLabel;
    UIImageView *_attributionImageView;
    UIGestureRecognizer *_tapGesture;
}

+ (id)supportedPasteboardTypes;
- (BOOL)hasPhoto;
@property(retain, nonatomic) UIImageView *contactImageView; // @synthesize contactImageView=_contactImageView;
- (id)previewController:(id)arg1 previewItemAtIndex:(int)arg2;
- (int)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
- (struct CGSize)intrinsicContentSize;
- (void)tintColorDidChange;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(nonatomic) id <ABPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
@property(retain, nonatomic) UIGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILabel *editPhotoLabel; // @synthesize editPhotoLabel=_editPhotoLabel;
@property(retain, nonatomic) UILabel *addPhotoLabel; // @synthesize addPhotoLabel=_addPhotoLabel;
@property(nonatomic) BOOL isAnimatingBounce; // @synthesize isAnimatingBounce=_isAnimatingBounce;
- (id)previewPath;
- (void)_bounceSmallPhoto;
- (void)_presentFullScreenPhoto:(id)arg1;
- (id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect)arg2;
- (id)_createImagePicker;
@property(retain, nonatomic) UIImageView *attributionImageView; // @synthesize attributionImageView=_attributionImageView;
@property(nonatomic) id <ABContactPhotoViewDelegate> photoViewDelegate; // @synthesize photoViewDelegate=_photoViewDelegate;
- (void)updateAttributionBadge;
- (void)updatePhotoWithImage:(id)arg1;
@property(nonatomic) BOOL modified; // @synthesize modified=_modified;
@property(retain, nonatomic) NSDictionary *photoPickerInfo; // @synthesize photoPickerInfo=_photoPickerInfo;
- (void)setHighlightedFrame:(BOOL)arg1;
- (void)_zoomContactPhoto;
- (void)_presentPhotoEditingSheet;
- (id)currentImageData;
@property(retain, nonatomic) UIImage *currentThumbnailImage; // @synthesize currentThumbnailImage=_currentThumbnailImage;
- (id)currentImageDataAndCropRect:(struct CGRect *)arg1;
- (void)longPressGesture:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)disablePhotoTapGesture;
- (void)menuWillHide:(id)arg1;
- (void)updateFontSizes;
- (void)saveEdits;
- (void)updatePhoto;
- (void)resetPhoto;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

