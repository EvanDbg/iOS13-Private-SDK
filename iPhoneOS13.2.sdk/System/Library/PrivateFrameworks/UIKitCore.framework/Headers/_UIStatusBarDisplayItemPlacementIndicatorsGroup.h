//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementIndicatorsGroup : _UIStatusBarDisplayItemPlacementGroup
{
    NSArray *_stablePlacements;
    NSArray *_unstablePlacements;
}

+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 bluetoothPaddingInset:(double)arg3;
+ (id)activityItemDisplayIdentifier;
@property(readonly, copy, nonatomic) NSArray *unstablePlacements; // @synthesize unstablePlacements=_unstablePlacements;
@property(readonly, copy, nonatomic) NSArray *stablePlacements; // @synthesize stablePlacements=_stablePlacements;
// - (void).cxx_destruct;

@end

