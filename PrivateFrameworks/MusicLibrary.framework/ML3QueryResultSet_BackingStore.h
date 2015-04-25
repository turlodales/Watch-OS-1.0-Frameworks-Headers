//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface ML3QueryResultSet_BackingStore : NSObject
{
    struct vector<ML3QueryResult, std::__1::allocator<ML3QueryResult>> _results;
    unsigned long _size;
    long long _forwardCursorIdx;
    long long _backwardCursorIdx;
    long long _sectionStartIdx;
    long long _sectionEndIdx;
    CDStruct_1927aaec _forwardResult;
    CDStruct_1927aaec _backwardResult;
    _Bool _cancelled;
    _Bool _finishedLoading;
    NSObject<OS_dispatch_queue> *_backingStoreQueue;
}

- (id)backingStoreByRemovingPersistentIDs:(const unordered_set_cccfe4a5 *)arg1;
- (void)reverseEnumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)containsPersistentIDs:(const unordered_set_cccfe4a5 *)arg1;
- (void)reverseEnumerateResultsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateResultsUsingBlock:(CDUnknownBlockType)arg1;
- (id)resultAtIndex:(unsigned long)arg1;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSize:(unsigned long)arg1;
@property(readonly, nonatomic) unsigned long count;
- (void)dealloc;
- (void)cancel;

@end
