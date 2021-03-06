//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <BaseBoardUI/BSUIDateLabel-Protocol.h>

@class NSDate, NSTimer;
@protocol BSUIDateLabelDelegate;

@interface BSUIDefaultDateLabel : UILabel <BSUIDateLabel>
{
    NSDate *_timeZoneRelativeStartDate;
    NSDate *_timeZoneRelativeEndDate;
    BOOL _allDay;
    BOOL _isTimestamp;
    NSDate *_effectiveAllDayStartDate;
    NSDate *_effectiveAllDayLastValidDate;
    NSDate *_effectiveAllDayEndDate;
    BOOL _effectiveAllDay;
    BOOL _isCoalescingUpdates;
    BOOL _needsUpdateFromCoalesce;
    NSTimer *_updateTimer;
    id <BSUIDateLabelDelegate> _delegate;
    long long _labelType;
}

+ (id)_currentCalendar;
@property(readonly, nonatomic) NSDate *timeZoneRelativeStartDate; // @synthesize timeZoneRelativeStartDate=_timeZoneRelativeStartDate;
@property(nonatomic) BOOL isTimestamp; // @synthesize isTimestamp=_isTimestamp;
@property(nonatomic) long long labelType; // @synthesize labelType=_labelType;
@property(nonatomic) __weak id <BSUIDateLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
// - (void).cxx_destruct;
- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)update;
- (void)_forceUpdate;
- (void)updateTextIfNecessary;
- (void)_updateTimerFired:(id)arg1;
- (void)updateTextIfNecessary:(BOOL)arg1;
- (id)constructLabelString;
- (id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(BOOL)arg3 sameDayDates:(BOOL)arg4 eventOngoing:(BOOL)arg5 withCurrentDate:(id)arg6 forStartLabel:(BOOL)arg7;
- (BOOL)isEffectiveAllDay;
- (BOOL)isDateWithinEffectiveAllDayRange:(id)arg1;
- (id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2;
- (void)_updateEffectiveAllDayTimes;
- (void)_resetEffectiveAllDayState:(BOOL)arg1;
- (void)_resetModelProperties;
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setTimeZoneRelativeEndDate:(id)arg1;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)_configureTimer;
- (void)_invalidateTimer;
- (void)prepareForReuse;
- (void)dealloc;
- (id)init;

@end

