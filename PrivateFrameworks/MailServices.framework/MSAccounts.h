//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MailServices/MSMailDefaultService.h>

@interface MSAccounts : MSMailDefaultService
{
}

+ (BOOL)setPushStateForMailboxWithPath:(id)arg1 account:(id)arg2 pushState:(BOOL)arg3 error:(id *)arg4;
+ (void)mailboxListingForAccountWithUniqueIdentifier:(id)arg1 keys:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (BOOL)deleteAccountsWithUniqueIdentifiers:(id)arg1 error:(id *)arg2;
+ (void)accountValuesForKeys:(id)arg1 launchMobileMail:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)accountValuesForKeys:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (BOOL)hasActiveAccounts;
+ (BOOL)canSendMailSourceAccountManagement:(int)arg1;
+ (BOOL)canSendMail;
+ (id)customSignatureForSendingEmailAddress:(id)arg1;
+ (void)accountValuesForKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 launchMobileMail:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_listAccountKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 handler:(CDUnknownBlockType)arg4;

@end
