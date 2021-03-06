//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@interface QLPreviewURLProtocol : NSURLProtocol
{
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (id)mimeTypeForAttachmentURL:(id)arg1;
+ (id)errorForURL:(id)arg1;
+ (void)setError:(id)arg1 forURL:(id)arg2;
+ (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3;
+ (void)unregisterURLs:(id)arg1 andPreview:(id)arg2;
+ (id)_errorForNoPreview;
+ (void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
+ (id)newURLWithContentID:(id)arg1 baseURL:(id)arg2;
+ (id)newUniqueURLWithName:(id)arg1;
+ (void)stopLoadingProtocol:(id)arg1;
+ (void)startLoadingProtocol:(id)arg1;
+ (id)_errorForCancel;
+ (void)_unregisterURL:(id)arg1;
+ (id)_errorForAbort;
+ (void)registerPreview:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
- (void)stopLoading;
- (void)startLoading;

@end

