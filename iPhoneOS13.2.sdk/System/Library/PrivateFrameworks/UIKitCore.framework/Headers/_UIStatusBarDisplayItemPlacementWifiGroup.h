//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class _UIStatusBarDisplayItemPlacement;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementWifiGroup : _UIStatusBarDisplayItemPlacementGroup
{
    _UIStatusBarDisplayItemPlacement *_signalStrengthPlacement;
    _UIStatusBarDisplayItemPlacement *_iconPlacement;
    _UIStatusBarDisplayItemPlacement *_rawPlacement;
}

@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *rawPlacement; // @synthesize rawPlacement=_rawPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *iconPlacement; // @synthesize iconPlacement=_iconPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *signalStrengthPlacement; // @synthesize signalStrengthPlacement=_signalStrengthPlacement;

@end
