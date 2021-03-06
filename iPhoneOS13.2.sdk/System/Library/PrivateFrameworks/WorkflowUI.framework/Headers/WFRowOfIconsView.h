//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray, UIStackView;

@interface WFRowOfIconsView : UIView
{
    NSUInteger _maxNumberOfIcons;
    UIStackView *_stackView;
    NSMutableArray *_iconViews;
    double _height;
}

@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) NSMutableArray *iconViews; // @synthesize iconViews=_iconViews;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) NSUInteger maxNumberOfIcons; // @synthesize maxNumberOfIcons=_maxNumberOfIcons;
// - (void).cxx_destruct;
- (void)rebuildSubviewsForItems:(id)arg1;
- (void)setHomeIcons:(id)arg1;
- (void)setIcons:(id)arg1;
- (CGSize)intrinsicContentSize;
- (id)initWithMaxNumberOfIcons:(NSUInteger)arg1 height:(double)arg2;

@end

