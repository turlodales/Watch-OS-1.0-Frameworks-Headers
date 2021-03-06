//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface RMSPairingRecordStore : NSObject
{
    NSMutableDictionary *_pairingRecords;
}

+ (id)sharedRecordStore;
- (void)removePairingRecordForServiceWithNetworkName:(id)arg1;
- (void)savePairingRecord:(id)arg1 forServiceWithNetworkName:(id)arg2;
- (id)pairingRecordForServiceWithNetworkName:(id)arg1;
- (id)allPairingRecords;
- (void)_synchronizePreferences;
- (void).cxx_destruct;
- (id)init;

@end

