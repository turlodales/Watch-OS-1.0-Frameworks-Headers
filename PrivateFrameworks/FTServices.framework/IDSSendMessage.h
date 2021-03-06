//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FTServices/IDSFaceTimeMessage.h>

#import "NSCopying.h"

@class NSArray, NSData, NSNumber;

@interface IDSSendMessage : IDSFaceTimeMessage <NSCopying>
{
    NSArray *_peers;
    NSNumber *_reason;
    NSData *_selfPushToken;
}

- (id)requiredKeys;
@property(copy) NSNumber *reason; // @synthesize reason=_reason;
- (id)messageBody;
- (id)bagKey;
@property(copy) NSArray *peers; // @synthesize peers=_peers;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

