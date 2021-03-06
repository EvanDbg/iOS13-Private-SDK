//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSTStrokeLayerEnumerating-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTStrokeLayer : TSPObject <NSCopying, NSMutableCopying, TSTStrokeLayerEnumerating>
{
//    struct vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun>> _strokeRuns;
    unsigned int _columnOrRowIndex;
}

+ (id)strokeLayer;
@property(nonatomic) unsigned int columnOrRowIndex; // @synthesize columnOrRowIndex=_columnOrRowIndex;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_flattenStrokeOrder;
//  (void)p_removeRange:(struct TSTSimpleRange)arg1;
//  (void)p_insertSpaceAtRange:(struct TSTSimpleRange)arg1;
- (void)p_mergeStrokeRunsAtPosition:(NSUInteger)arg1;
//  (void)p_invalidateRange:(struct TSTSimpleRange)arg1;
- (void)p_invalidate;
//  (void)p_setStroke:(id)arg1 inRange:(struct TSTSimpleRange)arg2 order:(int)arg3;
//  (void)p_appendStroke:(id)arg1 inRange:(struct TSTSimpleRange)arg2 order:(int)arg3;
- (void)replaceStrokeLayerAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (id)strokeLayerAtIndex:(NSUInteger)arg1;
@property(readonly) NSUInteger strokeLayerCount;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
//  (id)strokeLayerModifiedByRemovingRangeAt:(struct TSTSimpleRange)arg1;
//  (id)strokeLayerModifiedByInsertingSpaceAt:(struct TSTSimpleRange)arg1;
//  (void)enumerateStrokesInRange:(struct TSTSimpleRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStrokesUsingBlock:(CDUnknownBlockType)arg1;
- (id)nextStrokeAndRange:(id)arg1;
- (id)findStrokeAndRangeAtIndex:(long long)arg1;
- (long long)startingIndex;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)initWithContext:(id)arg1 columnOrRowIndex:(unsigned int)arg2;

@end

