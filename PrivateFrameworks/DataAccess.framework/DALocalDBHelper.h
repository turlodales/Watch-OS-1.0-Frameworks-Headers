//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NoteContext;

@interface DALocalDBHelper : NSObject
{
    void *_abDB;
    int _abConnectionCount;
    struct CalDatabase *_calDB;
    int _calConnectionCount;
    NSString *_clientIdentifier;
    void *_bookmarkDB;
    int _bookmarkConnectionCount;
    NoteContext *_noteDB;
    int _noteConnectionCount;
    CDUnknownBlockType _calUnitTestCallbackBlock;
}

+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;
+ (id)calTestCalDBDir;
+ (void)calSetTestCalDBDir:(id)arg1;
+ (id)abTestABDBDir;
+ (void)abSetTestABDBDir:(id)arg1;
@property(retain, nonatomic) NoteContext *noteDB; // @synthesize noteDB=_noteDB;
- (BOOL)calSaveDB;
- (BOOL)abSaveDB;
@property(nonatomic) void *abDB; // @synthesize abDB=_abDB;
- (BOOL)calCloseDBAndSave:(BOOL)arg1;
- (void)calOpenDBWithClientIdentifier:(id)arg1;
- (id)changeTrackingID;
@property(nonatomic) struct CalDatabase *calDB; // @synthesize calDB=_calDB;
@property(nonatomic) int noteConnectionCount; // @synthesize noteConnectionCount=_noteConnectionCount;
@property(nonatomic) int bookmarkConnectionCount; // @synthesize bookmarkConnectionCount=_bookmarkConnectionCount;
@property(nonatomic) void *bookmarkDB; // @synthesize bookmarkDB=_bookmarkDB;
@property(nonatomic) int calConnectionCount; // @synthesize calConnectionCount=_calConnectionCount;
@property(nonatomic) int abConnectionCount; // @synthesize abConnectionCount=_abConnectionCount;
- (void)calUnitTestsSetCallbackBlockForSave:(CDUnknownBlockType)arg1;
- (BOOL)noteCloseDBAndSave:(BOOL)arg1;
- (void)noteOpenDB;
- (void)bookmarkCloseDBAndSave:(BOOL)arg1;
- (void)bookmarkSaveDB;
- (BOOL)bookmarkOpenDB;
- (BOOL)calSaveDBAndFlushCaches;
- (void)calClearSuperfluousChanges;
- (void)calOpenDBAsGenericClient;
- (id)abConstraintPlistPath;
- (void)abProcessAddedImages;
- (void)abProcessAddedRecords;
@property(copy, nonatomic) CDUnknownBlockType calUnitTestCallbackBlock; // @synthesize calUnitTestCallbackBlock=_calUnitTestCallbackBlock;
- (BOOL)noteSaveDB;
- (BOOL)_calOpenDBWithClientIdentifier:(id)arg1;
- (void)_registerForCalendarYieldNotifications;
- (void)_registerForAddressBookYieldNotifications;
- (void *)abDBThrowOnNil:(BOOL)arg1;
- (BOOL)abCloseDBAndSave:(BOOL)arg1;
- (void)abOpenDB;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;

@end
