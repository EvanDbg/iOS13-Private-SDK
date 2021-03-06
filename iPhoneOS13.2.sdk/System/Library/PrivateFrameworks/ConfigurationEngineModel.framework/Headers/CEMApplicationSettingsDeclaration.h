//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber;

@interface CEMApplicationSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadDiagnosticSubmission;
    NSNumber *_payloadAppAnalytics;
    NSNumber *_payloadAllowDiagnosticSubmission;
    NSArray *_payloadAutonomousSingleAppModePermittedAppIDs;
    NSNumber *_payloadAllowActivityContinuation;
    NSNumber *_payloadAllowEnterpriseAppTrust;
    NSNumber *_payloadAllowDiagnosticSubmissionModification;
    NSNumber *_payloadAllowAutomaticAppUpdates;
    NSNumber *_payloadAllowAutomaticAppUpdatesModification;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withDiagnosticSubmission:(id)arg2 withAppAnalytics:(id)arg3 withAllowDiagnosticSubmission:(id)arg4 withAutonomousSingleAppModePermittedAppIDs:(id)arg5 withAllowActivityContinuation:(id)arg6 withAllowEnterpriseAppTrust:(id)arg7 withAllowDiagnosticSubmissionModification:(id)arg8 withAllowAutomaticAppUpdates:(id)arg9 withAllowAutomaticAppUpdatesModification:(id)arg10;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowAutomaticAppUpdatesModification; // @synthesize payloadAllowAutomaticAppUpdatesModification=_payloadAllowAutomaticAppUpdatesModification;
@property(copy, nonatomic) NSNumber *payloadAllowAutomaticAppUpdates; // @synthesize payloadAllowAutomaticAppUpdates=_payloadAllowAutomaticAppUpdates;
@property(copy, nonatomic) NSNumber *payloadAllowDiagnosticSubmissionModification; // @synthesize payloadAllowDiagnosticSubmissionModification=_payloadAllowDiagnosticSubmissionModification;
@property(copy, nonatomic) NSNumber *payloadAllowEnterpriseAppTrust; // @synthesize payloadAllowEnterpriseAppTrust=_payloadAllowEnterpriseAppTrust;
@property(copy, nonatomic) NSNumber *payloadAllowActivityContinuation; // @synthesize payloadAllowActivityContinuation=_payloadAllowActivityContinuation;
@property(copy, nonatomic) NSArray *payloadAutonomousSingleAppModePermittedAppIDs; // @synthesize payloadAutonomousSingleAppModePermittedAppIDs=_payloadAutonomousSingleAppModePermittedAppIDs;
@property(copy, nonatomic) NSNumber *payloadAllowDiagnosticSubmission; // @synthesize payloadAllowDiagnosticSubmission=_payloadAllowDiagnosticSubmission;
@property(copy, nonatomic) NSNumber *payloadAppAnalytics; // @synthesize payloadAppAnalytics=_payloadAppAnalytics;
@property(copy, nonatomic) NSNumber *payloadDiagnosticSubmission; // @synthesize payloadDiagnosticSubmission=_payloadDiagnosticSubmission;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end

