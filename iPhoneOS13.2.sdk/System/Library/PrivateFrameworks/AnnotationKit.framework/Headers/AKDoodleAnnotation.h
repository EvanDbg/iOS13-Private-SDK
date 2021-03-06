//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRotatableAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKStrokedAnnotationProtocol-Protocol.h>

@class UIBezierPath, UIColor;

@interface AKDoodleAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKStrokedAnnotationProtocol>
{
    BOOL _dashed;
    BOOL _hasShadow;
    BOOL _pathIsPrestroked;
    BOOL _pathIsDot;
    double _rotationAngle;
    double _strokeWidth;
    UIColor *_strokeColor;
    long long _brushStyle;
    UIBezierPath *_path;
    CGRect _rectangle;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property BOOL pathIsDot; // @synthesize pathIsDot=_pathIsDot;
@property BOOL pathIsPrestroked; // @synthesize pathIsPrestroked=_pathIsPrestroked;
@property(retain) UIBezierPath *path; // @synthesize path=_path;
@property BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(getter=brushStyle) long long brushStyle; // @synthesize brushStyle=_brushStyle;
@property(getter=isDashed) BOOL dashed; // @synthesize dashed=_dashed;
@property(retain) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property CGRect rectangle; // @synthesize rectangle=_rectangle;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2;
- (void)adjustModelToCompensateForOriginalExif;
- (CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

@end

