//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PLRevGeoPlace : NSObject
{
    NSMutableDictionary *_placeTypeInfoMap;
    BOOL _isHome;
}

+ (CDUnknownBlockType)sortedAdditionalPlaceInfoComparator;
@property(readonly, nonatomic) NSMutableDictionary *placeTypeInfoMap;
- (void)mergeCommonDataForGEOMapItem:(id)arg1 updateExisting:(BOOL)arg2;
- (void)removePlacesInPlaceInfoSet:(id)arg1 fromOrderType:(unsigned int)arg2;
- (unsigned int)_dominantOrderTypeForPlaceType:(int)arg1 lastOrderType:(unsigned int)arg2;
- (void)addPlaceName:(id)arg1 placeInfo:(id)arg2 forOrderType:(unsigned int)arg3 updateExisting:(BOOL)arg4;
- (void)mergeGEOMapItem:(id)arg1 updateExisting:(BOOL)arg2;
@property(nonatomic) BOOL isHome; // @synthesize isHome=_isHome;
- (id)placeInfoSetForOrderType:(unsigned int)arg1;
- (id)bestPlaceInfoForOrderType:(unsigned int)arg1;
- (id)initWithGEOMapItem:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
