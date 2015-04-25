//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>;

@interface ALPlayer : NSObject
{
    NSMutableDictionary *_lisaDeviceProperties;
    NSObject<OS_dispatch_semaphore> *_playerLock;
    NSObject<OS_dispatch_queue> *_playerQueue;
    NSObject<OS_dispatch_group> *_playerGroup;
    NSObject<OS_dispatch_source> *_playbackTimer;
    unsigned int _driverConnection;
    BOOL _isPlaying;
    double _startTimestamp;
    double _justPlayedTimestamp;
    double _timePosition;
    double _latestTime;
    CDUnknownFunctionPointerType _eventCallback;
    void *_eventCallbackRefcon;
    struct _ALPlayerReportRecord *_firstReport;
    struct _ALPlayerReportRecord *_finalReport;
    struct _ALPlayerReportRecord *_currentReport;
    struct __IOHIDUserDevice *_lisaDeviceRef;
    double _rate;
}

- (void)setRate:(double)arg1;
@property(readonly) double rate; // @synthesize rate=_rate;
@property(readonly) struct __IOHIDUserDevice *lisaDeviceRef; // @synthesize lisaDeviceRef=_lisaDeviceRef;
@property struct _ALPlayerReportRecord *currentReport; // @synthesize currentReport=_currentReport;
@property struct _ALPlayerReportRecord *finalReport; // @synthesize finalReport=_finalReport;
@property struct _ALPlayerReportRecord *firstReport; // @synthesize firstReport=_firstReport;
- (void)setEventCallback:(CDUnknownFunctionPointerType)arg1 withRefcon:(void *)arg2;
- (BOOL)parseSingleInputReport:(char **)arg1 lengthRemaining:(unsigned int *)arg2;
- (id)initWithFile:(id)arg1;
- (void)dispatchReport;
- (void)playbackTimerHandler;
- (void)issueEventCallback:(int)arg1 withData:(void *)arg2;
- (BOOL)createRecordFromBinaryFile:(id)arg1;
- (BOOL)pause;
- (BOOL)stop;
- (void).cxx_destruct;
- (BOOL)load;
- (BOOL)play;
- (BOOL)unload;

@end
