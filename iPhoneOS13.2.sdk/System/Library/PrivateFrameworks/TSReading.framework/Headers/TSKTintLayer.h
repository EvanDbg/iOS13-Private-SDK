//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer
{
    CALayer *_contentsLayer;
}

@property(retain, nonatomic) CALayer *contentsLayer; // @synthesize contentsLayer=_contentsLayer;
- (void)layoutSublayers;
@property CGColorRef tintColor;
- (void)setNeedsDisplay;
- (void)setContents:(id)arg1;
- (id)contents;
- (void)dealloc;

@end

