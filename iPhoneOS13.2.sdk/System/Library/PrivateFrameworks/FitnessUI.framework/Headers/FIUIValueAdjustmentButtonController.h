//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIUIWorkoutLapLengthIndexTranslator, NSTimer, UIButton;

@interface FIUIValueAdjustmentButtonController : NSObject
{
    NSTimer *_plusMinusActionTimer;
    long long _plusMinusActionRepeatCount;
    BOOL _didUserUpdatevalue;
    double _value;
    double _valueStepIncremement;
    double _minumumStepValueIncrement;
    double _maxValue;
    double _minValue;
    id /* CDUnknownBlockType */ _valueUpdateHandler;
    FIUIWorkoutLapLengthIndexTranslator *_lapLengthIndexTranslator;
    id /* CDUnknownBlockType */ _buttonStateUpdateHandler;
    UIButton *_incrementButton;
    UIButton *_decrementButton;
}

@property(readonly, nonatomic) __weak UIButton *decrementButton; // @synthesize decrementButton=_decrementButton;
@property(readonly, nonatomic) __weak UIButton *incrementButton; // @synthesize incrementButton=_incrementButton;
@property(nonatomic) BOOL didUserUpdatevalue; // @synthesize didUserUpdatevalue=_didUserUpdatevalue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ buttonStateUpdateHandler; // @synthesize buttonStateUpdateHandler=_buttonStateUpdateHandler;
@property(retain, nonatomic) FIUIWorkoutLapLengthIndexTranslator *lapLengthIndexTranslator; // @synthesize lapLengthIndexTranslator=_lapLengthIndexTranslator;
@property(copy, nonatomic) id /* CDUnknownBlockType */ valueUpdateHandler; // @synthesize valueUpdateHandler=_valueUpdateHandler;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minumumStepValueIncrement; // @synthesize minumumStepValueIncrement=_minumumStepValueIncrement;
@property(nonatomic) double valueStepIncremement; // @synthesize valueStepIncremement=_valueStepIncremement;
@property(nonatomic) double value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (void)_updateButton:(id)arg1 forPressedState:(BOOL)arg2;
- (void)_updatePlusMinusButtonStates;
- (void)_notifyValueChanged;
- (void)_incrementRepeatCount;
- (void)_performPlusMinusActionWithIndexTranslationForButton:(id)arg1;
- (void)_performPlusMinusActionWithButton:(id)arg1;
- (void)_plusMinusActionTimerDidFire:(id)arg1;
- (void)_plusMinusButtonTouchCancel:(id)arg1;
- (void)_plusMinusButtonTouchUpInside:(id)arg1;
- (void)_plusMinusButtonTouchDown:(id)arg1;
- (void)setIncrementButton:(id)arg1 decrementButton:(id)arg2;

@end

