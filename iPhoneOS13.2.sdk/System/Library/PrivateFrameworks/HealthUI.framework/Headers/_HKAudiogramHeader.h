//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UILabel;

@interface _HKAudiogramHeader : UIStackView
{
    UILabel *_headerTitleView;
    UILabel *_headerValueView;
    UILabel *_headerDateView;
}

@property(readonly, nonatomic) UILabel *headerDateView; // @synthesize headerDateView=_headerDateView;
@property(readonly, nonatomic) UILabel *headerValueView; // @synthesize headerValueView=_headerValueView;
@property(readonly, nonatomic) UILabel *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
// - (void).cxx_destruct;
- (id)_valueLabel;
- (id)_dateLabel;
- (id)_titleLabel;
- (id)initWithFrame:(CGRect)arg1;

@end

