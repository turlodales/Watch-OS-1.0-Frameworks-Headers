//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKShareID, CKSharedItemID, NSObject<CKCommenting>, NSString;

@interface CKCommentQuery : NSObject <NSSecureCoding, NSCopying>
{
    CKShareID *_shareID;
    NSObject<CKCommenting> *_owner;
    NSString *_context;
    int _resultsOrdering;
    CKSharedItemID *_creatorID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSObject<CKCommenting> *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int resultsOrdering; // @synthesize resultsOrdering=_resultsOrdering;
@property(retain, nonatomic) CKSharedItemID *creatorID; // @synthesize creatorID=_creatorID;
- (id)initWithShareID:(id)arg1;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (id)CKPropertiesDescription;

@end
