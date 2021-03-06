//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/CLLocationManagerDelegate-Protocol.h>

@class CLInUseAssertion, CLLocation, CLLocationManager, GEOLocationShifter, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MNTimeballLocationManager : NSObject <CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    CLInUseAssertion *_inUseAssertion;
    CLLocationManager *_locationProvider;
    GEOLocationShifter *_locationShifter;
    NSMutableArray *_requests;
}

+ (void)setLocationProviderClass:(Class)arg1;
// - (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_requestTimedOut:(id)arg1;
- (void)_processError:(id)arg1;
- (void)_processLocation:(id)arg1;
- (void)_processPendingRequests;
- (void)_removeRequest:(id)arg1;
- (void)_addRequest:(id)arg1;
- (void)_setupLocationProvider;
- (id)locationProvider;
@property(readonly, nonatomic) CLLocation *lastLocation;
- (void)getLocationWithAccuracy:(double)arg1 maxAttempts:(NSUInteger)arg2 timeoutInterval:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

