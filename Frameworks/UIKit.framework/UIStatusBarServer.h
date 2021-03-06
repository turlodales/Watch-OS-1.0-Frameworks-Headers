//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIStatusBarServer : NSObject
{
    id <UIStatusBarServerClient> _statusBar;
    struct __CFRunLoopSource *_source;
}

+ (id)getDoubleHeightStatusStringForStyle:(int)arg1;
+ (BOOL)getGlowAnimationStateForStyle:(int)arg1;
+ (int)getStyleOverrides;
+ (CDStruct_408a6cfc *)getStatusBarOverrideData;
+ (const CDStruct_4ec3be00 *)getStatusBarData;
+ (void)permanentizeStatusBarOverrideData;
+ (void)postStatusBarOverrideData:(CDStruct_408a6cfc *)arg1;
+ (void)postStatusBarData:(const CDStruct_4ec3be00 *)arg1 withActions:(int)arg2;
+ (unsigned int)_publisherPort;
+ (unsigned int)_serverPort;
+ (double)getGlowAnimationEndTimeForStyle:(int)arg1;
+ (void)removeStatusBarItem:(int)arg1;
+ (void)addStatusBarItem:(int)arg1;
+ (void)postDoubleHeightStatusString:(id)arg1 forStyle:(int)arg2;
+ (void)postGlowAnimationState:(BOOL)arg1 forStyle:(int)arg2;
+ (void)removeStyleOverrides:(int)arg1;
+ (void)addStyleOverrides:(int)arg1;
+ (void)runServer;
- (id)initWithStatusBar:(id)arg1;
- (void)_receivedDoubleHeightStatus:(const char *)arg1 forStyle:(int)arg2;
- (void)_receivedGlowAnimationState:(BOOL)arg1 forStyle:(int)arg2;
- (void)_receivedStyleOverrides:(int)arg1;
- (void)_receivedStatusBarData:(CDStruct_4ec3be00 *)arg1 actions:(int)arg2;
@property(retain, nonatomic) id <UIStatusBarServerClient> statusBar; // @synthesize statusBar=_statusBar;
- (void)dealloc;

@end

