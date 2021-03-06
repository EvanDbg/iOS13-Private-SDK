//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsEditableTableCellWithStepper.h>

#import <HomeUI/AXUISettingsEditableTableCellWithStepperDelegate-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>
#import <HomeUI/HUStepperCellProtocol-Protocol.h>

@class NSNumber;
@protocol HUStepperCellDelegate;

@interface HUAccessibilityEditableTableCellWithStepper : AXUISettingsEditableTableCellWithStepper <AXUISettingsEditableTableCellWithStepperDelegate, UITextFieldDelegate, HUStepperCellProtocol, HUDisableableCellProtocol>
{
    BOOL _disabled;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepperValue;
    NSNumber *_stepValue;
    id <HUStepperCellDelegate> _stepperCellDelegate;
}

@property(nonatomic) __weak id <HUStepperCellDelegate> stepperCellDelegate; // @synthesize stepperCellDelegate=_stepperCellDelegate;
@property(copy, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(copy, nonatomic) NSNumber *stepperValue; // @synthesize stepperValue=_stepperValue;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
// - (void).cxx_destruct;
- (id)textFieldValue:(id)arg1;
- (id)stringValueForSpecifier:(id)arg1;
- (double)maximumValueForSpecifier:(id)arg1;
- (double)minimumValueForSpecifier:(id)arg1;
- (double)stepValueForSpecifier:(id)arg1;
- (void)specifier:(id)arg1 setValue:(double)arg2;
- (double)valueForSpecifier:(id)arg1;
- (void)_update;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

