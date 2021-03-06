//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSLayoutConstraint, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDAppCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    NSUInteger _displayMode;
    UIImageView *_icon;
    NSLayoutConstraint *_iconTopConstraint;
    NSLayoutConstraint *_priceLabelToBottomConstraint;
    NSDictionary *_storeData;
}

+ (double)_priceToBottomHeightWithDisplayMode:(NSUInteger)arg1;
+ (double)_topToIconHeightWithDisplayMode:(NSUInteger)arg1;
+ (double)heightWithIconSize:(CGSize)arg1 displayMode:(NSUInteger)arg2;
+ (id)reuseIdentifier;
@property(retain, nonatomic) NSDictionary *storeData; // @synthesize storeData=_storeData;
// - (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (void)setDisplayMode:(NSUInteger)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;

@end

