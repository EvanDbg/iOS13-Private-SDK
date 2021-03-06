//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineComplicationController.h>


#import <NanoTimeKitCompanion/NTKComplicationTimelineDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class CLKCComplicationDataSource, CLKComplicationTemplate, NSDate, NSMutableSet, NTKComplicationTimeline, NTKTimelineDataOperation;

@interface NTKLocalTimelineComplicationController : NTKTimelineComplicationController <CLKCComplicationDataSourceDelegate, NTKComplicationTimelineDelegate, NTKTimeTravel>
{
    CLKCComplicationDataSource *_dataSource;
    NSDate *_timeTravelDate;
    BOOL _supportsTimeTravelForward;
    BOOL _supportsTimeTravelBackward;
    NSDate *_timelineStartDate;
    NSDate *_timelineEndDate;
    BOOL _hasQueuedAnimation;
    NSUInteger _queuedAnimation;
    NTKComplicationTimeline *_timeline;
    NTKTimelineDataOperation *_currentOperation;
    NSMutableSet *_suspendedLeftBoundaryDates;
    NSMutableSet *_suspendedRightBoundaryDates;
    NSMutableSet *_delayedBlocks;
    CLKComplicationTemplate *_switcherTemplate;
    BOOL _hasBeenLive;
    long long _dataSourceState;
}

+ (BOOL)_acceptsComplicationType:(NSUInteger)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (Class)complicationDataSourceClassForComplication:(id)arg1 family:(long long)arg2 device:(id)arg3;
// - (void).cxx_destruct;
- (void)_updateDimStateForCurrentTimeline;
- (id)lockedTemplate;
- (id)activeDisplayTemplate;
- (id)_currentEntry;
- (Class)richComplicationDisplayViewClass;
- (id)complicationApplicationIdentifier;
- (void)didTouchUpInsideView:(id)arg1;
- (void)didTouchDownInView:(id)arg1;
- (void)performTapAction;
- (BOOL)hasTapAction;
- (void)_startExtendLeftOperationFromDate:(id)arg1;
- (void)_startExtendRightOperationFromDate:(id)arg1;
- (void)_completeExtendLeftOperationWithBoundaryDate:(id)arg1 entries:(id)arg2;
- (void)_completeExtendRightOperationWithBoundaryDate:(id)arg1 entries:(id)arg2;
- (void)_cancelDelayedBlocks;
- (void)_suspendRightBoundaryDate:(id)arg1;
- (void)_suspendLeftBoundaryDate:(id)arg1;
- (void)_startExtendOperationIfNecessaryForWindow:(id)arg1 withDate:(id)arg2 minBuffer:(double)arg3;
- (void)_extendTimelineIfNecessaryAndPossible;
- (id)alwaysOnTemplate;
- (void)_startSetupOperationIfPossibleWithPriority:(long long)arg1;
- (void)_completeSetupOperationWithDirections:(NSUInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 currentEntry:(id)arg4 priority:(long long)arg5;
- (void)entriesDidChangeInTimeline:(id)arg1 withTritiumUpdatePriority:(long long)arg2;
- (void)timeTravelEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)invalidateSwitcherTemplate;
- (void)appendEntries:(id)arg1 withTritiumUpdatePriority:(long long)arg2;
- (void)appendEntries:(id)arg1;
- (void)setTimelineEndDate:(id)arg1;
- (void)setTimelineStartDate:(id)arg1;
- (void)invalidateEntriesWithTritiumUpdatePriority:(long long)arg1;
- (void)invalidateEntries;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)setCurrentTemplate:(id)arg1 reason:(long long)arg2 animation:(NSUInteger)arg3;
- (void)_queueAnimationForNextUpdate:(NSUInteger)arg1;
- (void)_updateCurrentTemplateWithReason:(long long)arg1;
- (void)_updateTimeTravelBoundaries;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (void)addDisplayWrapper:(id)arg1;
- (void)setShowsLockedUI:(BOOL)arg1;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)_updateIsComplicationActive:(BOOL)arg1;
- (void)_applyAnimationMode;
- (void)_requestDataSourceToUpdateToState:(long long)arg1;
- (void)_applyUpdatingMode;
- (void)_applyCachingMode;
- (void)_resetTimelineForCachingChange;
- (void)_deactivate;
- (void)_activate;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end

