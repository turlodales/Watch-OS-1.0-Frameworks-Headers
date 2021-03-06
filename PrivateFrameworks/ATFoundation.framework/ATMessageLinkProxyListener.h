//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSString, NSXPCListener;

@interface ATMessageLinkProxyListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    id <ATMessageLink> _messageLink;
}

- (id)initWithMessageLink:(id)arg1;
@property(retain, nonatomic) id <ATMessageLink> messageLink; // @synthesize messageLink=_messageLink;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)endpoint;
- (void)stop;
- (void).cxx_destruct;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

