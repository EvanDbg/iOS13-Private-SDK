//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class HKQuantityType, NSArray, NSObject;
@protocol OS_dispatch_group;

@interface WFQuantityUnitPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    HKQuantityType *_quantityType;
    NSObject<OS_dispatch_group> *_possibleStateLoadingGroup;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_group> *possibleStateLoadingGroup; // @synthesize possibleStateLoadingGroup=_possibleStateLoadingGroup;
@property(retain, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
// - (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)updatePossibleStates;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

