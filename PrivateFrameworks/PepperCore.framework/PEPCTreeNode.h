//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, PEPCTree;

@interface PEPCTreeNode : NSObject
{
    PEPCTreeNode *_parent;
    NSMutableArray *_childrenArray;
    PEPCTree *_tree;
}

@property(readonly, nonatomic) __weak id parent; // @synthesize parent=_parent;
@property(copy, nonatomic) NSArray *children;
@property(retain, nonatomic) NSMutableArray *_children;
- (_Bool)isDescendantOfNode:(id)arg1;
- (void)insertChild:(id)arg1 belowChild:(id)arg2;
- (void)insertChild:(id)arg1 aboveChild:(id)arg2;
- (void)_removeFromParent:(_Bool)arg1;
- (void)fixupTree:(id)arg1;
@property(nonatomic) __weak PEPCTree *tree; // @synthesize tree=_tree;
- (void)removeFromParent;
- (id)childAtIndex:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)insertChild:(id)arg1 atIndex:(int)arg2;
- (void)addChild:(id)arg1;

@end
