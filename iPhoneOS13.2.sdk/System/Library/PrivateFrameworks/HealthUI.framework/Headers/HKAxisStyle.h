//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HKAxisLabelStyle, HKFillStyle, HKStrokeStyle, HKTickStyle;

@interface HKAxisStyle : NSObject <NSCopying>
{
    BOOL _showGridLines;
    HKStrokeStyle *_gridLineStyle;
    HKStrokeStyle *_minorGridLineStyle;
    HKStrokeStyle *_referenceGridLineStyle;
    HKStrokeStyle *_axisLineStyle;
    HKTickStyle *_tickStyle;
    HKAxisLabelStyle *_labelStyle;
    NSUInteger _tickPositions;
    NSUInteger _axisLabelPosition;
    HKFillStyle *_fillStyle;
    double _fillInnerPadding;
    double _fillOuterPadding;
    HKStrokeStyle *_borderStyleForFill;
    long long _location;
}

+ (id)defaultStyle;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(retain, nonatomic) HKStrokeStyle *borderStyleForFill; // @synthesize borderStyleForFill=_borderStyleForFill;
@property(nonatomic) double fillOuterPadding; // @synthesize fillOuterPadding=_fillOuterPadding;
@property(nonatomic) double fillInnerPadding; // @synthesize fillInnerPadding=_fillInnerPadding;
@property(retain, nonatomic) HKFillStyle *fillStyle; // @synthesize fillStyle=_fillStyle;
@property(nonatomic) BOOL showGridLines; // @synthesize showGridLines=_showGridLines;
@property(nonatomic) NSUInteger axisLabelPosition; // @synthesize axisLabelPosition=_axisLabelPosition;
@property(nonatomic) NSUInteger tickPositions; // @synthesize tickPositions=_tickPositions;
@property(retain, nonatomic) HKAxisLabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
@property(retain, nonatomic) HKTickStyle *tickStyle; // @synthesize tickStyle=_tickStyle;
@property(retain, nonatomic) HKStrokeStyle *axisLineStyle; // @synthesize axisLineStyle=_axisLineStyle;
@property(retain, nonatomic) HKStrokeStyle *referenceGridLineStyle; // @synthesize referenceGridLineStyle=_referenceGridLineStyle;
@property(retain, nonatomic) HKStrokeStyle *minorGridLineStyle; // @synthesize minorGridLineStyle=_minorGridLineStyle;
@property(retain, nonatomic) HKStrokeStyle *gridLineStyle; // @synthesize gridLineStyle=_gridLineStyle;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;

@end

