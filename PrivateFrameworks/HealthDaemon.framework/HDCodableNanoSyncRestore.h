//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "HDNanoSyncDescription.h"
#import "HDSyncObjectCollection.h"
#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncRestore : PBCodable <HDSyncObjectCollection, HDNanoSyncDescription, NSCopying>
{
    NSMutableArray *_objectDatas;
    int _objectType;
    struct {
        unsigned int objectType:1;
    } _has;
}

+ (id)restoreWithNanoSyncEntityClass:(Class)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setObjects:(id)arg1;
- (id)decodedObjects;
- (Class)syncEntityClass;
@property(retain, nonatomic) NSMutableArray *objectDatas; // @synthesize objectDatas=_objectDatas;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
@property(nonatomic) BOOL hasObjectType;
- (id)objectDataAtIndex:(unsigned int)arg1;
- (void)clearObjectDatas;
- (unsigned int)objectDatasCount;
- (void)addObjectData:(id)arg1;
- (id)nanoSyncDescription;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

