//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTVisualStyling;

@interface _MTVisualStylingVibrancyEffect : UIVibrancyEffect
{
    MTVisualStyling *_visualStyling;
}

@property(readonly, nonatomic, getter=_visualStyling) MTVisualStyling *visualStyling; // @synthesize visualStyling=_visualStyling;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectConfig;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisualStyling:(id)arg1;

@end

