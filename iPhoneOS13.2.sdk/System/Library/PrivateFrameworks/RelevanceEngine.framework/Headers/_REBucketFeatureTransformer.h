//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REBucketFeatureTransformer : REFeatureTransformer
{
    NSUInteger _count;
    long long _bitCount;
    NSUInteger _min;
    NSUInteger _max;
}

+ (id)functionName;
@property(nonatomic) NSUInteger max; // @synthesize max=_max;
@property(nonatomic) NSUInteger min; // @synthesize min=_min;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)_validateWithFeatures:(id)arg1;
- (NSUInteger)_createTransformFromValues:(NSUInteger )arg1 count:(NSUInteger)arg2;
- (NSUInteger)_featureCount;
- (long long)_bitCount;
- (NSUInteger)_outputType;
- (void)configureWithInvocation:(id)arg1;
- (void)_updateConfigurationForCount:(NSUInteger)arg1;
- (void)dealloc;
- (id)init;

@end

