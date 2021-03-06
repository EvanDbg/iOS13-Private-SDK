//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXRelatedSettings : PXSettings
{
    BOOL _enableDiversity;
    BOOL _passKeyAsset;
    BOOL _simulateSlowFetches;
    long long _implementation;
    long long _limit;
    long long _preferredInitialNumberOfEntriesDisplayed;
    double _polaroidFadeDuration;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double polaroidFadeDuration; // @synthesize polaroidFadeDuration=_polaroidFadeDuration;
@property(nonatomic) BOOL simulateSlowFetches; // @synthesize simulateSlowFetches=_simulateSlowFetches;
@property(nonatomic) BOOL passKeyAsset; // @synthesize passKeyAsset=_passKeyAsset;
@property(nonatomic) BOOL enableDiversity; // @synthesize enableDiversity=_enableDiversity;
@property(nonatomic) long long preferredInitialNumberOfEntriesDisplayed; // @synthesize preferredInitialNumberOfEntriesDisplayed=_preferredInitialNumberOfEntriesDisplayed;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(nonatomic) long long implementation; // @synthesize implementation=_implementation;
- (void)setDefaultValues;
- (id)parentSettings;

@end

