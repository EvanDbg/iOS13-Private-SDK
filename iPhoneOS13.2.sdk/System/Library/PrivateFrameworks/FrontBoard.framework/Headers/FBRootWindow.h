//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <FrontBoard/FBSceneTransformTarget-Protocol.h>

@class CALayer, NSHashTable, UIView;

@interface FBRootWindow : _UIRootWindow <FBSceneTransformTarget>
{
    UIView *_sceneContainerView;
    NSHashTable *_transforms;
    CALayer *_bezelLayer;
    CALayer *_maskLayer;
}

+ (BOOL)_isSecure;
// - (void).cxx_destruct;
- (void)transformDidInvalidate:(id)arg1;
- (void)transformDidUpdate:(id)arg1;
- (void)_updateTransforms;
- (void)setFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_shouldPrepareScreenForWindow;
- (BOOL)_appearsInLoupe;
- (BOOL)_usesWindowServerHitTesting;
- (void)removeSceneTransform:(id)arg1;
- (void)attachSceneTransform:(id)arg1;
- (id)sceneContainerView;
- (void)dealloc;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (id)initWithDisplay:(id)arg1;

@end

