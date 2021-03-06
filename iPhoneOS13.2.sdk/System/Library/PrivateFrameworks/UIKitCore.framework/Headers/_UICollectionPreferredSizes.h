//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionPreferredSizes-Protocol.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString;
@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionPreferredSizes : NSObject <_UICollectionPreferredSizes, NSCopying>
{
    NSMutableDictionary *_sizes;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_supplementarySizesDict;
    long long _frameOffset;
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryBaseOffsets;
}

@property(retain, nonatomic) id <_UICollectionLayoutAuxillaryOffsets> supplementaryBaseOffsets; // @synthesize supplementaryBaseOffsets=_supplementaryBaseOffsets;
@property(nonatomic) long long frameOffset; // @synthesize frameOffset=_frameOffset;
// - (void).cxx_destruct;
- (id)preferredSizesApplyingFrameOffset:(long long)arg1 supplementaryBaseOffsets:(id)arg2;
- (BOOL)containsSupplementaryOffsets:(id)arg1;
- (void)addPreferredSize:(id)arg1 forSupplementaryWithElementKind:(id)arg2 atIndex:(long long)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, nonatomic) NSSet *elementKinds;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSIndexSet *indexes;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (BOOL)hasSizes;
- (id)init;
- (id)initWithSizes:(id)arg1 indexes:(id)arg2 supplementarySizesDict:(id)arg3 frameOffset:(long long)arg4 supplementaryBaseOffsets:(id)arg5;

@end

