//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PassKitUIFoundation/SCNSceneRendererDelegate-Protocol.h>

@class NSMutableArray, NSString, PKPeerPayment3DScene, PKPeerPayment3DStore, SCNView;

@interface PKPeerPayment3DTextView : UIView <SCNSceneRendererDelegate>
{
    SCNView *_sceneView;
    PKPeerPayment3DScene *_scene;
    double _sceneWidthUnits;
    double _sceneHeightUnits;
    NSMutableArray *_performHandlers;
    double _dynamicRollPitchMix;
    double _startAnimationTime;
    double _animationDuration;
    double _lastRenderTime;
    BOOL _liveMotionEnabled;
    BOOL _willAnimate;
    BOOL _snapshotRequested;
    BOOL _usedForSnapshotting;
    NSUInteger _framesFullyRendered;
    PKPeerPayment3DStore *_3DStore;
    BOOL _layoutRequested;
    NSMutableArray *_charactersToDraw;
    NSUInteger _renderStyle;
    NSString *_text;
}

+ (id)supportedCharacterSet;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSUInteger renderStyle; // @synthesize renderStyle=_renderStyle;
// - (void).cxx_destruct;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)performPostRender:(CDUnknownBlockType)arg1;
- (void)didMoveToWindow;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)setMotionEffectEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)generatedSnapshot;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)layoutText;
- (void)loadCharactersAndLayout;
- (void)layoutSubviews;
- (void)updateSceneUnits;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 renderStyle:(NSUInteger)arg2 usedForSnapshotting:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1;

@end

