//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Symbolication/VMUCallTreeNode.h>

@class NSCountedSet, NSString;

@interface VMUCallTreeLeafNode : VMUCallTreeNode
{
    NSCountedSet *_addresses;
    NSString *_combinedName;
}

- (void)getBrowserName:(id)arg1;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
- (id)init;
- (void)dealloc;
- (void)addAddress:(unsigned long long)arg1;

@end

