//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWNodeMessage.h>

@class BWDroppedSample;

@interface BWNodeDroppedSampleMessage : BWNodeMessage
{
    BWDroppedSample *_droppedSample;
}

+ (id)newMessageWithDroppedSample:(id)arg1;
- (id)_initWithDroppedSample:(id)arg1;
@property(readonly) BWDroppedSample *droppedSample;
- (void)dealloc;

@end

