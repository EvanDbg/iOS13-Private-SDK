//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPChunk.h>

__attribute__((visibility("hidden")))
@interface CPTextObject : CPChunk
{
    CGPoint anchor;
    BOOL metricInfoCalculated;
    float maxFontSize;
    double maxFontLineHeight;
}

- (void)translateObjectYBy:(double)arg1;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;
- (float)maxFontSize;
- (void)calculateMetrics;

@end

