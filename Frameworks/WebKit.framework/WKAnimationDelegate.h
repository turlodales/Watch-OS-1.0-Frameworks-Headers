//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WKAnimationDelegate : NSObject
{
    unsigned long long _layerID;
    struct RemoteLayerTreeHost *_layerTreeHost;
}

- (id)initWithLayerID:(unsigned long long)arg1 layerTreeHost:(struct RemoteLayerTreeHost *)arg2;
- (void)animationDidStart:(id)arg1;
- (void)invalidate;

@end
