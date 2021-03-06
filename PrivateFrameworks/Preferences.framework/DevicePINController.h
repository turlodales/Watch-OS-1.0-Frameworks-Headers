//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSDetailController.h>

@class NSString, UIBarButtonItem;

@interface DevicePINController : PSDetailController
{
    int _mode;
    int _substate;
    NSString *_oldPassword;
    NSString *_lastEntry;
    BOOL _success;
    id _pinDelegate;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    NSString *_error1;
    NSString *_error2;
    BOOL _hasBeenDismissed;
    BOOL _hidesNavigationButtons;
}

+ (BOOL)settingEnabled;
- (void)setSuccess:(BOOL)arg1;
@property(nonatomic) BOOL hidesNavigationButtons; // @synthesize hidesNavigationButtons=_hidesNavigationButtons;
@property(nonatomic) id <DevicePINControllerDelegate> pinDelegate; // @synthesize pinDelegate=_pinDelegate;
- (id)pinInstructionsPromptFont;
- (id)pinInstructionsPrompt;
- (void)pinEntered:(id)arg1;
- (int)pinLength;
- (void)performActionAfterPINEntry;
- (void)performActionAfterPINRemove;
- (void)setOldPassword:(id)arg1;
- (BOOL)attemptValidationWithPIN:(id)arg1;
- (void)_showPINConfirmationError;
- (void)setPIN:(id)arg1;
- (void)setPIN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_asyncSetPinCompatible;
- (void)performActionAfterPINSet;
- (BOOL)completedInputIsValid:(id)arg1;
- (void)_showUnacceptablePINError:(id)arg1 password:(id)arg2;
- (void)_slidePasscodeField;
- (BOOL)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (void)_updatePINButtons;
- (void)adjustButtonsForPasswordLength:(unsigned int)arg1;
- (BOOL)showSimplePINCancelButtonOnLeft;
- (BOOL)simplePIN;
- (void)_updateErrorTextAndFailureCount:(BOOL)arg1;
- (void)_showFailedAttempts;
- (id)stringsTable;
- (id)stringsBundle;
- (void)_setUnblockTime:(double)arg1;
- (void)_setNumberOfFailedAttempts:(long)arg1;
- (long)numberOfFailedAttempts;
- (void)_clearBlockedState;
- (double)unblockTime;
- (struct __CFString *)blockedStateKey;
- (struct __CFString *)blockTimeIntervalKey;
- (struct __CFString *)failedAttemptsKey;
- (int)_getScreenType;
- (BOOL)isNumericPIN;
- (BOOL)validatePIN:(id)arg1;
- (struct CGSize)overallContentSizeForViewInPopover;
- (void)_updateUI;
- (struct __CFString *)defaultsID;
- (BOOL)useProgressiveDelays;
- (void)setPane:(id)arg1;
- (BOOL)requiresKeyboard;
- (void)willUnlock;
- (void)setLastEntry:(id)arg1;
- (void)cancelButtonTapped;
- (void)_dismiss;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)suspend;
- (id)title;
- (id)init;
- (void)dealloc;
- (void)setSpecifier:(id)arg1;
- (BOOL)success;
- (BOOL)isBlocked;

@end

