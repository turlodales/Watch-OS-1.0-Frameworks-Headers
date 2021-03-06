//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSValue.h>

@class NSString;

@interface NSNumber : NSValue
{
}

+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedInteger:(unsigned int)arg1;
+ (id)numberWithLong:(long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)numberWithInteger:(int)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithBool:(BOOL)arg1;
+ (id)numberWithInt:(int)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)isEqualToNumber:(id)arg1;
@property(readonly) long longValue;
@property(readonly) short shortValue;
- (id)initWithUnsignedInteger:(unsigned int)arg1;
@property(readonly) BOOL charValue;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithUnsignedLong:(unsigned long)arg1;
- (id)initWithFloat:(float)arg1;
@property(readonly) unsigned char unsignedCharValue;
- (id)initWithInteger:(int)arg1;
@property(readonly) unsigned long unsignedLongValue;
- (id)initWithBool:(BOOL)arg1;
@property(readonly) unsigned long long unsignedLongLongValue;
- (id)initWithInt:(int)arg1;
@property(readonly, copy) NSString *stringValue;
- (int)compare:(id)arg1;
@property(readonly) unsigned int unsignedIntValue;
@property(readonly) long long longLongValue;
@property(readonly) unsigned int unsignedIntegerValue;
@property(readonly) float floatValue;
- (id)initWithLong:(long)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) int integerValue;
@property(readonly) double doubleValue;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) BOOL boolValue;
@property(readonly) int intValue;
@property(readonly) unsigned short unsignedShortValue;
@property(readonly) CDStruct_5fe7aead decimalValue;
- (id)initWithChar:(BOOL)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (BOOL)_allowsDirectEncoding;
- (unsigned long)_cfTypeID;
- (_Bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (int)_reverseCompare:(id)arg1;
- (unsigned char)_getValue:(void *)arg1 forType:(long)arg2;
- (long)_cfNumberType;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (BOOL)isNSNumber__;

@end

