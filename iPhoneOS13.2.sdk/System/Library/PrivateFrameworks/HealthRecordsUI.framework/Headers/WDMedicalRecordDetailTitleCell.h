//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordDetailTitleCell : WDMedicalRecordGroupableCell
{
    UILabel *_titleLabel;
    UILabel *_dateSubtitleLabel;
}

+ (double)_subtitleLabelLastBaselineToBottom;
+ (double)_subtitleLabelTopToFirstBaseline;
+ (id)_subtitleLabelFont;
+ (double)_titleLabelTopToFirstBaseline;
+ (id)_titleLabelFont;
@property(retain, nonatomic) UILabel *dateSubtitleLabel; // @synthesize dateSubtitleLabel=_dateSubtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
@property(copy, nonatomic) NSString *dateSubtitle;
@property(copy, nonatomic) NSString *title;
- (void)setupSubviews;

@end

