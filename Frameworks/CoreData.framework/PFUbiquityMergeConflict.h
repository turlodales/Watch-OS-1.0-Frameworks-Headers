//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSMergeConflict.h>

@class NSDictionary;

@interface PFUbiquityMergeConflict : NSMergeConflict
{
    NSDictionary *_ancestorSnapshot;
}

- (void)dealloc;
@property(retain) NSDictionary *ancestorSnapshot; // @synthesize ancestorSnapshot=_ancestorSnapshot;
- (id)initWithSource:(id)arg1 newVersion:(unsigned int)arg2 oldVersion:(unsigned int)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;

@end

