//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface SKUILinkButton : UIButton
{
    long long _arrowStyle;
}

+ (id)buttonWithArrowStyle:(long long)arg1;
@property(readonly, nonatomic) long long arrowStyle; // @synthesize arrowStyle=_arrowStyle;
- (void)_reloadIcons;
- (double)_linkImagePaddingLeft;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)tintColorDidChange;
- (void)setTitleColor:(id)arg1 forState:(NSUInteger)arg2;
- (id)initWithArrowStyle:(long long)arg1;

@end

