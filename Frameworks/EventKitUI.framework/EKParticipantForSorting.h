//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject
{
    EKParticipant *_participant;
    BOOL _isEmail;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_cachedDisplayName;
}

- (id)lastName;
- (id)firstName;
- (BOOL)isEmail;
- (void).cxx_destruct;
- (id)displayName;
- (int)compare:(id)arg1;
- (id)description;
- (id)initWithEKParticipant:(id)arg1;
- (id)participant;

@end

