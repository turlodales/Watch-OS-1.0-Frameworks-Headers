//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSDate, NSObject<OS_dispatch_group>, NSString;

@interface CKPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> *_group;
    BOOL _isFinished;
    BOOL _isExecuting;
    NSString *_sectionID;
    id _context;
    NSDate *_startDate;
    NSString *_operationID;
    CDUnknownBlockType _daemonInvokeBlock;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (void)main;
- (void)start;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (id)description;
- (void)cancel;
- (BOOL)isConcurrent;
@property(readonly, nonatomic) CDUnknownBlockType daemonInvokeBlock; // @synthesize daemonInvokeBlock=_daemonInvokeBlock;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (id)initWithOperation:(id)arg1 daemonInvocationBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
- (id)CKPropertiesDescription;

@end
