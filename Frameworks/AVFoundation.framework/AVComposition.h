//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

#import "NSMutableCopying.h"

@class AVCompositionInternal, NSArray;

@interface AVComposition : AVAsset <NSMutableCopying>
{
    AVCompositionInternal *_priv;
}

+ (void)initialize;
@property(readonly, nonatomic) NSArray *tracks;
- (void)finalize;
@property(readonly, nonatomic) struct CGSize naturalSize;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)_setNaturalSize:(struct CGSize)arg1;
- (long)_createEmptyMutableCompositionIfNeeded;
- (id)_mutableTracks;
- (id)_newTrackForIndex:(long)arg1;
- (void)_loadAssetInspectorAndLoaderOnce;
- (id)_initWithComposition:(id)arg1;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)_assetInspector;
- (id)_assetInspectorLoader;

@end
