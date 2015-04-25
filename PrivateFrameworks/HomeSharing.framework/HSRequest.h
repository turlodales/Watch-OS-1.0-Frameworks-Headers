//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableArray, NSString, NSURL;

@interface HSRequest : NSObject
{
    NSString *_action;
    NSData *_bodyData;
    NSDictionary *_arguments;
    int _method;
    NSMutableArray *_cachedBodyDataBlocks;
    BOOL _concurrent;
    BOOL _excludeSessionIDFromURL;
    NSURL *_responseDataDestinationFileURL;
}

+ (id)request;
@property(nonatomic) int method; // @synthesize method=_method;
@property(copy, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(copy, nonatomic) NSURL *responseDataDestinationFileURL; // @synthesize responseDataDestinationFileURL=_responseDataDestinationFileURL;
@property(nonatomic) BOOL excludeSessionIDFromURL; // @synthesize excludeSessionIDFromURL=_excludeSessionIDFromURL;
- (id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (BOOL)acceptsGzipEncoding;
- (id)canonicalResponseForResponse:(id)arg1;
- (void)appendCachedBodyDataBlocksIntoData:(id)arg1 clearCache:(BOOL)arg2;
- (unsigned int)cachedBodyDataBlocksLength;
- (void)cacheBodyDataBlock:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
- (id)description;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
@property(readonly, nonatomic, getter=isConcurrent) BOOL concurrent; // @synthesize concurrent=_concurrent;
@property(readonly, nonatomic) double timeoutInterval;
- (id)initWithAction:(id)arg1;

@end
