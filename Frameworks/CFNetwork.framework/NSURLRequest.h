//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSInputStream, NSString, NSURL, NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSURLRequestInternal *_internal;
}

+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)requestWithURL:(id)arg1;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (double)defaultTimeoutInterval;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (id)getObjectKeyWithIndex:(long)arg1;
- (id)_initWithCFURLRequest:(struct _CFURLRequest *)arg1;
- (struct _CFURLRequest *)_CFURLRequest;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
@property(readonly) unsigned int cachePolicy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSURL *URL;
- (id)initWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSDictionary *allHTTPHeaderFields;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (unsigned long long)expectedWorkload;
- (id)contentDispositionEncodingFallbackArray;
@property(readonly) BOOL HTTPShouldUsePipelining;
- (id)HTTPUserAgent;
- (id)HTTPReferrer;
- (id)HTTPExtraCookies;
- (id)HTTPContentType;
- (id)boundInterfaceIdentifier;
@property(readonly) BOOL allowsCellularAccess;
@property(readonly) unsigned int networkServiceType;
- (id)_copyReplacingURLWithURL:(id)arg1;
@property(readonly) double timeoutInterval;
- (double)_timeWindowDuration;
- (double)_timeWindowDelay;
@property(readonly) BOOL HTTPShouldHandleCookies;
- (void)_removePropertyForKey:(id)arg1;
- (BOOL)_isSafeRequestForBackgroundDownload;
- (BOOL)_URLHasScheme:(id)arg1;
@property(readonly, copy) NSURL *mainDocumentURL;
@property(readonly, copy) NSString *HTTPMethod;
- (id)valueForHTTPHeaderField:(id)arg1;
@property(readonly, copy) NSData *HTTPBody;
@property(readonly, retain) NSInputStream *HTTPBodyStream;

@end
