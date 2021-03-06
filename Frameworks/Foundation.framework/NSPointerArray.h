//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)weakObjectsPointerArray;
+ (id)strongObjectsPointerArray;
+ (id)pointerArrayWithWeakObjects;
+ (id)pointerArrayWithStrongObjects;
+ (id)pointerArrayWithPointerFunctions:(id)arg1;
+ (id)pointerArrayWithOptions:(unsigned int)arg1;
- (void)compact;
- (id)initWithOptions:(unsigned int)arg1;
@property unsigned int count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allObjects;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)removePointerAtIndex:(unsigned int)arg1;
- (void)addPointer:(void *)arg1;
- (id)mutableArray;
- (void)replacePointerAtIndex:(unsigned int)arg1 withPointer:(void *)arg2;
- (void)insertPointer:(void *)arg1 atIndex:(unsigned int)arg2;
- (void *)pointerAtIndex:(unsigned int)arg1;
@property(readonly, copy) NSPointerFunctions *pointerFunctions;
- (id)initWithPointerFunctions:(id)arg1;

@end

