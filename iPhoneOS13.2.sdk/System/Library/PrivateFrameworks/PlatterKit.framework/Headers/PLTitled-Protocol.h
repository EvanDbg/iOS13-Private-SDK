//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIButton;

@protocol PLTitled <NSObject, PLContentSizeCategoryAdjusting>
@property(readonly, nonatomic) UIButton *utilityButton;
@property(readonly, nonatomic) NSArray *iconButtons;
@property(nonatomic) long long dateFormatStyle;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *icons;
@end

