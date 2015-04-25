//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKIdentityProtocol.h"

@class EKObjectID, NSString, NSURL;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol>
{
    int _type;
    NSString *_title;
    NSString *_name;
    NSString *_emailAddress;
    NSURL *_URI;
    EKObjectID *_objectID;
    struct CGColor *_dotColor;
    BOOL _hiddenFromNotificationCenter;
    BOOL _alerted;
    NSString *_firstName;
    NSString *_lastName;
}

@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) EKObjectID *objectID; // @synthesize objectID=_objectID;
- (id)initWithType:(int)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;
@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(nonatomic) BOOL hiddenFromNotificationCenter; // @synthesize hiddenFromNotificationCenter=_hiddenFromNotificationCenter;
@property(nonatomic) struct CGColor *dotColor; // @synthesize dotColor=_dotColor;
@property(nonatomic) BOOL alerted; // @synthesize alerted=_alerted;
@property(readonly, nonatomic) BOOL needsAlert;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
