//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSMutableDictionary (MTMaterialDescriptionInternal)
- (void)sortFiltersWithOrder:(id)arg1;
- (void)setZoom:(double)arg1 ignoringIdentity:(BOOL)arg2 includingOptimizations:(BOOL)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;
// - (void)setColorMatrix:(struct CAColorMatrix)arg1 ignoringIdentity:(BOOL)arg2 includingOptimizations:(BOOL)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;
- (void)setBrightness:(double)arg1 ignoringIdentity:(BOOL)arg2 includingOptimizations:(BOOL)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;
- (void)setSaturation:(double)arg1 ignoringIdentity:(BOOL)arg2 includingOptimizations:(BOOL)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;
- (void)setAverageColorEnabled:(BOOL)arg1 includingOptimizations:(BOOL)arg2 withAdditionalInfoPromise:(CDUnknownBlockType)arg3;
- (void)setBlurRadius:(double)arg1 ignoringIdentity:(BOOL)arg2 includingOptimizations:(BOOL)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;
- (void)setLuminanceAmount:(double)arg1 values:(id)arg2 ignoringIdentity:(BOOL)arg3 includingOptimizations:(BOOL)arg4 withAdditionalInfoPromise:(CDUnknownBlockType)arg5;
- (void)setTintColor:(id)arg1 includingOptimizations:(BOOL)arg2 withAdditionalInfoPromise:(CDUnknownBlockType)arg3;
- (void)_processAdditionalInfo:(id)arg1 forFilter:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofFilter:(id)arg3;
@end

