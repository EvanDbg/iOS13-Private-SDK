//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFTilePoolPrivate;

__attribute__((visibility("hidden")))
@interface PDFTilePool : NSObject
{
    PDFTilePoolPrivate *_private;
}

+ (id)sharedPool;
// - (void).cxx_destruct;
- (int)activeTileCount;
- (void)releasePDFTileSurface:(id)arg1;
- (void)_renderTileForRequest:(id)arg1;
- (CGContextRef )_createContextForTileSurface:(id)arg1 ofRequest:(id)arg2;
- (id)_createTileSurfaceForRequest:(id)arg1;
- (void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(CGRect)arg5 transform:(CGAffineTransform)arg6;
- (void)saveBitmapFiles;
- (int)tileSurfaceType;
- (void)setTileSurfaceType:(int)arg1;
- (int)tileSurfaceSize;
- (void)dealloc;
- (id)init;

@end

