//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSBundle, NSString;

@protocol CALNCoreLocationProvider <NSObject>
- (void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(NSString *)arg1;
- (int)authorizationStatusForBundle:(NSBundle *)arg1;
- (int)authorizationStatusForBundleIdentifier:(NSString *)arg1;
@end

