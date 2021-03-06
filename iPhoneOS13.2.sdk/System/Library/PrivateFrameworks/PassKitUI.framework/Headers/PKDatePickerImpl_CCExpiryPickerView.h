//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PassKitUI/PKDatePickerInternalImplementationProtocol-Protocol.h>

@class NSCalendar, NSDate, NSDateFormatter, NSLocale, NSNumber, UIFont;

@interface PKDatePickerImpl_CCExpiryPickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSUInteger _calendarUnit[2];
    NSRange * _possibleRange[2];
    double _width[2];
    NSDateFormatter *_dateFormatter[2];
    NSNumber *_useDoubleMonthStyle;
    NSCalendar *_calendar;
    NSLocale *_locale;
    UIFont *_font;
    id _changeTarget;
    SEL _changeAction;
}

// - (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (double)_widthForComponent:(long long)arg1;
- (id)_stringForComponent:(long long)arg1 index:(NSUInteger)arg2;
- (id)_dateForComponent:(long long)arg1 index:(NSUInteger)arg2;
- (NSUInteger)_defaultIndexForComponent:(long long)arg1;
- (long long)_numberOfItemsForComponent:(long long)arg1;
- (double)_calculateWidthForComponent:(long long)arg1 usingFont:(id)arg2;
- (id)_dateWithCalendarUnit:(NSUInteger)arg1 value:(long long)arg2;
- (BOOL)_useDoubleMonthStyle;
- (id)_dateFormatForCalendarUnit:(NSUInteger)arg1;
- (void)prepareToDie;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) NSDate *date;
- (id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 locale:(id)arg5 calendar:(id)arg6;

@end

