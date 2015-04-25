//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface GEODBWriter : NSObject
{
    NSString *_path;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_versionQuery;
    struct sqlite3_stmt *_versionInsert;
    struct sqlite3_stmt *_editionQuery;
    struct sqlite3_stmt *_editionDelete;
    struct sqlite3_stmt *_editionInvalidate;
    struct sqlite3_stmt *_editionUpdate;
    struct sqlite3_stmt *_tileInsert;
    struct sqlite3_stmt *_tileDelete;
    struct sqlite3_stmt *_tileSize;
    struct sqlite3_stmt *_sizeQuery;
    long long _lastRowID;
    unsigned long long _databaseSize;
    unsigned long long _maxDatabaseSize;
    BOOL _closed;
    BOOL _defunct;
    NSMutableArray *_writeList;
    NSMutableSet *_uncommitedWriteSet;
    unsigned int _pendingWriteBytes;
    NSLock *_writeListLock;
    NSObject<OS_dispatch_queue> *_writeQueue;
    void *_editionMap;
    long long _evictionRowsThreshold;
    CDStruct_e4886f83 *_expirationRecords;
    unsigned int _expirationRecordCount;
    BOOL _preloading;
    double _lastCheckedGeneralExpiration;
    unsigned int _tileCacheMinimumWriteCount;
    unsigned int _tileCacheMinimumWriteBytes;
    unsigned int _tileCacheMaximumWriteCount;
    unsigned int _tileCacheMaximumWriteBytes;
}

- (void)_localeChanged:(id)arg1;
@property(nonatomic) unsigned long long maxDatabaseSize; // @synthesize maxDatabaseSize=_maxDatabaseSize;
@property(readonly, nonatomic) unsigned long long databaseSize; // @synthesize databaseSize=_databaseSize;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)pendingWritesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)pendingWriteForKey:(struct _GEOTileKey *)arg1;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)calculateFreeableSizeWithHandler:(CDUnknownBlockType)arg1;
- (void)_printDBStatus:(const char *)arg1;
- (void)flushPendingWrites;
- (void)_writeEntry:(id)arg1;
- (void)_dropWritesOnFloor:(id)arg1;
- (void)_deleteKey:(struct _GEOTileKey)arg1;
- (BOOL)_tileSetExpires:(unsigned int)arg1;
- (void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(BOOL)arg2;
- (unsigned long long)_freeableDiskSpace;
- (void)_assertDatabaseSize;
- (unsigned long long)_dbFileSize;
- (void)_evict;
- (BOOL)_readEditions;
- (void)_writeVersion;
- (void)_prepareStatements;
- (void)_createTables;
- (void)_updateEdition:(unsigned int)arg1 forTileset:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(BOOL)arg4;
- (void)_performWrites:(BOOL)arg1;
- (void)_openDBForceRecreate:(BOOL)arg1;
- (void)_editionUpdate:(id)arg1;
- (void)_deviceLocked;
- (BOOL)prepareSingleStatement:(struct sqlite3_stmt **)arg1 forSql:(id)arg2;
- (void)deleteData:(const struct _GEOTileKey *)arg1;
- (void)addData:(id)arg1 forKey:(struct _GEOTileKey *)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6;
- (void)_openIfNecessary;
- (void)setExpirationRecords:(CDStruct_e4886f83 *)arg1 count:(unsigned int)arg2;
@property BOOL closed;
- (void)_closeDB;
- (void)endPreloadSession;
- (id)initWithPath:(id)arg1;
- (void)_updateSize;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;

@end
