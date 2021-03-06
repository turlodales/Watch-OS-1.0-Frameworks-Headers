//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CPMemoryPoolFile : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    int _fd;
    char *_slots;
    unsigned long _slotCount;
    unsigned long _slotLength;
    struct __CFBitVector *_usedSlots;
    struct __CFAllocator *_deallocator;
}

- (id)nextSlotWithBytes:(const void *)arg1 length:(unsigned long)arg2;
- (void)returnSlot:(void *)arg1;
- (id)initWithLabel:(const char *)arg1 slotCount:(unsigned long)arg2 slotLength:(unsigned long)arg3;
- (void)dealloc;

@end

