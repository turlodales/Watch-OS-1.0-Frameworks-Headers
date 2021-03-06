//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface __NSCFMemoryURLCache : NSObject
{
    id _internal;
    unsigned int _memoryCapacity;
    unsigned int _currentLength;
    NSMutableDictionary *_memoryStorage;
    NSMutableArray *_memoryStorageLRU;
    NSObject<OS_dispatch_queue> *_memoryQueue;
}

+ (void)initialize;
- (id)description;
- (void)dealloc;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (void)setDiskCapacity:(unsigned int)arg1;
- (void)setMemoryCapacity:(unsigned int)arg1;
- (unsigned int)currentMemoryUsage;
- (unsigned int)diskCapacity;
- (unsigned int)memoryCapacity;
- (void)removeCachedResponseForRequest:(id)arg1;
- (id)initMemoryCache;
- (id)initEmptyCache;
- (void)removeAllCachedResponses;
- (id)initWithMemoryCapacity:(unsigned int)arg1 diskCapacity:(unsigned int)arg2 diskPath:(id)arg3;
- (id)initByCallingSuperSuperInit;
- (unsigned int)currentDiskUsage;

@end

