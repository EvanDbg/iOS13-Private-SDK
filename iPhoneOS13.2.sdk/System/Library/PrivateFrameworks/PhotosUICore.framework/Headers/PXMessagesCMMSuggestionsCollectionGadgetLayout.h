//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetCollectionViewLayout.h>

@interface PXMessagesCMMSuggestionsCollectionGadgetLayout : PXGadgetCollectionViewLayout
{
    long long _numberOfItems;
    long long _numberOfColumns;
    UIEdgeInsets _margins;
    CGSize _itemSize;
    CGSize _interitemSpacing;
    CGSize _contentSize;
    double _itemAspectRatio;
    CGSize _containerSizeOverride;
}

@property(nonatomic) CGSize containerSizeOverride; // @synthesize containerSizeOverride=_containerSizeOverride;
@property(nonatomic) double itemAspectRatio; // @synthesize itemAspectRatio=_itemAspectRatio;
- (void)_fetchItemsInfoForRect:(CGRect)arg1;
- (CGRect)_frameForItemAtIndex:(long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (long long)scrollDirection;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (CGSize)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (void)prepareLayout;
- (id)init;

@end

