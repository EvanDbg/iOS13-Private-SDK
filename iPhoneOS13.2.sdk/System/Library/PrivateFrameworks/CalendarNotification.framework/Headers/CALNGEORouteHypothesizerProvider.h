//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNRouteHypothesizerProvider-Protocol.h>

@interface CALNGEORouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider>
{
}

+ (id)sharedInstance;
- (void)removedRouteHypothesizerForEventExternalURL:(id)arg1;
- (void)createdRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2;
- (void)didDismissUINotification:(NSUInteger)arg1 forPlannedDestination:(id)arg2 dismissalType:(NSUInteger)arg3;
- (id)hypothesizerForPlannedDestination:(id)arg1;

@end

