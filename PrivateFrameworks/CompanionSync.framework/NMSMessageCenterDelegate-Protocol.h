//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMSIncomingRequest, NMSMessageCenter, NMSOutgoingRequest, NMSOutgoingResponse, NSDictionary, NSString;

@protocol NMSMessageCenterDelegate <NSObject>

@optional
- (void)messageCenter:(NMSMessageCenter *)arg1 didSuccessfullyDeliverRequestWithIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didSuccessfullySendRequestWithIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifier:(NSString *)arg2 forResponse:(NMSOutgoingResponse *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifierForRequest:(NMSOutgoingRequest *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 didReceiveUnknownRequest:(NMSIncomingRequest *)arg2;
@end

