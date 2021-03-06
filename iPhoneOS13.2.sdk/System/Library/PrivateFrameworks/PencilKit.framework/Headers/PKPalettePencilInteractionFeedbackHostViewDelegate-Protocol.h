//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKPaletteView, UIColor;

@protocol PKPalettePencilInteractionFeedbackHostViewDelegate <NSObject>
- (double)paletteSpringAnimationResponse;
- (double)paletteSpringAnimationDampingRatio;
- (double)paletteBorderWidth;
- (UIColor *)paletteBorderColor;
- (double)paletteShadowRadius;
- (double)paletteShadowOpacity;
- (CGSize)paletteShadowOffset;
- (UIColor *)paletteShadowColor;
- (double)minimizedPaletteScaleFactor;
- (double)paletteEdgeSpacingForMinimized;
- (double)paletteEdgeSpacing;
- (CGSize)minimizedPaletteSize;
- (CGSize)regularPaletteSize;
- (PKPaletteView *)paletteView;
@end

