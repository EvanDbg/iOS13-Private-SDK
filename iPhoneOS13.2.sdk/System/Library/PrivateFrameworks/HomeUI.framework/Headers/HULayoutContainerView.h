//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface HULayoutContainerView : UIView
{
    UIView *_contentView;
    id /* CDUnknownBlockType */ _layoutBlock;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ layoutBlock; // @synthesize layoutBlock=_layoutBlock;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (CGSize)intrinsicContentSize;
- (id)initWithContentView:(id)arg1 layoutBlock:(CDUnknownBlockType)arg2;

@end

