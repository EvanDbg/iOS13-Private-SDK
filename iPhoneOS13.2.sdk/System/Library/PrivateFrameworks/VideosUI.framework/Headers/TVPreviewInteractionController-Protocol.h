//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IKViewElement, NSIndexPath, UICollectionView;

@protocol TVPreviewInteractionController <NSObject>
- (void)dismissInteractionView;
- (void)updatePresentingElement:(IKViewElement *)arg1;
- (BOOL)collectionView:(UICollectionView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
@end

