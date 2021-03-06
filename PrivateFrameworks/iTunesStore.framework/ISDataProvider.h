//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class ISOperation, NSNumber, NSString, NSURL, SSAuthenticationContext, SSURLBagContext;

@interface ISDataProvider : NSObject <NSCopying>
{
    SSAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedAccountDSID;
    SSURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    ISOperation *_parentOperation;
    NSURL *_redirectURL;
    int _errorHandlerResponseType;
}

+ (id)provider;
@property int errorHandlerResponseType; // @synthesize errorHandlerResponseType=_errorHandlerResponseType;
- (BOOL)runAuthorizationDialog:(id)arg1 error:(id *)arg2;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (void)configureFromProvider:(id)arg1;
- (BOOL)runSubOperation:(id)arg1 error:(id *)arg2;
- (BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id *)arg2;
@property(retain) id output; // @synthesize output=_output;
@property(retain) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
@property(retain) SSURLBagContext *bagContext; // @synthesize bagContext=_bagContext;
- (BOOL)canStreamContentLength:(long long)arg1 error:(id *)arg2;
- (void)streamDidFailWithError:(id)arg1;
- (void)resetStream;
- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;
- (id)closeStream;
- (BOOL)isStreamComplete;
- (long long)streamedBytes;
- (void)setup;
- (void)streamCancelled;
- (BOOL)isStream;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property long long contentLength; // @synthesize contentLength=_contentLength;
@property(retain) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property ISOperation *parentOperation; // @synthesize parentOperation=_parentOperation;

@end

