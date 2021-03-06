//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HDSQLiteEntity.h"

@class HDCodableObjectCollection, HDDataPropertyApplier, HDSQLiteDatabase, HDSQLitePredicate, HDSourceEntity, HKObject, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSUUID;

@protocol HDDataEntity <HDSQLiteEntity>
+ (NSArray *)codableObjectsFromObjectCollection:(HDCodableObjectCollection *)arg1;
+ (NSArray *)deleteStatementsForRelatedEntitiesInDatabase:(HDSQLiteDatabase *)arg1;
+ (NSArray *)entitiesToDeleteBeforeInsertingObject:(HKObject *)arg1 sourceEntity:(HDSourceEntity *)arg2 database:(HDSQLiteDatabase *)arg3;
+ (BOOL)acceptsObject:(HKObject *)arg1;
+ (Class)propertyApplierClass;
+ (HDDataPropertyApplier *)propertyApplierWithProperties:(NSArray *)arg1 propertySetters:(NSDictionary *)arg2 authorizationFilter:(NSArray * (^)(NSArray *))arg3 database:(HDSQLiteDatabase *)arg4;
+ (BOOL)isBackedByTable;
+ (int)preferredEntityType;
+ (NSString *)columnNameForSortIdentifier:(NSString *)arg1;
+ (NSArray *)codableObjectCollectionsWithExcludedSyncStore:(id <HDSyncStore>)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 lastSyncAnchor:(long long *)arg3 limit:(unsigned int)arg4 healthDaemon:(id <HDHealthDaemon>)arg5 error:(id *)arg6;
+ (BOOL)addCodableObjectsToCollections:(NSMutableDictionary *)arg1 excludedSyncStore:(id <HDSyncStore>)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 lastSyncAnchor:(long long *)arg4 predicate:(HDSQLitePredicate *)arg5 limit:(unsigned int)arg6 healthDaemon:(id <HDHealthDaemon>)arg7 error:(id *)arg8;
+ (HKObject *)objectWithUUID:(NSUUID *)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 error:(id *)arg3;
+ (int)countOfObjectsOfType:(int)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 predicate:(HDSQLitePredicate *)arg3 withError:(id *)arg4;
+ (NSArray *)sourceIDsForObjectsOfType:(int)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 predicate:(HDSQLitePredicate *)arg3 error:(id *)arg4;
+ (void)enumerateObjectsOfType:(int)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 predicate:(HDSQLitePredicate *)arg3 sourceIdentifier:(NSNumber *)arg4 authorizationFilter:(NSArray * (^)(NSArray *))arg5 limit:(unsigned int)arg6 anchor:(id *)arg7 handler:(void (^)(HKObject *, long long, char *, NSError *))arg8;
+ (void)enumerateObjectsOfType:(int)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 predicate:(HDSQLitePredicate *)arg3 sourceIdentifier:(NSNumber *)arg4 authorizationFilter:(NSArray * (^)(NSArray *))arg5 orderBy:(NSArray *)arg6 directions:(NSArray *)arg7 limit:(unsigned int)arg8 handler:(void (^)(HKObject *, long long, char *, NSError *))arg9;
+ (void)enumerateObjectsWithHealthDaemon:(id <HDHealthDaemon>)arg1 predicate:(HDSQLitePredicate *)arg2 sourceIdentifier:(NSNumber *)arg3 authorizationFilter:(NSArray * (^)(NSArray *))arg4 orderBy:(NSArray *)arg5 directions:(NSArray *)arg6 limit:(unsigned int)arg7 handler:(void (^)(HKObject *, long long, char *, NSError *))arg8;
+ (id)dataEntityForObject:(HKObject *)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 error:(id *)arg3;
+ (BOOL)deleteDataObjects:(NSArray *)arg1 sourceEntity:(HDSourceEntity *)arg2 failIfNotFound:(BOOL)arg3 healthDaemon:(id <HDHealthDaemon>)arg4 error:(id *)arg5;
+ (BOOL)deleteDataObjects:(NSArray *)arg1 sourceEntity:(HDSourceEntity *)arg2 healthDaemon:(id <HDHealthDaemon>)arg3 error:(id *)arg4;
+ (void)insertDataObjects:(NSArray *)arg1 withProvenance:(int)arg2 sourceEntity:(HDSourceEntity *)arg3 creationDate:(NSDate *)arg4 healthDaemon:(id <HDHealthDaemon>)arg5 completionHandler:(void (^)(BOOL, BOOL, HDDataEntity *, NSError *))arg6;
+ (id)insertDataObject:(HKObject *)arg1 withProvenance:(int)arg2 sourceEntity:(HDSourceEntity *)arg3 creationDate:(NSDate *)arg4 healthDaemon:(id <HDHealthDaemon>)arg5 error:(id *)arg6;
- (NSNumber *)dataAnchor;
@end

