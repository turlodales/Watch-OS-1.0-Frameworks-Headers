//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACAccount.h"

@class NSArray, NSDictionary, NSString;

@interface ACAccount (AppleAccount)
+ (id)aa_dataclassesBoundToSingleAppleAccount;
+ (id)aa_dataclassesBoundToPrimaryAppleAccount;
@property(copy, nonatomic, setter=aa_setPassword:) NSString *aa_password;
@property(readonly, nonatomic) NSArray *aa_appleIDAliases;
@property(readonly, nonatomic) NSString *aa_primaryEmail;
@property(nonatomic, setter=aa_setNeedsToVerifyTerms:) BOOL aa_needsToVerifyTerms;
@property(readonly, nonatomic) NSString *aa_personID;
@property(copy, nonatomic, setter=aa_setAuthToken:) NSString *aa_authToken;
@property(nonatomic, setter=aa_setPrimaryEmailVerified:) BOOL aa_isPrimaryEmailVerified;
@property(readonly, nonatomic) int aa_repairerPID;
@property(nonatomic, setter=aa_setUndergoingRepair:) BOOL aa_isUndergoingRepair;
@property(nonatomic, setter=aa_setUsesCloudDocs:) BOOL aa_isUsingCloudDocs;
@property(readonly, nonatomic) NSString *aa_syncStoreIdentifier;
@property(readonly, nonatomic) BOOL aa_needsEmailConfiguration;
- (void)aa_setUseCellular:(BOOL)arg1 forDataclass:(id)arg2;
- (BOOL)aa_useCellularForDataclass:(id)arg1;
@property(readonly, nonatomic) BOOL aa_needsRegistration;
@property(nonatomic, setter=aa_setSyncedAccount:) BOOL aa_isSyncedAccount;
@property(readonly, nonatomic) NSDictionary *aa_serviceUnavailableInfo;
@property(readonly, nonatomic) BOOL aa_serviceUnavailable;
@property(readonly, nonatomic) NSDictionary *aa_accountFirstDisplayAlert;
@property(readonly, nonatomic) NSDictionary *aa_accountFooterButton;
@property(readonly, nonatomic) NSString *aa_accountFooterText;
- (id)aa_hsaTokenWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *aa_hsaToken;
@property(readonly, nonatomic) NSString *aa_mapsToken;
@property(readonly, nonatomic) NSString *aa_fmipToken;
- (id)aa_authTokenWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *aa_protocolVersion;
- (void)_aa_setAppleID:(id)arg1;
@property(readonly, nonatomic) NSString *aa_accountTypeString;
@property(copy, nonatomic, setter=aa_setLastName:) NSString *aa_lastName;
@property(copy, nonatomic, setter=aa_setFirstName:) NSString *aa_firstName;
@property(readonly, nonatomic) NSString *aa_displayName;
@property(readonly, nonatomic) ACAccount *aa_childMailAccount;
@property(nonatomic, setter=aa_setCloudDocsMigrationComplete:) BOOL aa_isCloudDocsMigrationComplete;
- (void)aa_setHSAToken:(id)arg1;
- (void)aa_setMapsToken:(id)arg1;
@property(readonly, nonatomic) ACAccount *aa_cloudKitAccount;
@property(readonly, nonatomic) ACAccount *aa_fmfAccount;
- (void)_aa_setAltDSID:(id)arg1;
@property(readonly, nonatomic) ACAccount *aa_fmipAccount;
- (int)mobileMeAccountStatus;
@property(nonatomic, setter=aa_setPrimaryAccount:) BOOL aa_isPrimaryAccount;
- (void)aa_updateWithProvisioningResponse:(id)arg1;
@property(readonly, nonatomic) NSString *aa_altDSID;
@property(readonly, nonatomic) NSString *aa_appleId;
@end

