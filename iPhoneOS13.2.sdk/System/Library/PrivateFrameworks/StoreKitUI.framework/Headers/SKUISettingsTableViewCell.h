//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUISettingDescriptionView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUISettingsTableViewCell : UITableViewCell
{
    UIEdgeInsets _contentInset;
    UIImageView *_disclosureChevron;
    BOOL _hasDisclosureChevron;
    SKUISettingDescriptionView *_settingDescriptionView;
}

// - (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)prepareForReuse;
@property(readonly, nonatomic) SKUISettingDescriptionView *settingDescriptionView;
- (void)displaySettingDescriptionView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

