//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAShapeLayer, NSString, UIImageView, UIView;
@protocol WFVariableConfigurationCellSizingDelegate;

@interface WFVariableConfigurationCell : UITableViewCell
{
    BOOL _showsSeparator;
    BOOL _roundsCorners;
    NSString *_titleText;
    NSString *_valueText;
    NSUInteger _roundedCorners;
    NSUInteger _accessory;
    id <WFVariableConfigurationCellSizingDelegate> _sizingDelegate;
    UIImageView *_disclosureImageView;
    CAShapeLayer *_maskLayer;
    UIView *_separatorView;
}

+ (long long)cellStyle;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(readonly, nonatomic) UIImageView *disclosureImageView; // @synthesize disclosureImageView=_disclosureImageView;
@property(nonatomic) __weak id <WFVariableConfigurationCellSizingDelegate> sizingDelegate; // @synthesize sizingDelegate=_sizingDelegate;
@property(nonatomic) NSUInteger accessory; // @synthesize accessory=_accessory;
@property(nonatomic) NSUInteger roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(nonatomic) BOOL roundsCorners; // @synthesize roundsCorners=_roundsCorners;
@property(nonatomic) BOOL showsSeparator; // @synthesize showsSeparator=_showsSeparator;
@property(copy, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
// - (void).cxx_destruct;
- (void)updateMask;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

