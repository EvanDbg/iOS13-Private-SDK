//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SVVideoPlaybackProgressObserving <NSObject>
@property(copy, nonatomic, setter=onReset:) id /* CDUnknownBlockType */ resetBlock;
@property(copy, nonatomic, setter=onProgressChanged:) id /* CDUnknownBlockType */ progressChangedBlock;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double time;
@end

