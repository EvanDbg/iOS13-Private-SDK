//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, TUVideoEffect, UIImage;

@protocol TUVideoEffectsProvider <NSObject>
@property(readonly, nonatomic) NSArray *availableVideoEffects;
@property(retain, nonatomic) TUVideoEffect *currentVideoEffect;
- (UIImage *)thumbnailImageForVideoEffectName:(NSString *)arg1;
@end

