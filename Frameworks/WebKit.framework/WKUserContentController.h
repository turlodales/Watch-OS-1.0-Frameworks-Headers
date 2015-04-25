//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface WKUserContentController : NSObject
{
    struct RefPtr<WebKit::WebUserContentControllerProxy> _userContentControllerProxy;
    struct RetainPtr<NSMutableArray> _userScripts;
}

- (void)removeScriptMessageHandlerForName:(id)arg1;
- (void)addScriptMessageHandler:(id)arg1 name:(id)arg2;
- (void)removeAllUserScripts;
- (void)addUserScript:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *userScripts;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;

@end
