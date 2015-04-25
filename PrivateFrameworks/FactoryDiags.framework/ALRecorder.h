//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AppleLisaHIDDevice, NSObject<OS_dispatch_semaphore>, NSString;

@interface ALRecorder : NSObject
{
    int _recordingFileDescriptor;
    long _recordingFullHeaderLength;
    NSString *_pathToFile;
    NSObject<OS_dispatch_semaphore> *_recordingLock;
    AppleLisaHIDDevice *_recordLisa;
}

@property __weak AppleLisaHIDDevice *recordLisa; // @synthesize recordLisa=_recordLisa;
- (void)recordDevice:(id)arg1 inputReport:(char *)arg2 reportID:(unsigned int)arg3 reportLength:(unsigned int)arg4;
- (struct __CFData *)devicesHeader;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
- (void)stopRecording;
- (void)beginRecording;

@end
