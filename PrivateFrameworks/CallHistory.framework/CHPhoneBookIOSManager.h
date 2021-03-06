//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

#import "CHPhoneBookManagerProtocol.h"

@class NSString;

@interface CHPhoneBookIOSManager : CHLogger <CHPhoneBookManagerProtocol>
{
    BOOL _callerIdIsEmail;
    int _recordId;
    int _multiValueId;
    void *_record;
    unsigned int _recordIsSuggested;
}

@property(nonatomic) void *record; // @synthesize record=_record;
@property unsigned int recordIsSuggested; // @synthesize recordIsSuggested=_recordIsSuggested;
@property BOOL callerIdIsEmail; // @synthesize callerIdIsEmail=_callerIdIsEmail;
@property int multiValueId; // @synthesize multiValueId=_multiValueId;
- (void)fetchABRecord:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(BOOL)arg3;
@property int recordId; // @synthesize recordId=_recordId;
- (id)getLocalizedCallerIdLabelForRecordId:(id)arg1;
- (id)getPersonsNameForRecordId:(id)arg1;
- (BOOL)isABContactASuggestion;
- (void)setABRecordMultiValueId:(id)arg1;
- (void)setABRecordRef:(const void *)arg1;
- (void)setABRecordId:(id)arg1;
- (const void *)getABRecordRef;
- (id)getCallerIdPropertyMultiValueId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(BOOL)arg3;
- (id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(BOOL)arg3;
- (void)releaseCachedRecord;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

