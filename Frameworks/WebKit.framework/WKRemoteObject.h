//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WKRemoteObject : NSObject
{
    struct RetainPtr<_WKRemoteObjectRegistry> _objectRegistry;
    struct RetainPtr<_WKRemoteObjectInterface> _interface;
}

- (id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;

@end
