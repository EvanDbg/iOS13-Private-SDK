//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLocale;

@protocol PLMutableDateRangeFormatter <NSObject>
@property(nonatomic) BOOL shouldOmitYear;
@property(retain, nonatomic) NSLocale *locale;
@property(nonatomic) BOOL useLocalDates;
@property(nonatomic) BOOL autoUpdateOnChanges;
- (void)configureForFormatPreset:(NSUInteger)arg1;
@end

