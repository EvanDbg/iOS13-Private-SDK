//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHVisualization.h>

@protocol CHStrokeProvider;

@interface CHStrokeVisualization : CHVisualization
{
    id <CHStrokeProvider> __strokeProviderDrawn;
}

@property(retain, nonatomic) id <CHStrokeProvider> _strokeProviderDrawn; // @synthesize _strokeProviderDrawn=__strokeProviderDrawn;
- (void)drawStrokesFromStrokeProvider:(id)arg1 inRect:(CGRect)arg2 context:(CGContextRef )arg3;
- (void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef )arg2 viewBounds:(CGRect)arg3;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)dealloc;

@end

