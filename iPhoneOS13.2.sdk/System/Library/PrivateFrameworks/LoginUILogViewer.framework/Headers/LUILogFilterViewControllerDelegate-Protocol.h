//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class LUILogFilterViewController, NSArray, NSPredicate;

@protocol LUILogFilterViewControllerDelegate <NSObject>
- (BOOL)logFilterViewControllerShouldAllowTextEditing:(LUILogFilterViewController *)arg1;
- (void)logFilterViewControllerApplyButtonTapped:(LUILogFilterViewController *)arg1;
- (NSArray *)currentPredicates:(LUILogFilterViewController *)arg1;
- (void)logFilterViewController:(LUILogFilterViewController *)arg1 didDeletePredicate:(NSPredicate *)arg2;
- (void)logFilterViewController:(LUILogFilterViewController *)arg1 didAddPredicates:(NSArray *)arg2;
@end

