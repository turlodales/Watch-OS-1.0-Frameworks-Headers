//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPointerArray;

@interface PUICAppContextDataSourceObservedImpl : NSObject
{
    NSPointerArray *_observers;
}

- (void)notifyObserversDataSourceDidChange:(id)arg1 animated:(_Bool)arg2;
- (void)notifyObserversDataSourceWillChange:(id)arg1 animated:(_Bool)arg2;
- (void)removeStatusBarAppContextDataSourceObserver:(id)arg1;
- (void)addStatusBarAppContextDataSourceObserver:(id)arg1;
- (_Bool)isObservingStatusBarAppContextDataSource:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end

