//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALayer, NSArray, NSMutableSet, TSDRep;

@protocol TSDRepDirectLayerHosting <NSObject>
- (void)directLayerhostUpdateTopLevelTilingLayers:(NSMutableSet *)arg1 forRep:(TSDRep *)arg2;
- (void)directLayerHostRemoveIfMatchingContainerLayer:(CALayer *)arg1 forRep:(TSDRep *)arg2;
- (void)directLayerHostUpdateWithContainerLayer:(CALayer *)arg1 forRep:(TSDRep *)arg2;

@optional
- (void)directLayerHostUpdateOverlayLayers:(NSArray *)arg1 forRep:(TSDRep *)arg2;
@end

