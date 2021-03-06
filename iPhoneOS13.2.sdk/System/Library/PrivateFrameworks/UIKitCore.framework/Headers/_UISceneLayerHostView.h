//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDirectionalRotationView.h>

@class FBSceneLayer, UIScenePresentationContext, UITransformer;

__attribute__((visibility("hidden")))
@interface _UISceneLayerHostView : _UIDirectionalRotationView
{
    FBSceneLayer *_sceneLayer;
    UITransformer *_transformer;
    UIScenePresentationContext *_presentationContext;
    UIScenePresentationContext *_currentPresentationContext;
}

@property(readonly, nonatomic) FBSceneLayer *sceneLayer; // @synthesize sceneLayer=_sceneLayer;
@property(retain, nonatomic) UITransformer *transformer; // @synthesize transformer=_transformer;
@property(retain, nonatomic) UIScenePresentationContext *currentPresentationContext; // @synthesize currentPresentationContext=_currentPresentationContext;
// - (void).cxx_destruct;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithSceneLayer:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

