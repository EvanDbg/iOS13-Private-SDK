//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView;

@protocol CRKAnimationCoordinating <NSObject>
@property(nonatomic) double duration;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion;
@property(copy, nonatomic) id /* CDUnknownBlockType */ animations;
@property(copy, nonatomic) id /* CDUnknownBlockType */ finalSetup;
@property(copy, nonatomic) id /* CDUnknownBlockType */ initialSetup;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic, getter=isAnimated) BOOL animated;
@end

