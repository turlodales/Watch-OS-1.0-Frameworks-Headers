//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSStorageProtocol.h"

@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol>
{
    NSString *_personID;
    NSString *_MMCSDirPath;
    struct __MMCSEngine *_engine;
    NSString *_engineDirPath;
}

+ (id)computeItemIDForAsset:(id)arg1;
- (void)abort;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(readonly, nonatomic) struct __MMCSEngine *engine; // @synthesize engine=_engine;
- (void)_requestCompleted;
- (void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3;
- (void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3;
- (id)_getUTIFromItem:(unsigned long long)arg1;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg1;
- (id)initWithPersonID:(id)arg1 path:(id)arg2;
- (void)didFinishUsingAssets:(id)arg1;
- (void)deactivateRemoveAllFiles:(BOOL)arg1;
- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
