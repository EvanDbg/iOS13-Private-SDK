//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MNPlannedDestination, MNRouteUpdate, NSError;
@protocol MNTimeballInternalProvider;

@protocol MNTimeballInternalObserver <NSObject>
- (void)provider:(id <MNTimeballInternalProvider>)arg1 didReceiveUpdate:(MNRouteUpdate *)arg2 forDestination:(MNPlannedDestination *)arg3;
- (void)provider:(id <MNTimeballInternalProvider>)arg1 didReceiveError:(NSError *)arg2 forDestination:(MNPlannedDestination *)arg3;
@end

