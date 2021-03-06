//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface MFMailComposeViewController : UINavigationController
{
    id _internal;
    CDUnknownBlockType _setupAnimationBlock;
    BOOL _didChangeStatusBarStyle;
    int _savedStatusBarStyle;
}

+ (BOOL)canSendMailSourceAccountManagement:(int)arg1;
+ (BOOL)canSendMail;
+ (BOOL)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (unsigned int)maximumAttachmentSize;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setSourceAccountManagement:(int)arg1;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
@property(nonatomic) id <MFMailComposeViewControllerDelegate> mailComposeDelegate;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
- (void)setSubject:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (id)initWithURL:(id)arg1;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)setAutorotationDelegate:(id)arg1;
- (void)addSetupAnimationBlock:(CDUnknownBlockType)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)_validEmailAddressesFromArray:(id)arg1;
- (id)_internalViewController;
- (void)finalizeCompositionValues;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned int)arg1;
- (void)setToRecipients:(id)arg1;

@end

