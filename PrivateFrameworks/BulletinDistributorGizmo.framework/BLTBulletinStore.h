//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BLTBulletinStore : NSObject
{
    NSMutableDictionary *_bulletins;
    NSMutableArray *_replyInfos;
    NSObject<OS_dispatch_queue> *_queue;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_fetchBulletin;
    struct sqlite3_stmt *_fetchBulletins;
    struct sqlite3_stmt *_fetchActions;
    struct sqlite3_stmt *_deleteBulletin;
    struct sqlite3_stmt *_deleteActions;
    struct sqlite3_stmt *_upsertBulletin;
    struct sqlite3_stmt *_upsertAction;
    struct sqlite3_stmt *_fetchReplyInfos;
    struct sqlite3_stmt *_deleteReplyInfo;
    struct sqlite3_stmt *_upsertReplyInfo;
    NSDate *_bulletinPurgeTime;
}

- (BOOL)_prepareStatements;
- (id)bulletinBySectionID;
- (id)bulletinsWithSectionID:(id)arg1;
- (void)_upsertAction:(id)arg1 actionType:(unsigned int)arg2 forBulletin:(id)arg3;
- (void)_upsertBulletin:(id)arg1;
- (void)_fetchActionsForBulletin:(id)arg1;
- (id)_fetchBulletinFromStatement:(struct sqlite3_stmt *)arg1;
- (void)_deleteActionsForBulletinWithPublisherBulletinID:(id)arg1 sectionID:(id)arg2;
- (id)_fetchBulletinWithPublisherBulletinID:(id)arg1 sectionID:(id)arg2;
- (BOOL)_createReplyInfoTable;
- (BOOL)_createActionTable;
- (BOOL)_createBulletinTable;
- (BOOL)_table:(const char *)arg1 containsColumn:(const char *)arg2;
- (void)_addColumnWithName:(const char *)arg1 andType:(const char *)arg2 toTableWithName:(const char *)arg3;
- (void)_deleteReplyInfo:(id)arg1;
- (void)_upsertReplyInfo:(id)arg1;
- (void)_deleteBulletinWithPublisherBulletinID:(id)arg1 sectionID:(id)arg2;
- (BOOL)_bulletin:(id)arg1 matchesPublisherBulletinID:(id)arg2 orRecordID:(id)arg3;
- (void)_purgeOldBulletins;
- (BOOL)_containsBulletin:(id)arg1;
- (id)_fetchReplyInfos;
- (id)_fetchBulletins;
- (void)_upgradeDatabase;
- (BOOL)_createDatabaseAtPath:(id)arg1 withFilename:(id)arg2;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)removeReplyInfo:(id)arg1;
- (void)addReplyInfo:(id)arg1;
- (id)replyInfos;
- (void)_addBulletin:(id)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned int)arg2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

