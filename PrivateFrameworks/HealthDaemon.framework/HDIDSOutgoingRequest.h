//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDNanoSyncDescription.h"

@class HDIDSMessageCenter, NSData, NSDictionary, NSString;

@interface HDIDSOutgoingRequest : NSObject <HDNanoSyncDescription>
{
    BOOL _doNotCompress;
    BOOL _queueOnly1;
    BOOL _forceLocalDelivery;
    unsigned short _messageID;
    NSData *_data;
    NSString *_idsIdentifier;
    unsigned int _priority;
    NSDictionary *_persistentUserInfo;
    HDIDSMessageCenter *_messageCenter;
    id _pbRequest;
    double _sendTimeout;
    double _responseTimeout;
}

+ (id)changeRequestWithChanges:(id)arg1 status:(id)arg2 pairingInfo:(id)arg3;
+ (id)activationRequestWithRestore:(id)arg1 pairingInfo:(id)arg2;
+ (id)requestWithMessageID:(unsigned short)arg1;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
- (id)nanoSyncDescription;
@property(nonatomic) BOOL forceLocalDelivery; // @synthesize forceLocalDelivery=_forceLocalDelivery;
@property(nonatomic) BOOL queueOnly1; // @synthesize queueOnly1=_queueOnly1;
@property(nonatomic) BOOL doNotCompress; // @synthesize doNotCompress=_doNotCompress;
@property(nonatomic) double responseTimeout; // @synthesize responseTimeout=_responseTimeout;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property(nonatomic) __weak HDIDSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) id pbRequest; // @synthesize pbRequest=_pbRequest;
@property(retain, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
- (void).cxx_destruct;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
