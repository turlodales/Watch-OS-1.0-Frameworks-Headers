//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NSMetadataQueryResultGroup : NSObject
{
    id _private[9];
    unsigned int _private2[1];
    void *_reserved;
}

- (id)resultAtIndex:(unsigned int)arg1;
@property(readonly, copy) NSArray *results;
@property(readonly, retain) id value;
- (void)dealloc;
- (void)_zapResultArray;
@property(readonly, copy) NSArray *subgroups;
- (void)_addResult:(unsigned int)arg1;
- (id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned int)arg3 value:(id)arg4;
@property(readonly) unsigned int resultCount;
@property(readonly, copy) NSString *attribute;

@end

