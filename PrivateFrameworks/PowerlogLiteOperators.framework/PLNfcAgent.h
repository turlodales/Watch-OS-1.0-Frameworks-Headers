//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class PLXPCListenerOperatorComposition;

@interface PLNfcAgent : PLAgent
{
    BOOL _fieldState;
    PLXPCListenerOperatorComposition *_fieldNotification;
    PLXPCListenerOperatorComposition *_pushNotification;
    PLXPCListenerOperatorComposition *_cardNotification;
}

+ (id)entryEventPointDefinitionPush;
+ (id)entryEventForwardDefinitionCard;
+ (id)entryEventForwardDefinitionField;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
@property(retain) PLXPCListenerOperatorComposition *cardNotification; // @synthesize cardNotification=_cardNotification;
@property(retain) PLXPCListenerOperatorComposition *pushNotification; // @synthesize pushNotification=_pushNotification;
@property(retain) PLXPCListenerOperatorComposition *fieldNotification; // @synthesize fieldNotification=_fieldNotification;
@property BOOL fieldState; // @synthesize fieldState=_fieldState;
- (void)fieldChangedWithEntry:(id)arg1;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)init;

@end

