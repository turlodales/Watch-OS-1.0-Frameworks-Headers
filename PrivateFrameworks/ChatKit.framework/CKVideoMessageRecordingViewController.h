//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKJoystickControllerDelegate.h"
#import "CKVideoPreviewViewControllerDelegate.h"
#import "CKVideoRecorderDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CKJoystickButtonItem, CKJoystickController, CKJoystickShutterButtonItem, CKMediaObject, CKRecordingElapsedTimeView, CKVideoPreviewViewController, NSError, NSString, UIButton, UIImagePickerController, UIView, UIWindow;

@interface CKVideoMessageRecordingViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, CKJoystickControllerDelegate, CKVideoRecorderDelegate, CKVideoPreviewViewControllerDelegate>
{
    UIView *_presentationView;
    UIWindow *_overlayWindow;
    BOOL _presented;
    BOOL _previewWarmedUp;
    BOOL _showingVideo;
    BOOL _previewing;
    BOOL _recording;
    BOOL _sending;
    BOOL _canceled;
    BOOL _triedToRecord;
    id <CKVideoMessageRecordingViewControllerDelegate> _videoMessageDelegate;
    UIView *_topBackgroundView;
    CKRecordingElapsedTimeView *_timerView;
    CKJoystickController *_videoJoystickController;
    CKJoystickShutterButtonItem *_recordVideoButtonItem;
    CKJoystickButtonItem *_sendButtonItem;
    UIButton *_swapCameraButton;
    unsigned int _enableCancel;
    CKMediaObject *_mediaObjectForSending;
    NSError *_captureError;
    CDUnknownBlockType _mediaExportCompletionBlock;
    UIImagePickerController *_cameraViewController;
    CKVideoPreviewViewController *_previewViewController;
}

@property(nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
@property(copy, nonatomic) CDUnknownBlockType mediaExportCompletionBlock; // @synthesize mediaExportCompletionBlock=_mediaExportCompletionBlock;
@property(nonatomic) unsigned int enableCancel; // @synthesize enableCancel=_enableCancel;
@property(retain, nonatomic) NSError *captureError; // @synthesize captureError=_captureError;
@property(retain, nonatomic) CKMediaObject *mediaObjectForSending; // @synthesize mediaObjectForSending=_mediaObjectForSending;
@property(nonatomic) id <CKVideoMessageRecordingViewControllerDelegate> videoMessageDelegate; // @synthesize videoMessageDelegate=_videoMessageDelegate;
@property(nonatomic) BOOL sending; // @synthesize sending=_sending;
- (void)takePictureWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setupPreviewView;
- (void)delayedRecord;
@property(nonatomic) BOOL triedToRecord; // @synthesize triedToRecord=_triedToRecord;
- (void)presentRecordingJoystick;
- (void)_cleanupCamera;
@property(nonatomic) BOOL previewing; // @synthesize previewing=_previewing;
@property(retain, nonatomic) CKVideoPreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (void)_animatePreviewIn;
- (void)presentInitialPlaybackJoystick;
- (void)stopRecordingWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL recording; // @synthesize recording=_recording;
- (void)_animateVideoIn;
- (void)presentVideoJoystick;
- (void)presentPlaybackJoystick:(BOOL)arg1;
@property(retain, nonatomic) CKJoystickButtonItem *sendButtonItem; // @synthesize sendButtonItem=_sendButtonItem;
- (void)joystickSendButtonUpAction:(id)arg1;
@property(retain, nonatomic) UIButton *swapCameraButton; // @synthesize swapCameraButton=_swapCameraButton;
@property(retain, nonatomic) CKJoystickController *videoJoystickController; // @synthesize videoJoystickController=_videoJoystickController;
@property(retain, nonatomic) CKJoystickShutterButtonItem *recordVideoButtonItem; // @synthesize recordVideoButtonItem=_recordVideoButtonItem;
- (void)joystickShutterButtonTapAction:(id)arg1;
- (void)joystickTakePhoto:(id)arg1;
- (void)joystickCancelActionButtonDown:(id)arg1;
- (void)swapCamera:(id)arg1;
@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(retain, nonatomic) CKRecordingElapsedTimeView *timerView; // @synthesize timerView=_timerView;
@property(retain, nonatomic) UIImagePickerController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
- (void)_previewWarmedUp:(id)arg1;
- (void)ckVideoRecorder:(id)arg1 videoCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorder:(id)arg1 imageDataCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorderRecordingCanceled:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPresentationView:(id)arg1;
- (void)joystickCancelAction:(id)arg1;
- (void)joystickShutterButtonDownAction:(id)arg1;
- (void)joystickShutterButtonUpAction:(id)arg1;
- (void)joystickPlaybackButtonUpAction:(id)arg1;
- (void)record;
- (void)joystickControllerWillDismissJoystick:(id)arg1 animated:(BOOL)arg2;
- (void)ckVideoPreviewViewControllerFinishedPlaying:(id)arg1;
- (void)ckVideoPreviewViewControllerReady:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)send;
- (id)childViewControllerForStatusBarHidden;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

