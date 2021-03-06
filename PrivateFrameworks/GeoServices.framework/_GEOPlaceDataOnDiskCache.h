//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_GEOPlaceDataCacheProxy.h"

@class GEOPlaceDataDBReader, GEOPlaceDataDBWriter, NSString;

@interface _GEOPlaceDataOnDiskCache : NSObject <_GEOPlaceDataCacheProxy>
{
    GEOPlaceDataDBReader *_reader;
    GEOPlaceDataDBWriter *_writer;
}

- (void)evictAllEntries;
- (void)evictPlaceDataForKey:(struct _GEOTileKey)arg1;
- (id)placeDataForKey:(struct _GEOTileKey)arg1;
- (id)allCacheEntries;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (void)evictPlaceDataForMUID:(unsigned long long)arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)deletePhoneNumberMapping;
- (void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2;
- (void)setPlaceData:(id)arg1 forKey:(struct _GEOTileKey)arg2;
- (id)initWithPath:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

