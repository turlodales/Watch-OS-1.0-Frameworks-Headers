//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject
{
    NSMutableDictionary *_weakObjectCache;
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } _tableLock;
}

+ (id)sharedInstance;
- (id)copyObjectForKey:(id)arg1;
- (void)removeObject:(id)arg1 key:(id)arg2;
- (id)copyOrSetObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)objectForKey:(id)arg1;

@end
