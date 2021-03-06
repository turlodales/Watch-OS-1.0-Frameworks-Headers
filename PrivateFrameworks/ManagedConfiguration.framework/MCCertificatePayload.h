//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSDate, NSString;

@interface MCCertificatePayload : MCPayload
{
    NSData *_certificatePersistentID;
    NSString *_installedOnDeviceID;
}

@property(readonly, nonatomic) BOOL isSigned;
@property(copy, nonatomic) NSString *installedOnDeviceID; // @synthesize installedOnDeviceID=_installedOnDeviceID;
@property(retain, nonatomic) NSData *certificatePersistentID; // @synthesize certificatePersistentID=_certificatePersistentID;
@property(readonly, nonatomic) BOOL isRoot;
@property(readonly, nonatomic) BOOL isIdentity;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (id)subtitle2Description;
@property(readonly, retain, nonatomic) NSDate *expiry;
- (struct __SecCertificate *)copyCertificate;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (void).cxx_destruct;
- (id)subtitle2Label;
- (id)title;
- (id)description;

@end

