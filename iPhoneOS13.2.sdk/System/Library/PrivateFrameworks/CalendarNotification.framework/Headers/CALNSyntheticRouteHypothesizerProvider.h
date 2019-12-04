//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNRouteHypothesizerProvider-Protocol.h>

@class CADSyntheticRouteHypothesizerCache, NSString;

@interface CALNSyntheticRouteHypothesizerProvider : NSObject <CALNRouteHypothesizerProvider>
{
    CADSyntheticRouteHypothesizerCache *_syntheticRouteHypothesizerCache;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) CADSyntheticRouteHypothesizerCache *syntheticRouteHypothesizerCache; // @synthesize syntheticRouteHypothesizerCache=_syntheticRouteHypothesizerCache;
- (void)removedRouteHypothesizerForEventExternalURL:(id)arg1;
- (void)createdRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2;
- (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
- (id)hypothesizerForPlannedDestination:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
