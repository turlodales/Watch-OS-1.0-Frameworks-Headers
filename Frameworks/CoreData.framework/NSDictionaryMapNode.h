//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSStoreMapNode.h>

#import "NSCoding.h"

@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding>
{
    id *_attributes;
    id _attributesAsEncoded;
}

+ (void)initialize;
- (const id *)attributeValues;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)valueForKey:(id)arg1;
- (id)initWithValues:(id *)arg1 objectID:(id)arg2;
- (void)_doAttributeDecoding;

@end
