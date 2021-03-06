//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSString;

@interface MCDNSProxyPayload : MCPayload
{
    NSString *_appBundleIdentifier;
    NSString *_providerBundleIdentifier;
    NSDictionary *_providerConfiguration;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, copy, nonatomic) NSDictionary *providerConfiguration; // @synthesize providerConfiguration=_providerConfiguration;
@property(readonly, copy, nonatomic) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
// - (void).cxx_destruct;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *configurationDictionary;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id )arg3;

@end

