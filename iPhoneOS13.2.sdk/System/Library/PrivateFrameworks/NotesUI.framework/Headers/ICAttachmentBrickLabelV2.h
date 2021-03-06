//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSAttributedString, NSString, UIColor;

@interface ICAttachmentBrickLabelV2 : UILabel
{
    BOOL _vibrant;
    BOOL _disableVibrancy;
    UIColor _defaultTextColor;
}

@property(retain, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(nonatomic) BOOL disableVibrancy; // @synthesize disableVibrancy=_disableVibrancy;
@property(nonatomic) BOOL vibrant; // @synthesize vibrant=_vibrant;
// - (void).cxx_destruct;
@property(retain, nonatomic) NSString *ic_stringValue;
@property(retain, nonatomic) NSAttributedString *ic_attributedStringValue;
- (void)setTextColor:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)allowsVibrancy;

@end

