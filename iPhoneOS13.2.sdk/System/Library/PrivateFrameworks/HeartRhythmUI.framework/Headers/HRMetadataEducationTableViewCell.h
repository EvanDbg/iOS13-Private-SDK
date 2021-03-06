//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLayoutConstraint, NSString, UILabel;

@interface HRMetadataEducationTableViewCell : UITableViewCell
{
    NSString *_titleText;
    NSString *_bodyText;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    NSLayoutConstraint *_topToTitleBaselineConstraint;
    NSLayoutConstraint *_titleBaselineToBodyBaselineConstraint;
    NSLayoutConstraint *_bodyBottomAnchorToBottomConstraint;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *bodyBottomAnchorToBottomConstraint; // @synthesize bodyBottomAnchorToBottomConstraint=_bodyBottomAnchorToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineToBodyBaselineConstraint; // @synthesize titleBaselineToBodyBaselineConstraint=_titleBaselineToBodyBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topToTitleBaselineConstraint; // @synthesize topToTitleBaselineConstraint=_topToTitleBaselineConstraint;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
// - (void).cxx_destruct;
- (double)_bodyBottomAnchorToBottom;
- (double)_titleBaselineToBodyBaseline;
- (double)_topToTitleBaseline;
- (id)_bodyLabelFont;
- (id)_titleLabelFont;
- (id)_bodyLabelFontTextStyle;
- (id)_titleLabelFontTextStyle;
- (void)_updateForCurrentSizeCategory;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

