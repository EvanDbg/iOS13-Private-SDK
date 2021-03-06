//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVGridView.h>

#import <TVMLKit/TVRowHosting_Collection-Protocol.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _TVMLGridView : _TVGridView <TVRowHosting_Collection>
{
    BOOL _configureForListTemplate;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) BOOL configureForListTemplate; // @synthesize configureForListTemplate=_configureForListTemplate;
// - (void).cxx_destruct;
- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
- (id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long )arg3;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long )arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;

@end

