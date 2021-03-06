//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

@class CKShareID, NSString;

@interface CKUpdateUserPresenceOperationInfo : CKOperationInfo
{
    BOOL _isLurk;
    int _status;
    CKShareID *_shareID;
    NSString *_lastETag;
    unsigned long long _customStatusFlags;
    double _ttl;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double ttl; // @synthesize ttl=_ttl;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) BOOL isLurk; // @synthesize isLurk=_isLurk;
@property(retain, nonatomic) NSString *lastETag; // @synthesize lastETag=_lastETag;
@property(nonatomic) unsigned long long customStatusFlags; // @synthesize customStatusFlags=_customStatusFlags;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;

@end

