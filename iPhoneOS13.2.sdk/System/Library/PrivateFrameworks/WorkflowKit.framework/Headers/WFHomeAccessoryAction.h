//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class HFTriggerActionSetsBuilder;

@interface WFHomeAccessoryAction : WFAction
{
}

+ (id)homeAccessoryActionWithHome:(id)arg1;
+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1;
- (id)homeName;
- (id)localizedAttribution;
- (id)localizedDescriptionSummary;
- (id)localizedName;
- (void)runAsynchronouslyWithInput:(id)arg1;
@property(readonly, nonatomic) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;

@end

