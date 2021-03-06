//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPTextHostLayout.h>

#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPLayoutParent-Protocol.h>
#import <iWorkImport/TSWPStorageObserver-Protocol.h>

@class NSMutableDictionary, TSTLayoutHint, TSTLayoutSpaceBundle, TSTMasterLayout, TSTTableInfo, TSWPLayout, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSTLayout : TSWPTextHostLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver>
{
    TSTMasterLayout *mMasterLayout;
    TSTLayoutHint *mLayoutHint;
    CGRect mCanvasVisibleRect;
    CGRect mCanvasSafeRect;
    CGRect mPreviousVisibleStrokeFrame;
    BOOL mProcessChangesFiltering;
    BOOL mTabsVisible;
    BOOL mTableNameVisibilityIsValid;
    BOOL mTableNameVisible;
    BOOL mNewCanvasRevealedHorizontally;
    BOOL mNewCanvasRevealedVertically;
    BOOL mLayoutDirectionIsLeftToRight;
    TSTLayoutSpaceBundle *mSpaceBundle;
    struct {
        double tableNameHeight;
        CGSize scaleToFitParent;
        CGSize scaleToFitEnclosingTextColumn;
    } mCached;
    CGRect mRenderingFrameForLayoutGeometryFromInfo;
    TSWPLayout *mContainedTextEditingLayout;
    NSMutableDictionary *mAttachmentCellLayouts;
    UIEdgeInsets mCachedPaddingForEditingCell;
    CGRect mComputedEditingCellContentFrame;
    int mCachedVerticalAlignmentForEditingCell;
    CGSize mAdjustableTableSize;
    CGSize mFixedTableSize;
    CGSize mCapturedStrokeFrameSizeForInline;
//     struct TSUCellRect mEditingSpillingTextRange;
//     struct TSUCellRect mPrevEditingSpillingTextRange;
    int mContainedTextEditorParagraphAlignment;
    BOOL mContainedTextEditorTextWraps;
    BOOL mRemovingContainedTextEditorLayout;
    BOOL mContainedTextEditorSpills;
    CGSize mSpillingTextSize;
    int mCoordinatesChangedMaskForChrome;
    BOOL mShouldUpdateAttachmentChildren;
    NSUInteger mPageCount;
    NSUInteger mPageNumber;
}

