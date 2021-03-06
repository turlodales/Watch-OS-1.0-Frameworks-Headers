//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSObject<OS_dispatch_queue>, NSURL, NSURLSession;

@interface CPLConfiguration : NSObject
{
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    double _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
}

+ (void)disableConfigurationFetching;
- (void)check;
- (void)_setContents:(id)arg1;
- (double)_updateInterval;
- (void)refetchFromDisk;
- (id)initWithClientLibraryBaseURL:(id)arg1;
- (void)_load;
- (void)_save;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForKey:(id)arg1;

@end

