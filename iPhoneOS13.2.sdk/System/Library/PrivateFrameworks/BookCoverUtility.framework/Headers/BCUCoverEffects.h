//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCULayerRenderer, NSArray;

@interface BCUCoverEffects : NSObject
{
    BCULayerRenderer *_renderer;
    NSArray *_bookFilters;
    NSArray *_seriesFilters;
    NSArray *_templateImageFilters;
}

+ (id)_effectIdentifierForEffectIndex:(NSUInteger)arg1;
+ (id)effectIdentifierForFilterInfo:(id)arg1;
+ (id)effectIdentifierForAsset:(id)arg1 withEnvironment:(id)arg2;
// - (void).cxx_destruct;
- (id)welcomeScreenBookCoverEffectFilters;
- (id)templateImageFilters;
- (id)seriesCoverEffectFilters;
- (id)bookCoverEffectFilters;
- (id)initWithRenderer:(id)arg1;
- (id)bookCoverEffectFilterForEffectIdentifier:(id)arg1;

@end

