//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKPageController.h>

@class AKController, AKGeometryHelper, AKLayerPresentationManager, AKPageModelController, UIView;

@interface AKPageControllerForTesting : AKPageController
{
    AKController *_testingController;
    NSUInteger _testingPageIndex;
    AKPageModelController *_testingPageModelController;
    AKLayerPresentationManager *_testingLayerPresentationManager;
    AKGeometryHelper *_testingGeometryHelper;
    UIView *_testingOverlayView;
}

@property(retain) UIView *testingOverlayView; // @synthesize testingOverlayView=_testingOverlayView;
@property(retain) AKGeometryHelper *testingGeometryHelper; // @synthesize testingGeometryHelper=_testingGeometryHelper;
@property(retain) AKLayerPresentationManager *testingLayerPresentationManager; // @synthesize testingLayerPresentationManager=_testingLayerPresentationManager;
@property(retain) AKPageModelController *testingPageModelController; // @synthesize testingPageModelController=_testingPageModelController;
@property NSUInteger testingPageIndex; // @synthesize testingPageIndex=_testingPageIndex;
@property(retain) AKController *testingController; // @synthesize testingController=_testingController;
// - (void).cxx_destruct;
- (double)modelBaseScaleFactor;
- (CGRect)maxPageRect;
- (CGRect)convertRectFromModelToOverlay:(CGRect)arg1;
- (CGRect)convertRectFromOverlayToModel:(CGRect)arg1;
- (CGPoint)convertPointFromModelToOverlay:(CGPoint)arg1;
- (CGPoint)convertPointFromOverlayToModel:(CGPoint)arg1;
- (id)overlayView;
- (id)geometryHelper;
- (id)layerPresentationManager;
- (id)pageModelController;
- (NSUInteger)pageIndex;
- (id)controller;
- (id)init;

@end

