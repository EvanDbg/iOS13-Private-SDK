//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDatePickerMode_Date.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date
{
}

+ (long long)datePickerMode;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(NSUInteger)arg3;
- (id)selectedDateComponents;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (long long)yearForRow:(long long)arg1;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (long long)numberOfRowsForCalendarUnit:(NSUInteger)arg1;

@end

