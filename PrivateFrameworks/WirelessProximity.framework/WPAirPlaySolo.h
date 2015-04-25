//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XPCClientDelegate.h"

@class NSString, XPCClient;

@interface WPAirPlaySolo : NSObject <XPCClientDelegate>
{
    int _state;
    XPCClient *_connection;
    id <WPAirPlaySoloDelegate> _delegate;
}

- (void)stopConnectionlessScanningWithData:(id)arg1;
- (void)startConnectionlessScanningWithData:(id)arg1;
- (void)stopConnectionlessAdvertising;
- (void)startConnectionlessAdvertisingWithData:(id)arg1;
- (void)connectionDied;
- (void)messageArrived:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
@property(retain, nonatomic) XPCClient *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
@property int state; // @synthesize state=_state;
@property(nonatomic) __weak id <WPAirPlaySoloDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)connectionInterrupted;
- (void)updateState:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
