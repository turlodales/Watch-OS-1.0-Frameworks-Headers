//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKFaceLibraryChangeObserver.h"

@class NSMutableDictionary, NSMutableSet, NSString, NTKDelayedBlock, NTKFaceLibrary, NTKTaskScheduler, SBFMappedImageCache, UIWindow;

@interface NTKFaceSnapshotController : NSObject <NTKFaceLibraryChangeObserver>
{
    NTKFaceLibrary *_library;
    NTKTaskScheduler *_taskScheduler;
    SBFMappedImageCache *_snapshotCache;
    NSMutableDictionary *_snapshotContexts;
    BOOL _cacheDirty;
    BOOL _contextsDirty;
    NSMutableSet *_dirtyFaces;
    NTKDelayedBlock *_hideSnapshotWindowBlock;
    UIWindow *_snapshotWindow;
}

- (void)synchronouslyUpdateAllSnapshots;
- (id)snapshotForFace:(id)arg1;
- (void)_hideSnapshotWindow;
- (void)_showSnapshotWindow;
- (void)_dirtyContexts;
- (id)_takeSnapshotOfFace:(id)arg1;
- (BOOL)_snapshotExistsForKey:(id)arg1;
- (id)_currentContext;
- (BOOL)_cleanCache;
- (BOOL)_cleanContexts;
- (BOOL)_cleanFace:(id)arg1;
- (void)_dirtyFace:(id)arg1;
- (void)_dirtyCache;
- (void)_dirtyAllFaces;
- (void)faceLibrary:(id)arg1 didRemoveFace:(id)arg2;
- (void)faceLibrary:(id)arg1 didAddFace:(id)arg2;
- (void)faceLibrary:(id)arg1 didChangeFace:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

