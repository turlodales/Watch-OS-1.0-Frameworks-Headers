//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTileKeyMap.h>

@class NSLock;

@interface VKTilePool : VKTileKeyMap
{
    NSLock *_lock;
}

- (id)initWithMapType:(int)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObjectForKey:(const struct VKTileKey *)arg1;
- (void)removeAllObjects;
- (id)init;
- (unsigned long)count;
- (void)dealloc;
- (void)setObject:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (id)objectForKey:(const struct VKTileKey *)arg1;

@end
