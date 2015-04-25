//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSXPCConnection.h"

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection
{
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (void)invalidateCachedURLProperties;
+ (void)t_setMobileDocumentsURL:(id)arg1;
+ (void)t_setDefaultConnection:(id)arg1;
+ (id)t_connectionForUUID:(id)arg1;
+ (id)cloudDocsCachesURL;
+ (id)cloudDocsAppSupportURL;
+ (id)mobileDocumentsURL;
+ (id)homeDirectoryURL;
+ (id)secondaryConnection;
+ (id)defaultConnection;
+ (void)initialize;
- (id)initUsingUserLocalDaemon;
- (void)_setupAndResume;
- (struct BRXPCSyncProxy *)syncProxy;
- (struct BRXPCSyncProxy *)syncTokenProxy;
- (id)initUsingUserLocalDaemonTokenService;
- (void)dealloc;

@end
