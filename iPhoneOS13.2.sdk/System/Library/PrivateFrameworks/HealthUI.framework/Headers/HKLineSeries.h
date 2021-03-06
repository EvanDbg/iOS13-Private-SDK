//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class HKLineSeriesPointMarkerStyle, NSArray;

@interface HKLineSeries : HKGraphSeries
{
    BOOL _flatLastValue;
    BOOL _extendLastValue;
    BOOL _extendFirstValue;
    NSArray *_unhighlightedPresentationStyles;
    NSArray *_highlightedPresentationStyles;
    NSArray *_selectedPresentationStyles;
    HKLineSeriesPointMarkerStyle *_selectedPointMarkerStyle;
}

@property(nonatomic) BOOL extendFirstValue; // @synthesize extendFirstValue=_extendFirstValue;
@property(nonatomic) BOOL extendLastValue; // @synthesize extendLastValue=_extendLastValue;
@property(nonatomic) BOOL flatLastValue; // @synthesize flatLastValue=_flatLastValue;
@property(retain, nonatomic) HKLineSeriesPointMarkerStyle *selectedPointMarkerStyle; // @synthesize selectedPointMarkerStyle=_selectedPointMarkerStyle;
@property(retain, nonatomic) NSArray *selectedPresentationStyles; // @synthesize selectedPresentationStyles=_selectedPresentationStyles;
@property(retain, nonatomic) NSArray *highlightedPresentationStyles; // @synthesize highlightedPresentationStyles=_highlightedPresentationStyles;
@property(retain, nonatomic) NSArray *unhighlightedPresentationStyles; // @synthesize unhighlightedPresentationStyles=_unhighlightedPresentationStyles;
// - (void).cxx_destruct;
- (BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2;
- (double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (BOOL)supportsMultiTouchSelection;
// - (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)_renderPointLegendLabelWithText:(id)arg1 drawRect:(CGRect)arg2 labelAttributes:(id)arg3;
// - (void)_renderPointLabelInContext:(CGContextRef )arg1 renderingData:(CDStruct_d6e4b0bd)arg2 numberFormatter:(id)arg3 labelAttributes:(id)arg4;
- (void)_renderPointLabelsInContext:(CGContextRef )arg1 blockCoordinates:(id)arg2 axisRect:(CGRect)arg3 pointTransform:(CGAffineTransform)arg4 presentationStyle:(id)arg5 zoomLevelConfiguration:(id)arg6;
- (void)_renderPointMarkersInContext:(CGContextRef )arg1 blockCoordinates:(id)arg2 pointTransform:(CGAffineTransform)arg3 pointMarkerImage:(id)arg4;
- (void)_renderLineEndCapsInContext:(CGContextRef )arg1 endCaps:(id)arg2 endCapImage:(id)arg3;
- (void)_updateSecondaryRenderContextWithBlockCoordinates:(id)arg1 secondaryRenderContext:(id)arg2 pointTransform:(CGAffineTransform)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(CGRect)arg5;
- (void)_renderLegendPointLabelInContext:(CGContextRef )arg1 point:(CGPoint)arg2 untransformedPoint:(CGPoint)arg3 presentationStyle:(id)arg4 leftOfPoint:(BOOL)arg5;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef )arg5 secondaryRenderContext:(id)arg6;
- (void)_enumerateSinePathsFromBlockCoordinates:(id)arg1 transfrom:(CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 presentationStyle:(id)arg4 axisRect:(CGRect)arg5 handler:(CDUnknownBlockType)arg6;
- (void)_enumerateSawToothPathsFromBlockCoordinates:(id)arg1 transform:(CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 presentationStyle:(id)arg4 axisRect:(CGRect)arg5 handler:(CDUnknownBlockType)arg6;
- (void)addAxisAnnotationForValue:(double)arg1;
- (void)_enumeratePathsFromBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 transform:(CGAffineTransform)arg4 presentationStyle:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(CGAffineTransform)arg2 presentationStyle:(id)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(CGRect)arg5 block:(CDUnknownBlockType)arg6;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(CGAffineTransform)arg2 presentationStyle:(id)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(CGRect)arg5 block:(CDUnknownBlockType)arg6;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(CGAffineTransform)arg2 weightedAverageWidth:(double)arg3 block:(CDUnknownBlockType)arg4;
- (id)_currentPresentationStyles;
- (id)init;

@end

