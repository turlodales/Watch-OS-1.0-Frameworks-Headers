//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying>
{
    NSURLCredentialInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
+ (id)credentialForTrust:(struct __SecTrust *)arg1;
+ (id)credentialWithIdentity:(struct __SecIdentity *)arg1 certificates:(id)arg2 persistence:(unsigned int)arg3;
+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned int)arg3;
- (id)_initWithCFURLCredential:(struct _CFURLCredential *)arg1;
- (struct _CFURLCredential *)_cfurlcredential;
- (struct __SecIdentity *)identity;
- (id)certificates;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)password;
- (id)user;
- (void)_removeSWCACreatorAttribute;
- (BOOL)_hasSWCACreatorAttribute;
@property(readonly) unsigned int persistence;
- (BOOL)hasPassword;
- (struct _CFURLCredential *)_CFURLCredential;
- (id)initWithTrust:(struct __SecTrust *)arg1;
- (id)initWithIdentity:(struct __SecIdentity *)arg1 certificates:(id)arg2 persistence:(unsigned int)arg3;
- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned int)arg3;

@end

