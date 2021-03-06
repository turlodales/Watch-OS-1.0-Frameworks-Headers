//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VKAnchorContext : NSObject
{
    shared_ptr_4d0abf3b _anchorContext;
    shared_ptr_00dc923b _anchorFactory;
}

- (id)initGeocentricWithCache:(id)arg1;
- (shared_ptr_00dc923b)anchorFactory;
- (id)initWithAnchorContext:(struct AnchorContext *)arg1;
- (id)newAnchorAtCoordinate:(CDStruct_c3b9c2ee)arg1 followsTerrain:(BOOL)arg2;
- (BOOL)isMercator;
- (id)initMercator;
- (void)setMercatorTerrainHeightCache:(id)arg1;
- (shared_ptr_4d0abf3b)anchorContext;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;

@end

