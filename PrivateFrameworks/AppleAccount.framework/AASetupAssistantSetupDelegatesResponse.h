//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSNumber, NSString;

@interface AASetupAssistantSetupDelegatesResponse : AAResponse
{
}

@property(readonly, nonatomic) NSString *dsid;
@property(readonly, nonatomic) NSString *statusMessage;
- (id)responseParametersForServiceIdentifier:(id)arg1;
@property(readonly, nonatomic) NSNumber *status;
@property(readonly, nonatomic) NSDictionary *responseParameters;

@end

