//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BBGlobalSettings, NSSet, UNSSettingsGateway;

@protocol UNSSettingsGatewayObserver <NSObject>

@optional
- (void)settingsGateway:(UNSSettingsGateway *)arg1 didUpdateGlobalSettings:(BBGlobalSettings *)arg2;
- (void)settingsGateway:(UNSSettingsGateway *)arg1 didUpdateSectionInfoForSectionIDs:(NSSet *)arg2;
@end

