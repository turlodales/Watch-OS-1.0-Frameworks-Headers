//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface PLSQLiteConnection : NSObject
{
    NSString *_filePath;
    struct sqlite3 *_dbConnection;
    NSString *_dbLock;
    NSMutableDictionary *_preparedStatements;
    NSMutableDictionary *_preparedUpdateStatements;
    NSMutableDictionary *_preparedDynamicStatements;
    int _transactionInProgress;
    NSString *_transactionLock;
    NSString *_cachedClassName;
    int _cacheSize;
}

+ (id)sharedSQLiteConnection;
+ (id)versionForTable:(id)arg1;
+ (id)masterTableForTable:(id)arg1 andType:(id)arg2;
+ (void)clearTableHasTimestampColumnCache;
+ (void)removeDBAtFilePath:(id)arg1;
- (void)releaseMemory;
- (void)loadLookupTableValuesIntoEntry:(id)arg1;
- (void)loadDynamicValuesIntoEntry:(id)arg1;
- (id)performQuery:(id)arg1;
- (void)setLookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long)arg3 withStringValue:(id)arg4;
- (id)lookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long)arg3;
- (void)updateEntry:(id)arg1;
- (id)entriesForKey:(id)arg1 withProperties:(id)arg2;
@property(retain) NSString *cachedClassName; // @synthesize cachedClassName=_cachedClassName;
@property(retain) NSString *transactionLock; // @synthesize transactionLock=_transactionLock;
@property(retain) NSMutableDictionary *preparedDynamicStatements; // @synthesize preparedDynamicStatements=_preparedDynamicStatements;
@property(retain) NSMutableDictionary *preparedUpdateStatements; // @synthesize preparedUpdateStatements=_preparedUpdateStatements;
@property(retain) NSMutableDictionary *preparedStatements; // @synthesize preparedStatements=_preparedStatements;
@property(retain, nonatomic) NSString *dbLock; // @synthesize dbLock=_dbLock;
- (BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (void)trimAllTablesFromDate:(id)arg1 toDate:(id)arg2;
- (void)lockDatabaseWithBlock:(CDUnknownBlockType)arg1;
- (void)printDBStatusString;
- (BOOL)openCurrentFile;
@property struct sqlite3 *dbConnection; // @synthesize dbConnection=_dbConnection;
- (void)deleteDynamicEntriesForKey:(id)arg1 withRowID:(long long)arg2;
- (void)deleteArrayEntriesForKey:(id)arg1 withRowID:(long long)arg2;
- (void)writeArrayEntries:(id)arg1;
- (void)writeDynamicEntries:(id)arg1;
- (int)bindEntry:(id)arg1 toPreparedStatement:(id)arg2 atBindPosition:(int)arg3;
- (void)displaySchema:(id)arg1;
- (void)buildColumnInsert:(id *)arg1 andValueInsert:(id *)arg2 forEntry:(id)arg3;
@property int transactionInProgress; // @synthesize transactionInProgress=_transactionInProgress;
- (BOOL)isTransactionInProgress;
- (void)dropTable:(id)arg1;
- (id)performStatement:(id)arg1;
- (void)trimTable:(id)arg1 fromDate:(id)arg2 withFilter:(id)arg3 withTrimLimit:(long)arg4;
- (BOOL)tableHasTimestampColumn:(id)arg1;
- (void)runTrimQuery:(id)arg1;
- (void)enumerateAllTablesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeTableNameFromMergeDB:(id)arg1;
- (id)sqlFormatedColumnNamesForTableSelect:(id)arg1;
- (id)sqlFormatedColumnNamesForTableInsert:(id)arg1;
- (int)rowCountForTable:(id)arg1;
- (id)sqlFormatedColumnNamesForTable:(id)arg1 withQuoteChar:(BOOL)arg2;
- (void)setJournalMode:(short)arg1;
- (BOOL)passesIntegrityCheck;
- (BOOL)openCurrentFileWithCacheSize:(int)arg1;
- (id)initWithFilePath:(id)arg1 withCacheSize:(int)arg2;
- (void)hashEntryKeyKeys:(id)arg1;
- (void)dropTables:(id)arg1;
- (BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withTableFilters:(id)arg4 vacuumDB:(BOOL)arg5;
- (BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withTableFilters:(id)arg4 vacuumDB:(BOOL)arg5 withCacheSize:(int)arg6;
- (void)trimAllTablesFromDate:(id)arg1 toDate:(id)arg2 withTableFilters:(id)arg3;
- (BOOL)copyDatabaseToPath:(id)arg1;
- (void)deleteAllEntriesForKey:(id)arg1 withFilters:(id)arg2;
- (void)deleteEntryForKey:(id)arg1 withRowID:(long long)arg2;
- (void)loadArrayValuesIntoEntry:(id)arg1;
- (void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4;
- (void)writeAggregateEntry:(id)arg1;
- (long long)writeEntry:(id)arg1;
- (id)writeEntries:(id)arg1;
- (void)createCoveringIndexOnTable:(id)arg1 forColumns:(id)arg2;
- (void)createIndexOnTable:(id)arg1 forColumn:(id)arg2;
- (id)tableInfo:(id)arg1;
- (double)schemaVersionForTable:(id)arg1;
- (void)removeEmptyOldTables;
- (void)checkPointDB;
- (void)removeIDIndexes;
- (void)setSchemaVersion:(double)arg1 forTableName:(id)arg2;
- (void)createTableName:(id)arg1 withColumns:(id)arg2;
- (BOOL)tableExistsForTableName:(id)arg1;
- (id)mergeDataFromOtherDBFile:(id)arg1;
- (id)initWithFilePath:(id)arg1;
@property int cacheSize; // @synthesize cacheSize=_cacheSize;
- (void)closeConnection;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)endTransaction;
- (void)beginTransaction;
- (void)vacuum;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue;

@end
