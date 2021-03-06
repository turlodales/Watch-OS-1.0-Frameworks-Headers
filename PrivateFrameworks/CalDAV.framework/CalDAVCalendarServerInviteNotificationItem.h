//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class CalDAVCalendarServerAccessItem, CalDAVCalendarServerOrganizerItem, CalDAVSupportedCalendarComponentSet, CoreDAVHrefItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem
{
    CoreDAVLeafItem *_uid;
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_inviteStatus;
    CoreDAVItemWithNoChildren *_calendarPublic;
    CalDAVCalendarServerAccessItem *_access;
    CoreDAVItemWithHrefChildItem *_hostURL;
    CalDAVCalendarServerOrganizerItem *_organizer;
    CoreDAVLeafItem *_summary;
    CalDAVSupportedCalendarComponentSet *_supportedCalendarComponentSet;
}

@property(retain, nonatomic) CoreDAVLeafItem *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) CoreDAVLeafItem *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) CalDAVSupportedCalendarComponentSet *supportedCalendarComponentSet; // @synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *hostURL; // @synthesize hostURL=_hostURL;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus; // @synthesize inviteStatus=_inviteStatus;
- (id)copyParseRules;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *calendarPublic; // @synthesize calendarPublic=_calendarPublic;
- (BOOL)isComponentSupportedForString:(id)arg1;
- (id)initForReplyWithUID:(id)arg1 href:(id)arg2 hostURL:(id)arg3 summary:(id)arg4;
@property(retain, nonatomic) CalDAVCalendarServerAccessItem *access; // @synthesize access=_access;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
- (id)description;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) CalDAVCalendarServerOrganizerItem *organizer; // @synthesize organizer=_organizer;

@end

