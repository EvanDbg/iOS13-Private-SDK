//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSDate (GKExtensions)
+ (id)_gkFormattedTimeIntervalStringWithStartDate:(id)arg1 endDate:(id)arg2 calendarUnits:(unsigned long long)arg3 style:(long long)arg4;
+ (id)_gkServerTimestamp;
+ (id)_gkDateFromServerTimestamp:(id)arg1;
+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;
- (id)_gkFormattedWhenStringWithOptions:(unsigned long long)arg1;
- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(_Bool)arg2;
- (id)_gkFormattedStringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;
- (id)_gkServerTimestamp;
@end
