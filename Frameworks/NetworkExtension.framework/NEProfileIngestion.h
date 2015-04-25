//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEProfileIngestionDelegate.h"

@class NEConfiguration, NEConfigurationManager, NSMutableArray, NSString;

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate>
{
    NSString *_clientName;
    NSString *_payloadType;
    NEConfigurationManager *_manager;
    NSMutableArray *_currentConfigurations;
    NEConfiguration *_ingestedConfiguration;
}

+ (void)profileMigrationComplete;
+ (id)getServiceIDForPayload:(id)arg1;
@property(readonly) NSString *payloadType; // @synthesize payloadType=_payloadType;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
- (BOOL)updateAppLayerVPNMappingRules:(id)arg1;
- (id)copyManagedConfigurationIDs;
- (BOOL)updateDefaultAfterDeletingConfiguration;
- (BOOL)updateDefaultAfterAddingConfiguration;
- (BOOL)enableAlwaysOnVpn;
- (void)enableDefaultService;
- (void)unlockConfigurations;
- (BOOL)lockConfigurations;
- (BOOL)isInstalled:(id)arg1;
- (id)setAsideConfigurationName:(id)arg1 unsetAside:(BOOL)arg2;
- (BOOL)removeConfigurationWithIdentifier:(id)arg1;
- (BOOL)removeIngestedConfiguration;
- (BOOL)saveIngestedConfiguration;
- (BOOL)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2;
- (BOOL)enableAlwaysOnVpnInternal:(BOOL)arg1;
- (BOOL)loadConfigurationsForceReloadFromDisk;
- (id)resolveConfigurationNameConflict:(id)arg1;
- (id)findConfigurationByPayloadUUID:(id)arg1;
- (BOOL)saveConfiguration:(id)arg1;
- (id)findConfigurationByName:(id)arg1;
- (BOOL)loadConfigurationsWithRefreshOption:(BOOL)arg1;
@property(retain) NEConfiguration *ingestedConfiguration; // @synthesize ingestedConfiguration=_ingestedConfiguration;
- (id)findConfigurationByConfigurationID:(id)arg1;
@property(retain) NSMutableArray *currentConfigurations; // @synthesize currentConfigurations=_currentConfigurations;
- (id)initWithNameAndType:(id)arg1 payloadType:(id)arg2;
- (BOOL)removeConfiguration:(id)arg1;
@property(readonly) NEConfigurationManager *manager; // @synthesize manager=_manager;

@end
