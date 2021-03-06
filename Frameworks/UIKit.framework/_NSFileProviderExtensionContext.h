//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "_NSFileProviderVendor.h"

@class NSFileProviderExtension;

@interface _NSFileProviderExtensionContext : NSExtensionContext <_NSFileProviderVendor>
{
    NSFileProviderExtension *_principalInstance;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic) NSFileProviderExtension *principalInstance; // @synthesize principalInstance=_principalInstance;
- (void)_URLForItemIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_identifierForItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stopProvidingItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_itemChangedAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startProvidingItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_providePlaceholderAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performInitialSetupWithCompletion:(CDUnknownBlockType)arg1;

@end

