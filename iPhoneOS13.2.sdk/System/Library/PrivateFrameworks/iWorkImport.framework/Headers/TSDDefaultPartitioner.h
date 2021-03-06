//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDLayoutChangeObserver.h>

#import <iWorkImport/TSDCanvasDelegate-Protocol.h>
#import <iWorkImport/TSDPartitioner-Protocol.h>

@class TSDCanvas, TSDDrawableInfo, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSDDefaultPartitioner : TSDLayoutChangeObserver <TSDPartitioner, TSDCanvasDelegate>
{
    TSDDrawableInfo *mInfo;
    TSDCanvas *mCanvas;
    TSUPointerKeyDictionary *mMainRepsByCanvas;
    TSUPointerKeyDictionary *mCachedImagesByCanvas;
    TSUPointerKeyDictionary *mPartialRepsByCanvas;
    BOOL mPaginateRightToLeft;
}

@property(readonly, nonatomic) BOOL paginateRightToLeft; // @synthesize paginateRightToLeft=mPaginateRightToLeft;
- (void)didProcessAllChanges;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)i_layoutUnregistered:(id)arg1;
- (void)i_layoutRegistered:(id)arg1;
- (id)p_childRepForRep:(id)arg1 toNotifyForInfo:(id)arg2;
- (id)p_repsForInfo:(id)arg1;
- (id)p_layoutsForInfo:(id)arg1;
- (NSUInteger)p_edgesForHintBounds:(CGRect)arg1;
- (id)p_nextHintForSize:(CGSize)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3;
- (id)p_firstHintForSize:(CGSize)arg1;
- (void)p_teardownLayouts;
- (void)p_generateLayouts;
- (void)i_unregisterPartialRep:(id)arg1;
- (void)i_registerPartialRep:(id)arg1;
- (void)i_removeCachedImageForCanvas:(id)arg1;
- (void)i_setCachedImage:(CGImageRef)arg1 forCanvas:(id)arg2;
- (CGImageRef)i_cachedImageForCanvas:(id)arg1;
- (id)i_repForCanvas:(id)arg1;
- (id)i_layout;
- (id)documentRoot;
- (void)setLayoutPartititionsRightToLeft:(BOOL)arg1 contentPartitionsRightToLeft:(BOOL)arg2;
- (void)reset;
- (id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL )arg5;
- (id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL )arg5;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4;
- (id)hintForLayout:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

