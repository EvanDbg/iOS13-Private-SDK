//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIBezierPath, UIColor;

@interface PXShapeView : UIView
{
    UIBezierPath *_path;
    UIColor *_fillColor;
}

+ (Class)layerClass;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
// - (void).cxx_destruct;
- (id)shapeLayer;

@end

