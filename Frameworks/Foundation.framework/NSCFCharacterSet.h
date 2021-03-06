//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSMutableCharacterSet.h>

@interface NSCFCharacterSet : NSMutableCharacterSet
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)finalize;
- (id)invertedSet;
- (void)addCharactersInString:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (oneway void)release;
- (id)retain;
- (Class)classForKeyedArchiver;
- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (BOOL)isSupersetOfSet:(id)arg1;
- (id)bitmapRepresentation;
- (void)invert;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)removeCharactersInRange:(struct _NSRange)arg1;
- (void)addCharactersInRange:(struct _NSRange)arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (Class)classForArchiver;

@end

