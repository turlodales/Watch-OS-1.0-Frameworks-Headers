//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@class _PFArray;

@interface _PFMutableProxyArray : NSMutableArray
{
    int _cd_rc;
    unsigned int _editCount;
    unsigned int _offset;
    unsigned int _limit;
    _PFArray *_originalArray;
    NSMutableArray *_updatedObjectsArray;
    struct __CFArray *_indicesVeneer;
}

- (void)finalize;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (void)removeLastObject;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (unsigned int)retainCount;
- (unsigned int)indexOfObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (id)initWithPFArray:(id)arg1;
- (void)_rehash;
- (id)initWithPFArray:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;

@end

