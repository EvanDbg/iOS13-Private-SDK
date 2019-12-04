//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKMapViewCameraDelegate-Protocol.h>

@class NSString;
@protocol VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraDelegate>
{
    id <VKMapViewCameraDelegate> _cameraDelegate;
    _Bool _isChangingMapType;
    unsigned long long _regionChangeCount;
}

@property(nonatomic) _Bool isChangingMapType; // @synthesize isChangingMapType=_isChangingMapType;
@property(nonatomic) id <VKMapViewCameraDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerWillAnimateToLocation:(CDStruct_c3b9c2ee)arg1;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerCanZoomOutDidChange:(_Bool)arg1;
- (void)mapLayerCanZoomInDidChange:(_Bool)arg1;
- (void)mapLayerMuninAvailabilityDidChange:(long long)arg1;
- (void)mapLayerCanEnter3DModeDidChange:(_Bool)arg1;
- (void)mapLayerDidBecomePitched:(_Bool)arg1;
- (id)mapLayerPresentationForAnnotation:(id)arg1;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerDidChangeRegionAnimated:(_Bool)arg1;
- (void)mapLayerWillChangeRegionAnimated:(_Bool)arg1;
- (void)mapLayerDidChangeVisibleRegion;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
