//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, TSDMovieInfo;
@protocol TSKMediaPlayerController;

@protocol KNAnimationMovieHost <NSObject>
@property(readonly, nonatomic) NSObject<TSKMediaPlayerController> *playerController;
@property(readonly, nonatomic) TSDMovieInfo *movieInfo;
- (void)applyMovieControl:(long long)arg1;
@end

