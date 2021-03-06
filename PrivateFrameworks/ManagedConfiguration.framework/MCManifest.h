//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MCManifest : NSObject
{
    NSString *_path;
    NSMutableDictionary *_manifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (void)_setManifestPath:(id)arg1;
+ (id)installedProfileWithIdentifier:(id)arg1;
+ (id)installedProfileDataWithIdentifier:(id)arg1;
+ (id)sharedManifest;
- (id)manifest;
- (void)removeIdentifierFromManifest:(id)arg1;
- (void)addIdentifierToManifest:(id)arg1 flag:(int)arg2;
- (id)allInstalledProfileIdentifiers;
- (void)_setManifest:(id)arg1;
- (id)identifiersOfProfilesWithFilterFlags:(int)arg1;
- (id)_manifest;
- (id)installedProfileWithIdentifier:(id)arg1;
- (id)installedProfileDataWithIdentifier:(id)arg1;
- (void)invalidateCache;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

