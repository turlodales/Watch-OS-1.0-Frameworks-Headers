//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class NSArray, NSMutableArray, NSString;

@interface MFMessageComposeViewController : UINavigationController
{
    id <MFMessageComposeViewControllerDelegate> _messageComposeDelegate;
    NSArray *_recipients;
    NSString *_body;
    NSString *_subject;
    NSMutableArray *_mutableAttachmentURLs;
    unsigned int _currentAttachedVideoCount;
    unsigned int _currentAttachedAudioCount;
    unsigned int _currentAttachedImageCount;
    NSArray *_attachments;
}

+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (BOOL)isSupportedAttachmentUTI:(id)arg1;
+ (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (BOOL)isiMessageEnabled;
+ (BOOL)isMMSEnabled;
+ (BOOL)canSendText;
+ (void)initialize;
+ (void)_startListeningForAvailabilityNotifications;
+ (BOOL)canSendAttachments;
+ (BOOL)canSendSubject;
+ (void)_setupAccountMonitor;
+ (void)_serviceAvailabilityChanged:(id)arg1;
+ (void)_updateServiceAvailability;
+ (BOOL)_canSendText;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
- (id)attachmentURLs;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (BOOL)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3;
- (BOOL)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(nonatomic) id <MFMessageComposeViewControllerDelegate> messageComposeDelegate; // @synthesize messageComposeDelegate=_messageComposeDelegate;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setModalPresentationStyle:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
@property(nonatomic) unsigned int currentAttachedImageCount; // @synthesize currentAttachedImageCount=_currentAttachedImageCount;
@property(nonatomic) unsigned int currentAttachedAudioCount; // @synthesize currentAttachedAudioCount=_currentAttachedAudioCount;
@property(nonatomic) unsigned int currentAttachedVideoCount; // @synthesize currentAttachedVideoCount=_currentAttachedVideoCount;
@property(copy, nonatomic) NSMutableArray *mutableAttachmentURLs; // @synthesize mutableAttachmentURLs=_mutableAttachmentURLs;
- (void)_setCanEditRecipients:(BOOL)arg1;
- (BOOL)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2;
- (BOOL)canAddAttachmentURL:(id)arg1;
- (id)_buildAttachmentInfoForAttachmentURL:(id)arg1 andAlternameFilename:(id)arg2;
- (void)_updateAttachmentCountForAttachmentURL:(id)arg1;
- (id)_contentTypeForMIMEType:(id)arg1;
- (BOOL)_isImageMIMEType:(id)arg1;
- (BOOL)_isAudioMIMEType:(id)arg1;
- (BOOL)_isVideoMIMEType:(id)arg1;
- (id)_MIMETypeForURL:(id)arg1;
- (void)disableUserAttachments;

@end
