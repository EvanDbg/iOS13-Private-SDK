//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

#import <AnnotationKit/AKFlippableAnnotationProtocol-Protocol.h>

@interface AKPolygonAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol>
{
    BOOL _verticallyFlipped;
    NSUInteger _pointCount;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property BOOL verticallyFlipped; // @synthesize verticallyFlipped=_verticallyFlipped;
@property NSUInteger pointCount; // @synthesize pointCount=_pointCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

@end

