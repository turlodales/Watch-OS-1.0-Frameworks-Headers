//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLOrderKeyObject.h"

@class NSManagedObjectContext, NSManagedObjectID, NSString;

@interface PLTransientOrderKey : NSObject <PLOrderKeyObject>
{
    NSManagedObjectID *_objectID;
    NSManagedObjectContext *_moc;
    long long _orderValue;
}

@property(retain, nonatomic) NSManagedObjectContext *moc; // @synthesize moc=_moc;
- (id)childManagedObject;
- (id)secondaryOrderSortKey;
- (void)setIsSpecial:(BOOL)arg1;
@property(retain, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) long long orderValue; // @synthesize orderValue=_orderValue;
- (BOOL)isSpecial;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
