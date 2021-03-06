//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDCAAnimationContextCache.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSDCAAnimationGroupContextCache : TSDCAAnimationContextCache
{
    NSArray *_animations;
    NSArray *_animationContextCaches;
}

@property(readonly, nonatomic) NSArray *animationContextCaches; // @synthesize animationContextCaches=_animationContextCaches;
@property(readonly, nonatomic) NSArray *animations; // @synthesize animations=_animations;
// - (void).cxx_destruct;
- (double)p_groupTimingFactorAtTime:(double)arg1;
- (id)valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (id)bestAnimationContextCacheForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)initWithAnimation:(id)arg1;

@end

