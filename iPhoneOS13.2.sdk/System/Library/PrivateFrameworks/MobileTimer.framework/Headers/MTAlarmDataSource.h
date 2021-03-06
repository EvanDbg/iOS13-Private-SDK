//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTAlarm, MTAlarmManager, MTObserverStore, NSMutableArray;

@interface MTAlarmDataSource : NSObject
{
    MTAlarmManager *_alarmManager;
    MTObserverStore *_observers;
    NSMutableArray *_alarms;
    MTAlarm *_sleepAlarm;
}

@property(retain, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property(retain, nonatomic) NSMutableArray *alarms; // @synthesize alarms=_alarms;
@property(retain, nonatomic) MTObserverStore *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
// - (void).cxx_destruct;
- (id)removeAlarm:(id)arg1;
- (id)updateAlarm:(id)arg1;
- (id)addAlarm:(id)arg1;
- (NSUInteger)rowForAlarmWithID:(id)arg1;
- (NSUInteger)rowForAlarm:(id)arg1;
- (id)alarmAtRow:(NSUInteger)arg1;
- (NSUInteger)numberOfAlarms;
- (id)reloadAlarms;
- (void)_stateReset;
- (void)_handleAlarmNotification:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)_registerForNotifications;
- (void)_iterateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)initWithAlarmManager:(id)arg1;

@end

