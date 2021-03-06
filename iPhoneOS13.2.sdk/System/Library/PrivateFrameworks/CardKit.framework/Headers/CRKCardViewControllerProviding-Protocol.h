//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIViewController;
@protocol CRCard, CRKCardPresenting, CRKCardSectionViewSourcing, CRKCardViewControlling;

@protocol CRKCardViewControllerProviding <NSObject>

@optional
- (void)presentation:(id <CRKCardPresenting>)arg1 didApplyCardSectionViewSource:(id <CRKCardSectionViewSourcing>)arg2 toCardViewController:(UIViewController<CRKCardViewControlling> *)arg3;
- (NSUInteger)displayPriorityForCard:(id <CRCard>)arg1;
- (UIViewController<CRKCardViewControlling> *)cardViewControllerForCard:(id <CRCard>)arg1;
@end

