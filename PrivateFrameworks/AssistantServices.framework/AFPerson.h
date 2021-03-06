//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistantServices/AFSiriModelObject.h>

#import "AFTranscriptionType.h"

@class NSSet, NSString;

@interface AFPerson : AFSiriModelObject <AFTranscriptionType>
{
    NSSet *_contactHandles;
    NSString *_fullName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSSet *contactHandles; // @synthesize contactHandles=_contactHandles;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

