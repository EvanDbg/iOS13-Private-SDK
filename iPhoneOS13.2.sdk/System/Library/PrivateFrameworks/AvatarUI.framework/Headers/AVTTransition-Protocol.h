//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol AVTTransitionModel;

@protocol AVTTransition <NSObject>
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ setupHandler;
@property(readonly, nonatomic) id <AVTTransitionModel> model;
@property(nonatomic) BOOL animated;
@property(nonatomic) long long state;
- (void)cancel;
- (void)start;
@end

