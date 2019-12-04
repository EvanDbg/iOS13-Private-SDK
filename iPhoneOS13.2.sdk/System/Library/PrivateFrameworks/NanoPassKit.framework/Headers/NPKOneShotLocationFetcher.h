//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/CLLocationManagerDelegate-Protocol.h>

@class CLInUseAssertion, CLLocationManager, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKOneShotLocationFetcher : NSObject <CLLocationManagerDelegate>
{
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    NSObject<OS_dispatch_queue> *_locationManagerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *locationManagerQueue; // @synthesize locationManagerQueue=_locationManagerQueue;
@property(retain, nonatomic) CLInUseAssertion *inUseAssertion; // @synthesize inUseAssertion=_inUseAssertion;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *locationFixTimeout; // @synthesize locationFixTimeout=_locationFixTimeout;
@property(copy, nonatomic) id /* block */ completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)fetchLocationWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
