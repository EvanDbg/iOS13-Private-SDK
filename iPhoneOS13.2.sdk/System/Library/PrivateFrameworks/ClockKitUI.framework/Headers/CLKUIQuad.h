//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKUIQuadView;

@interface CLKUIQuad : NSObject
{
    BOOL _opaque;
    CLKUIQuadView *_quadView;
}

@property(nonatomic) __weak CLKUIQuadView *quadView; // @synthesize quadView=_quadView;
@property(nonatomic, getter=isOpaque) BOOL opaque; // @synthesize opaque=_opaque;
// - (void).cxx_destruct;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (void)performOffscreenPassesWithCommandBuffer:(id)arg1;
//  (void)encodeGLforSize:(struct CLKUIQuadSize)arg1;
- (void)purge;
- (void)unlinkQuadView;
- (BOOL)prepareForTime:(double)arg1;
- (void)setupForQuadView:(id)arg1;
- (id)init;

@end