@property(nonatomic) BOOL processChangesFiltering; // @synthesize processChangesFiltering=mProcessChangesFiltering;
@property(retain, nonatomic) TSTLayoutHint *layoutHint; // @synthesize layoutHint=mLayoutHint;
@property(retain, nonatomic) TSTMasterLayout *masterLayout; // @synthesize masterLayout=mMasterLayout;
@property(readonly, nonatomic) BOOL containedTextEditorSpills; // @synthesize containedTextEditorSpills=mContainedTextEditorSpills;
@property(readonly, nonatomic) BOOL layoutDirectionIsLeftToRight; // @synthesize layoutDirectionIsLeftToRight=mLayoutDirectionIsLeftToRight;
// @property(nonatomic) struct TSUCellRect prevEditingSpillingTextRange; // @synthesize prevEditingSpillingTextRange=mPrevEditingSpillingTextRange;
// @property(readonly, nonatomic) struct TSUCellRect editingSpillingTextRange; // @synthesize editingSpillingTextRange=mEditingSpillingTextRange;
@property(retain, nonatomic) TSTLayoutSpaceBundle *spaceBundle; // @synthesize spaceBundle=mSpaceBundle;
@property(readonly, nonatomic) UIEdgeInsets paddingForEditingCell; // @synthesize paddingForEditingCell=mCachedPaddingForEditingCell;
@property(retain, nonatomic) TSWPLayout *containedTextEditingLayout; // @synthesize containedTextEditingLayout=mContainedTextEditingLayout;
@property(nonatomic) BOOL newCanvasRevealedVertically; // @synthesize newCanvasRevealedVertically=mNewCanvasRevealedVertically;
@property(nonatomic) BOOL newCanvasRevealedHorizontally; // @synthesize newCanvasRevealedHorizontally=mNewCanvasRevealedHorizontally;
@property(readonly, nonatomic) NSUInteger pageCount;
@property(readonly, nonatomic) NSUInteger pageNumber;
- (void)validatePageNumberCount;
- (BOOL)p_getLayoutDirectionLeftToRight;
- (int)p_defaultAlignmentForTableWritingDirection;
- (int)reapCoordinatesChangedMaskForChrome;
- (CGSize)initialTextSize;
- (CGRect)p_maskRectForRichTextLayout:(id)arg1;
- (CGRect)p_maskRectForTextEditingLayout:(id)arg1;
- (CGRect)maskRectForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (id)dependentLayouts;
// - (CGRect)p_computeSpillingTextFrameForEditingLayout:(id)arg1 textSize:(CGSize)arg2 editingSpillRange:(struct TSUCellRect )arg3;
- (CGRect)p_autosizedFrameForRichTextLayout:(id)arg1 textSize:(CGSize)arg2;
- (CGRect)p_autosizedFrameForTextEditingLayout:(id)arg1 textSize:(CGSize)arg2;
- (CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2;
// - (BOOL)p_layoutWhollyContainsGridRange:(CDStruct_58eae27c)arg1;
// - (CGSize)p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(CDStruct_58eae27c)arg1;
- (CGRect)p_nonAutosizedFrameForRichTextLayout:(id)arg1;
- (CGRect)p_nonAutosizedFrameForTextEditingLayout:(id)arg1;
- (CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (double)maxAutoGrowLineWidthForTextLayout:(id)arg1;
- (NSUInteger)autosizeFlagsForTextLayout:(id)arg1;
- (int)naturalAlignmentForTextLayout:(id)arg1;
// - (struct TSUCellCoord)p_cellIDForWPLayout:(id)arg1;
// - (int)naturalAlignmentForCellID:(struct TSUCellCoord)arg1;
@property(readonly, nonatomic) CGRect computedEditingCellContentFrame;
// - (CGRect)p_textFrameForWrappingCell:(struct TSUCellCoord)arg1 defaultRowHeight:(BOOL )arg2;
- (CGRect)adjustRect:(CGRect)arg1 forScrollingToSelectionPath:(id)arg2 forZoom:(BOOL)arg3;
- (BOOL)textIsVertical;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (double)positionForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double )arg4 outGap:(double )arg5;
- (double)gapForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(NSUInteger)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
@property(readonly, nonatomic) NSUInteger columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (CGSize)adjustedInsetsForTarget:(id)arg1;
- (BOOL)canvasShouldScrollForSelectionPath:(id)arg1;
- (BOOL)orderedBefore:(id)arg1;
- (CGPoint)activityLineUnscaledEndPointForSearchReference:(id)arg1;
- (CGPoint)calculatePointFromSearchReference:(id)arg1;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (void)removeAttachmentCellLayouts;
- (void)removeContainedTextEditingLayout;
- (void)updateChildrenFromInfo;
- (id)children;
- (CGSize)maximumFrameSizeForChild:(id)arg1;
- (void)p_prepareAttachmentCells;
// - (void)setupContainedTextEditingLayout:(struct TSUCellCoord)arg1;
// - (void)p_updateCachedStyleInformationFromCellID:(struct TSUCellCoord)arg1;
// - (struct TSUCellRect)p_spillRangeForMaskingRichTextLayout:(id)arg1;
// - (struct TSUCellRect)p_spillRangeToRightForCellID:(struct TSUCellCoord)arg1;
// - (struct TSUCellRect)p_maximumSpillRangeForCellID:(struct TSUCellCoord)arg1;
- (BOOL)isBeingManipulated;
- (void)validateTableNameVisibility;
- (void)invalidateTableNameVisibility;
- (void)bezierPathsForCellRegion:(id)arg1 selectionMask:(unsigned int)arg2 transform:(CGAffineTransform)arg3 viewScale:(double)arg4 inset:(double)arg5 clipToVisibleRect:(BOOL)arg6 block:(CDUnknownBlockType)arg7;
- (void)invalidatePosition;
- (void)invalidateSize;
- (void)invalidate;
- (void)invalidateLayoutSpaceCoordinatesAfterRow:(unsigned int)arg1;
- (void)invalidateLayoutSpaceCoordinatesAfterColumn:(unsigned short)arg1;
- (void)invalidateLayoutSpaceCoordinates;
- (void)invalidateLayoutSpaceTableOffsets;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)setNeedsDisplay;
- (void)validate;
- (BOOL)isStrokeEditing;
- (BOOL)suppressFrozenHeadersForEditing;
- (BOOL)inFindReplaceMode;
- (BOOL)inPrintPreviewMode;
- (id)inspectorGeometry;
- (CGRect)alignmentFrame;
- (int)wrapFitType;
- (id)initialInfoGeometry;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (CGPoint)capturedInfoPositionForAttachment;
- (BOOL)isDraggable;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canRotateChildLayout:(id)arg1;
- (BOOL)supportsRotation;
- (BOOL)descendersCannotClip;
- (void)offsetGeometryBy:(CGPoint)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 layoutHint:(id)arg2;
@property(readonly, nonatomic) TSTTableInfo *tableModel;
@property(readonly, nonatomic) TSTTableInfo *tableInfo;
@property(nonatomic) CGSize scaleToFit;
// - (void)iterateCellsInRange:(struct TSUCellRect)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)iterateCellsAndTerminateWithIterator:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
// - (id)cellIteratorWithRange:(struct TSUCellRect)arg1 flags:(NSUInteger)arg2 searchFlags:(NSUInteger)arg3;

@end

