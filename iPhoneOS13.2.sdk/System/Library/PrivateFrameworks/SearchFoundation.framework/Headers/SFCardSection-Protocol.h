//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, SFCard, SFColor, SFUserReportRequest;

@protocol SFCardSection <NSSecureCoding, NSObject>
@property(retain, nonatomic) SFUserReportRequest *userReportRequest;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSArray *commands;
@property(retain, nonatomic) SFCard *nextCard;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(nonatomic) BOOL hideDivider;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

