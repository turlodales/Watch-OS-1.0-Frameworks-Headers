//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XPCCommand, XPCConnection, XPCEvent;

@protocol XPCConnectionDelegate <NSObject>
- (void)XPCConnectionDidTerminate:(XPCConnection *)arg1;

@optional
- (void)XPCConnectionServiceDidRestart:(XPCConnection *)arg1;
- (void)XPCConnectionServiceWillTerminate:(XPCConnection *)arg1;
- (void)XPCConnection:(XPCConnection *)arg1 didReceiveEvent:(XPCEvent *)arg2;
- (void)XPCConnection:(XPCConnection *)arg1 didReceiveCommand:(XPCCommand *)arg2;
@end

