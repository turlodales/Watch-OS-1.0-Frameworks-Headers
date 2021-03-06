//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCProfileConnectionXPCProtocol.h"

@class NSData, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface MCProfileConnection : NSObject <MCProfileConnectionXPCProtocol>
{
    struct __CFBag *_observers;
    id <MCInteractionDelegate> _interactionDelegate;
    NSDictionary *_preflightResponse;
    NSData *_originalProfileData;
    NSObject<OS_dispatch_queue> *_notificationSyncQueue;
    NSObject<OS_dispatch_queue> *_xpcConnectionSyncQueue;
    NSObject<OS_dispatch_queue> *_publicXPCConnectionSyncQueue;
    NSMutableArray *_notificationTokens;
    CDUnknownBlockType userInputReplyBlock;
    CDUnknownBlockType passcodeReplyBlock;
    CDUnknownBlockType showWarningsReplyBlock;
    NSXPCConnection *_publicXPCConnection;
    NSXPCConnection *_xpcConnection;
}

+ (id)profileInstallationErrorWithUnderlyingError:(id)arg1;
+ (id)sharedConnection;
- (int)effectiveRestrictedBoolValueForSetting:(id)arg1;
- (id)effectiveValueForSetting:(id)arg1;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
- (id)filteredMailSheetAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (BOOL)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (BOOL)isAppManaged:(id)arg1;
- (BOOL)shouldApplyFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(char *)arg3 outAllowUnmanagedAccounts:(char *)arg4;
- (id)allowedImportFromAppBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingAccountIsManaged:(BOOL)arg3;
- (BOOL)isOpenInRestrictionInEffect;
- (BOOL)mayOpenFromUnmanagedToManaged;
- (BOOL)mayOpenFromManagedToUnmanaged;
- (BOOL)isTeslaCloudConfigurationAvailable;
- (void)setupAssistantDidFinish;
- (BOOL)shouldInstallStoredProfileForPurpose:(int)arg1;
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3;
- (void)installProfileDataStoredForPurpose:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)shouldShowCloudConfigurationUI;
- (BOOL)shouldSkipSetupPanes;
- (void)storeCloudConfigurationDetails:(id)arg1;
- (void)cloudConfigurationUIDidCompleteWasApplied:(BOOL)arg1;
- (BOOL)wasTeslaCloudConfigurationApplied;
- (BOOL)wasCloudConfigurationApplied;
- (void)retrieveCloudConfigurationFromURL:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)retrieveAndStoreCloudConfigurationDetailsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)profileDataStoredForPurpose:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1;
- (BOOL)activationRecordIndicatesCloudConfigurationIsAvailable;
- (void)retrieveCloudConfigurationDetailsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)storeCloudConfigurationDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)knownAirPrintIPPURLStrings;
- (id)autonomousSingleAppModePermittedBundleIDs;
- (void)parentalControlsSetAllowPasscodeAccessToNonWhitelistedApps:(BOOL)arg1;
- (BOOL)parentalControlsAllowPasscodeAccessToNonWhitelistedApps;
- (BOOL)isParentalControlsAllowPasscodeAccessToNonWhitelistedAppsUIForcedByRestrictions;
- (void)setParentalControlsWhitelistedAppBundleIDs:(id)arg1;
- (id)parentalControlsWhitelistedAppBundleIDs;
- (id)parentalControlsAvailableAppBundleIDsForWhitelisting;
- (BOOL)mayEnterPasscodeToAccessNonWhitelistedApps;
- (BOOL)isPasscodeRequiredToAccessWhitelistedApps;
- (BOOL)isInSingleAppMode;
- (void)lockdownDidReceiveActivationRecord:(id)arg1;
- (int)hostMayPairWithOptions:(id)arg1 challenge:(id)arg2;
- (void)unstashWebContentFilterAutoPermittedURLStrings;
- (void)stashWebContentFilterAutoPermittedURLStrings;
- (void)unstashWebContentFilterUserBlacklistedURLStrings;
- (void)stashWebContentFilterUserBlacklistedURLStrings;
- (void)removeWebContentFilterUserBlacklistedURLString:(id)arg1;
- (void)setWebContentFilterUserBlacklistedURLStrings:(id)arg1;
- (id)webContentFilterEffectiveBlacklistedURLStrings;
- (id)webContentFilterUserBlacklistedURLStrings;
- (void)addUserBookmark:(id)arg1;
- (void)addWebContentFilterAutoPermittedURLString:(id)arg1;
- (void)setWebContentFilterAutoPermittedURLStrings:(id)arg1;
- (BOOL)isWebFilterUIActive;
- (id)defaultUserBookmarks;
- (void)rereadManagedAppAttributes;
- (void)storeCertificateData:(id)arg1 forHostIdentifier:(id)arg2;
- (void)removeExpiredProfiles;
- (void)performBootTimeChecks;
- (void)notifyKeybagUpdated;
- (void)notifyDeviceUnlocked;
- (void)checkCarrierProfile;
- (void)checkCarrierProfileForceInstallation:(BOOL)arg1;
- (BOOL)shouldDestroyOldKeybag;
- (void)setFingerprintUnlockAllowed:(BOOL)arg1 passcode:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (unsigned int)gracePeriod;
- (void)setGracePeriod:(unsigned int)arg1 passcode:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)isMUAllowed;
- (id)activationLockBypassHash;
- (void)deleteActivationLockBypassKey;
- (id)activationLockBypassKey;
- (BOOL)isSpotlightInternetResultsAllowed;
- (id)appsRestrictedFromCloudSync;
- (BOOL)isCloudSyncAllowed:(id)arg1;
- (void)setSpellCheckAllowed:(BOOL)arg1;
- (void)setPredictiveKeyboardAllowed:(BOOL)arg1;
- (void)setAutoCorrectionAllowed:(BOOL)arg1;
- (BOOL)isSpellCheckAllowed;
- (BOOL)isPredictiveKeyboardAllowed;
- (BOOL)isAutoCorrectionAllowed;
- (BOOL)isInAppPaymentAllowed;
- (BOOL)isFingerprintForContactlessPaymentAllowed;
- (BOOL)isContactlessPaymentAllowed;
- (BOOL)isUninstalledAppNearMeSuggestionsAllowed;
- (BOOL)isInstalledAppNearMeSuggestionsAllowed;
- (BOOL)isPodcastsAllowed;
- (BOOL)hasAppAnalyticsAllowedBeenSet;
- (BOOL)isAppAnalyticsAllowed;
- (BOOL)hasDiagnosticSubmissionAllowedBeenSet;
- (BOOL)isDiagnosticSubmissionAllowed;
- (BOOL)isEnterpriseBookMetadataSyncAllowed;
- (BOOL)isEnterpriseBookBackupAllowed;
- (BOOL)isActivityContinuationAllowed;
- (BOOL)isGeotagSharingAllowed;
- (BOOL)isAirPlayIncomingRequestsPairingPasswordRequired;
- (BOOL)isAirPlayOutgoingRequestsPairingPasswordRequired;
- (BOOL)isFingerprintModificationAllowed;
- (BOOL)isAssistantUserGeneratedContentAllowed;
- (BOOL)isActivationLockAllowed;
- (BOOL)isControlCenterAllowedInApps;
- (BOOL)isLockScreenControlCenterAllowed;
- (BOOL)isLockScreenTodayViewAllowed;
- (BOOL)isLockScreenNotificationsViewAllowed;
- (BOOL)isAirDropAllowed;
- (BOOL)isAppRatingLimitInEffect;
- (BOOL)isAppRemovalAllowed;
- (BOOL)isAppInstallationAllowed;
- (BOOL)isLockScreenWiFiModificationAllowed;
- (BOOL)isAdTrackingLimited;
- (BOOL)isWebContentFilteringInEffect;
- (BOOL)isWebTextDefineAllowed;
- (BOOL)isAutomaticAppUpdatesModificationAllowed;
- (void)setAutomaticAppUpdatesAllowed:(BOOL)arg1;
- (BOOL)isOTAPKIUpdatesAllowed;
- (BOOL)isVehicleUIAllowed;
- (BOOL)isCloudKeychainSyncAllowed;
- (void)migratePostDataMigrator;
- (void)processProfilesPostMigrate;
- (void)processProfilesPostRestore;
- (id)managedMedia;
- (id)managedAppIDs;
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(BOOL)arg2;
- (void)setManagedEmailDomains:(id)arg1;
- (id)managedEmailDomains;
- (id)doNotDocumentSyncAppIDs;
- (id)doNotBackupAppIDs;
- (id)managedSystemConfigurationServiceIDs;
- (id)managedWiFiNetworkNames;
- (BOOL)isFingerprintUnlockAllowed;
- (id)activationLockBypassKeyCreateNewIfNeeded:(BOOL)arg1;
- (id)managedAppIDsWithFlags:(int)arg1;
- (id)localizedDescriptionOfCurrentPasscodeConstraints;
- (int)unlockScreenType;
- (void)notifyClientsToRecomputeCompliance;
- (void)recomputeUserComplianceWarning;
- (void)getPasscodeComplianceWarningLastLockDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (int)getPasscodeComplianceWarningLastLockDate:(id)arg1 outLocalizedTitle:(id *)arg2 outLocalizedMessage:(id *)arg3;
- (BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id *)arg1;
- (BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id *)arg1;
- (BOOL)passcode:(id)arg1 meetsCurrentConstraintsOutError:(id *)arg2;
- (BOOL)isContentProtectionInEffect;
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id *)arg3;
- (BOOL)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id *)arg3;
- (void)lockDevice;
- (int)newPasscodeEntryScreenType;
- (int)_getPasscodeComplianceWarningExpiryDate:(id)arg1 lastLockDate:(id)arg2 outLocalizedTitle:(id *)arg3 outLocalizedMessage:(id *)arg4;
- (void)recomputeUserComplianceWarningSynchronously;
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)arg1;
- (BOOL)isPasscodeSet;
- (void)lockDeviceImmediately:(BOOL)arg1;
- (void)resetAllSettingsToDefaults;
- (void)removeValueSetting:(id)arg1;
- (void)removeBoolSetting:(id)arg1;
- (BOOL)isUnionSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)areSettingsLockedDownByRestrictions:(id)arg1;
- (id)localizedRestrictionSourceDescriptionForFeatures:(id)arg1;
- (id)effectiveValuesForUnionSetting:(id)arg1;
- (id)effectiveValuesForIntersectionSetting:(id)arg1;
- (id)defaultParametersForUnionSetting:(id)arg1;
- (id)defaultParametersForIntersectionSetting:(id)arg1;
- (id)defaultValuesForUnionSetting:(id)arg1;
- (id)defaultValuesForIntersectionSetting:(id)arg1;
- (id)parametersForUnionSetting:(id)arg1;
- (id)parametersForIntersectionSetting:(id)arg1;
- (id)parametersForValueSetting:(id)arg1;
- (id)parametersForBoolSetting:(id)arg1;
- (void)setValues:(id)arg1 forUnionSetting:(id)arg2;
- (void)setValues:(id)arg1 forIntersectionSetting:(id)arg2;
- (void)setValue:(id)arg1 forSetting:(id)arg2;
- (void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2;
- (void)setParameters:(id)arg1 forValueSetting:(id)arg2;
- (void)setParameters:(id)arg1 forBoolSetting:(id)arg2;
- (id)effectiveUserSettings;
- (BOOL)isValueSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (id)_localizedRestricitionSourceDescriptionFromMDMName:(id)arg1 exchangeName:(id)arg2 exchangeCount:(int)arg3 profileName:(id)arg4 profileCount:(int)arg5;
- (BOOL)_areProfilesRestrictingSettings:(id)arg1 outMDMName:(id *)arg2 outExchangeName:(id *)arg3 outExchangeCount:(int *)arg4 outProfileName:(id *)arg5 outProfileCount:(int *)arg6;
- (id)_settingsLockedDownByRestrictions:(id)arg1;
- (id)effectiveParametersForIntersectionSetting:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (id)effectiveParametersForUnionSetting:(id)arg1;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (id)defaultParametersForValueSetting:(id)arg1;
- (id)defaultParametersForBoolSetting:(id)arg1;
- (int)defaultBoolValueForSetting:(id)arg1;
- (id)userSettings;
- (void)setValue:(id)arg1 forSetting:(id)arg2 passcode:(id)arg3;
- (void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 passcode:(id)arg3;
- (void)setParametersForSettingsByType:(id)arg1;
- (void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2;
- (id)effectiveWhitelistedAppsAndOptions;
- (void)removeOrphanedClientRestrictions;
- (int)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 complianceBlocking:(int)arg6 displayImmediateAlert:(BOOL)arg7 outRestrictionChanged:(char *)arg8 outEffectiveSettingsChanged:(char *)arg9 outError:(id *)arg10;
- (id)effectiveRestrictions;
- (id)allClientUUIDsForClientType:(id)arg1;
- (id)chaperoneOrganization;
- (BOOL)isChaperoned;
- (void)respondToCurrentPasscodeRequestContinue:(BOOL)arg1 passcode:(id)arg2;
- (void)respondToWarningsContinueInstallation:(BOOL)arg1;
- (void)__checkForProfiledCrash;
- (void)submitUserInputResponses:(id)arg1;
- (void)cancelUserInputResponses;
- (void)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned int)arg2;
- (void)updateProfileWithIdentifier:(id)arg1 interactionDelegate:(id)arg2;
- (void)installProfileData:(id)arg1 interactionDelegate:(id)arg2;
- (void)_detectProfiledCrashes;
- (BOOL)removeProvisioningProfileWithUUID:(id)arg1 outError:(id *)arg2;
- (BOOL)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id *)arg3;
- (BOOL)showProfileErrorUIWithProfileIdentifier:(id)arg1 outError:(id *)arg2;
- (BOOL)transitionToProfileAcceptanceUI;
- (BOOL)transitionToProfileOverviewUI;
- (id)acceptedFileExtensions;
- (id)acceptedMIMETypes;
- (id)updateProfileWithIdentifier:(id)arg1 outError:(id *)arg2;
- (void)removeProfileAsyncWithIdentifier:(id)arg1;
- (void)removeProfileWithIdentifier:(id)arg1;
- (id)installProfileData:(id)arg1 outError:(id *)arg2;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id *)arg4;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 outError:(id *)arg3;
- (id)popProvisioningProfileDataFromHeadOfInstallationQueue;
- (id)popProfileDataFromHeadOfInstallationQueue;
- (id)installedConfigurationProfileInfoWithOutMDMProfileInfo:(id *)arg1;
- (id)installedProfileIdentifiers;
- (id)cloudConfigurationDetails;
- (void)installProfileData:(id)arg1 options:(id)arg2 interactionDelegate:(id)arg3;
- (id)installedProfilesWithFilterFlags:(int)arg1;
- (BOOL)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)arg1;
- (BOOL)_openSensitiveURLString:(id)arg1 unlock:(BOOL)arg2;
- (id)installProfileData:(id)arg1 options:(id)arg2 outError:(id *)arg3;
- (id)installedMDMProfileIdentifier;
- (id)installedProfileIdentifiersWithFilterFlags:(int)arg1;
- (id)objectForFeature:(id)arg1;
- (id)valueForFeature:(id)arg1;
- (int)restrictedBoolValueForFeature:(id)arg1;
- (void)setPasscodeWasSetInBackup:(BOOL)arg1;
- (BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 outRestrictionChanged:(char *)arg4 outEffectiveSettingsChanged:(char *)arg5 outError:(id *)arg6;
- (BOOL)validatePasscode:(id)arg1 andUnlockContentProtectedDevice:(BOOL)arg2;
- (BOOL)validatePasscode:(id)arg1;
- (id)passcodeExpiryDate;
- (BOOL)isPasscodeRequiredByPolicy;
- (id)queueFileDataForProfileInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id *)arg3;
- (id)queueProfileDataForInstallation:(id)arg1 outError:(id *)arg2;
- (id)queueProfileDataForAcceptance:(id)arg1 outError:(id *)arg2;
- (id)profileFromProfileData:(id)arg1 outError:(id *)arg2;
- (id)objectRestrictionForFeature:(id)arg1;
- (id)valueRestrictionForFeature:(id)arg1;
- (int)boolRestrictionForFeature:(id)arg1;
- (BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 outRestrictionChanged:(char *)arg6 outEffectiveSettingsChanged:(char *)arg7 outError:(id *)arg8;
- (BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id *)arg2;
- (id)passcodeExpiryDateOutError:(id *)arg1;
- (BOOL)isPasscodeRequiredByProfiles;
- (id)_queueDataForAcceptance:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(BOOL)arg4 outError:(id *)arg5;
- (void)checkInIfNeeded;
- (id)defaultValueForSetting:(id)arg1;
- (BOOL)isSupervised;
- (void)unstashUserBookmarksFromLabel:(id)arg1;
- (void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (id)userBookmarks;
- (void)setUserBookmarks:(id)arg1;
- (BOOL)isPasscodeRequired;
- (BOOL)isURLManaged:(id)arg1;
- (id)installedProfileWithIdentifier:(id)arg1;
- (id)installedProfileDataWithIdentifier:(id)arg1;
- (void)checkInAsynchronously;
- (void)checkIn;
- (void)_internalDefaultsDidChange;
- (void)_applyToObservers:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSXPCConnection *publicXPCConnection; // @synthesize publicXPCConnection=_publicXPCConnection;
- (void)_appWhitelistDidChange:(id)arg1;
- (void)_defaultsDidChange;
- (void)_effectiveSettingsDidChange:(id)arg1;
- (void)_profileListDidChange;
- (void)_passcodeDidChange;
- (void)_passcodePolicyDidChange;
- (void)_restrictionDidChange;
- (void)_createAndResumePublicXPCConnection;
- (void)_createAndResumeXPCConnection;
- (void)doMCICDidRequestCurrentPasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doMCICDidRequestUserInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doMCICDidUpdateStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeProfileWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isProfileInstalledWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queueCreateAndResumePublicXPCConnection;
- (void)_queueCreateAndResumeXPCConnection;
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2;
- (id)userInfoForClientUUID:(id)arg1;
- (void)shutDown;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3;
- (void)addObserver:(id)arg1;
- (BOOL)mayShareToMessagesOriginatingAccountIsManaged:(BOOL)arg1;
- (BOOL)isSettingLockedDownByRestrictions:(id)arg1;
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (id)allowedAppBundleIDsForBidirectionalDataMovementAfterApplyingFilterToBundleIDs:(id)arg1 localAppBundleID:(id)arg2 localAccountIsManaged:(BOOL)arg3;
- (void)setInteractionDelegate:(id)arg1;
- (int)effectiveBoolValueForSetting:(id)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)isAutomaticAppUpdatesAllowed;
- (void)flush;
- (id)_init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)effectiveWhitelistedAppBundleIDs;
- (int)appWhitelistState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

