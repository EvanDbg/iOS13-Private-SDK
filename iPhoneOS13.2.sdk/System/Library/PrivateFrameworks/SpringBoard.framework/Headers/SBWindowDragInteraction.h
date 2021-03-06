//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIGestureRecognizer;
@protocol SBAppPlatterDragSourceViewProviding;

@interface SBWindowDragInteraction : UIDragInteraction
{
    UIGestureRecognizer *_gestureRecognizer;
    id <SBAppPlatterDragSourceViewProviding> _sourceViewProvider;
    NSString *_sceneIdentifier;
    NSString *_bundleIdentifier;
}

@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(nonatomic) __weak id <SBAppPlatterDragSourceViewProviding> sourceViewProvider; // @synthesize sourceViewProvider=_sourceViewProvider;
@property(readonly, nonatomic) __weak UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
// - (void).cxx_destruct;
- (CGPoint)_locationInView:(id)arg1;
- (id)initWithDelegate:(id)arg1 gestureRecognizer:(id)arg2;

@end

