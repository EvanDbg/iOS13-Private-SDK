//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface PKPeerPaymentBankAccountDetailCell : UITableViewCell
{
    BOOL _shouldDrawSeperator;
    BOOL _shouldDrawFullWidthSeperator;
    double _minimumTextLabelWidth;
}

@property(nonatomic) double minimumTextLabelWidth; // @synthesize minimumTextLabelWidth=_minimumTextLabelWidth;
@property(nonatomic) BOOL shouldDrawFullWidthSeperator; // @synthesize shouldDrawFullWidthSeperator=_shouldDrawFullWidthSeperator;
@property(nonatomic) BOOL shouldDrawSeperator; // @synthesize shouldDrawSeperator=_shouldDrawSeperator;
- (CGRect)_separatorFrame;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

