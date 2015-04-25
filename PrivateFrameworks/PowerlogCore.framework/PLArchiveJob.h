//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLArchiveEntry, PLNSTimerOperatorComposition;

@interface PLArchiveJob : NSObject
{
    id <PLArchiveJobManager> _manager;
    PLArchiveEntry *_archiveEntry;
    PLNSTimerOperatorComposition *_watchdog;
}

+ (SEL)recoverSelectorForStage:(int)arg1;
+ (SEL)runSelectorForStage:(int)arg1;
+ (id)storageQueue;
@property(retain) PLArchiveEntry *archiveEntry; // @synthesize archiveEntry=_archiveEntry;
- (id)initWithManager:(id)arg1 andArchiveEntry:(id)arg2;
@property(retain) PLNSTimerOperatorComposition *watchdog; // @synthesize watchdog=_watchdog;
- (void)recoverCompress;
- (void)recoverTrim;
- (void)recoverCopy;
- (void)stageRemove;
- (void)stageCompress;
- (void)stageTrim;
- (void)stageCopy;
- (void)stageStart;
- (void)stopWatchdog;
- (void)startWatchdog;
- (void)recover;
@property(nonatomic) unsigned int numAttempts;
@property(retain) id <PLArchiveJobManager> manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
@property(nonatomic) int stage;
- (void)run;

@end
