//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@interface NSOwnedDictionaryProxy : NSDictionary
{
    id _owner;
}

- (id)keyEnumerator;
- (unsigned int)count;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (id)initWithOwner:(id)arg1;
- (void)superRelease;

@end

