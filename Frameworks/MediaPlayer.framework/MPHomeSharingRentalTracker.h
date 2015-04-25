//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPHomeSharingRentalTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_rentalTrackerQueue;
    NSMutableDictionary *_rentals;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2;
- (void)removeRentalWithItemID:(unsigned long long)arg1;
- (void)_saveRentals;
- (void)removeAllRentalsForDatabaseID:(id)arg1;

@end
