//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCRCStackQueue : NSObject
{
    struct _SCRCStackNode *_firstNode;
    struct _SCRCStackNode *_lastNode;
    unsigned int _count;
}

- (id)dequeueObject;
- (id)topObject;
- (id)popObject;
- (void)pushArray:(id)arg1;
- (id)popObjectRetained;
- (void)pushObject:(id)arg1;
- (void)enqueueObject:(id)arg1;
- (id)dequeueObjectRetained;
- (id)objectEnumerator;
- (BOOL)isEmpty;
- (id)description;
- (void)removeAllObjects;
- (unsigned int)count;
- (void)dealloc;

@end

