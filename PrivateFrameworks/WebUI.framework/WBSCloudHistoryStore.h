//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDatabase, CKRecordZone, NSObject<OS_dispatch_queue>;

@interface WBSCloudHistoryStore : NSObject
{
    NSObject<OS_dispatch_queue> *_databaseQueue;
    CKDatabase *_database;
    CKRecordZone *_recordZone;
}

+ (id)sharedCloudHistoryStore;
- (id)_debugAllRecordsDescription;
- (void)_deleteAllRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_debugDescriptionForRecord:(id)arg1;
- (id)_recordDataForDictionary:(id)arg1;
- (id)_dictionaryForRecordData:(id)arg1;
- (void)_appendRecord:(id)arg1 toResult:(id)arg2;
- (void)_fetchRecordsWithServerChangeToken:(id)arg1 numberOfFetchRecordsOperationsPerformedSoFar:(unsigned int)arg2 result:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_recordWithType:(id)arg1 zoneID:(id)arg2 version:(unsigned int)arg3 dataDictionary:(id)arg4;
- (id)_recordWithCloudHistoryVisits:(id)arg1 zoneID:(id)arg2;
- (void)_prepareRecordZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)_saveRecords:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_recordWithHistoryTombstones:(id)arg1 zoneID:(id)arg2;
- (id)_recordsWithCloudHistoryVisits:(id)arg1 zoneID:(id)arg2;
- (void)_saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resetRecordZone;
- (void)fetchNumberOfDevicesInSyncCircleWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRecordsWithServerChangeTokenData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)init;

@end

