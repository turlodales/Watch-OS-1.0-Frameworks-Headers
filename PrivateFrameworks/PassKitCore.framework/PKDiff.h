//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableArray, NSString;

@interface PKDiff : NSObject <NSSecureCoding>
{
    NSMutableArray *_hunks;
    NSString *_passUniqueID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *passUniqueID; // @synthesize passUniqueID=_passUniqueID;
- (id)anyKey;
- (void)addHunksFromDiff:(id)arg1;
- (void)key:(id *)arg1 oldValue:(id *)arg2 newValue:(id *)arg3 message:(id *)arg4 forHunkAtIndex:(int)arg5;
- (int)hunkCount;
- (BOOL)isEqualToDiff:(id)arg1;
- (unsigned int)_hunkIndexForKey:(id)arg1;
- (void)enumerateHunks:(CDUnknownBlockType)arg1;
- (void)addHunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;
- (void)removeHunkForKey:(id)arg1;
- (BOOL)getHunkForKey:(id)arg1 oldValue:(id *)arg2 newValue:(id *)arg3 message:(id *)arg4;
- (int)compare:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

