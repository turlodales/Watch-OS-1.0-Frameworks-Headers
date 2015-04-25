//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSNumber, NSString;

@protocol ATXPCInterfaceProtocol
- (void)openDeviceMessageLinkWithPriority:(int)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)getSyncStateWithCompletion:(void (^)(NSError *, NSDictionary *))arg1;
- (void)keepATCAlive:(BOOL)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)lowBatteryNotificationWithCompletion:(void (^)(NSError *))arg1;
- (void)dataMigrationFinishedWithCompletion:(void (^)(NSError *))arg1;
- (void)clearSyncDataWithCompletion:(void (^)(NSError *))arg1;
- (void)purgePartialAsset:(NSString *)arg1 forDataclass:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)prioritizeAsset:(NSString *)arg1 forDataclass:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)cancelSyncWithCompletion:(void (^)(NSError *))arg1;
- (void)registerForStatusOfDataclasses:(NSArray *)arg1 enabled:(NSNumber *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)requestSyncForPairedDeviceWithPriority:(int)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)requestSyncForLibrary:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
@end
