//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBApplicationDefaults : NSObject
{
    int _interfaceOrientation;
    int _backgroundStyle;
    int _statusBarStyle;
    BOOL _statusBarHidden;
    BOOL _statusBarHiddenWhenVerticallyCompact;
}

@property(nonatomic) BOOL statusBarHiddenWhenVerticallyCompact; // @synthesize statusBarHiddenWhenVerticallyCompact=_statusBarHiddenWhenVerticallyCompact;
@property(nonatomic) int backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) BOOL statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) int statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (id)init;

@end
