//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSPredicate, NSString;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_recordType;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2;
@property(copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (id)CKPropertiesDescription;

@end
