//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKView.h>

@class NSMutableArray, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : WAKView
{
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}

- (id)webNodeHighlight;
- (void)layoutSublayers:(id)arg1;
// - (void)_layoutForRectsHighlight:(struct Highlight )arg1 parent:(id)arg2;
// - (void)_layoutForNodeHighlight:(struct Highlight )arg1 parent:(id)arg2;
- (void)_attach:(id)arg1 numLayers:(NSUInteger)arg2;
- (BOOL)isFlipped;
- (void)detachFromWebNodeHighlight;
- (void)dealloc;
- (id)initWithWebNodeHighlight:(id)arg1;
- (void)_removeAllLayers;

@end

