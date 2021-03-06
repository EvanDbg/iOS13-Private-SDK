//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardUIServices/SBNumberPadDelegate-Protocol.h>

@class NSArray, SBNumberPadWithDelegate, SBUIButton, UIColor, UIControl;
@protocol SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeNumberPadButton;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate, CAAnimationDelegate>
{
    SBNumberPadWithDelegate *_numberPad;
    UIColor *_customBackgroundColor;
    BOOL _useLightStyle;
    BOOL _visible;
    BOOL _snapshotsDisabled;
    BOOL _showsBackspaceButton;
    BOOL _showsEmergencyCallButton;
    BOOL _showsCancelButton;
    id <SBUIPasscodeLockNumberPadDelegate> _delegate;
    double _ancillaryButtonOffset;
    UIControl<SBUIPasscodeNumberPadButton> *_downButton;
    SBUIButton *_emergencyCallButton;
    SBUIButton *_backspaceButton;
    SBUIButton *_cancelButton;
    UIColor *_reduceTransparencyButtonColor;
}

+ (UIEdgeInsets)_inputButtonCircleSpacing;
+ (CGSize)_inputButtonCircleSize;
+ (id)_buttonForCharacter:(unsigned int)arg1 withLightStyle:(BOOL)arg2;
@property(retain, nonatomic) UIColor *reduceTransparencyButtonColor; // @synthesize reduceTransparencyButtonColor=_reduceTransparencyButtonColor;
@property(readonly, nonatomic) SBUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) SBUIButton *backspaceButton; // @synthesize backspaceButton=_backspaceButton;
@property(readonly, nonatomic) SBUIButton *emergencyCallButton; // @synthesize emergencyCallButton=_emergencyCallButton;
@property(retain, nonatomic) UIControl<SBUIPasscodeNumberPadButton> *downButton; // @synthesize downButton=_downButton;
@property(nonatomic) double ancillaryButtonOffset; // @synthesize ancillaryButtonOffset=_ancillaryButtonOffset;
@property(nonatomic) BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) BOOL showsEmergencyCallButton; // @synthesize showsEmergencyCallButton=_showsEmergencyCallButton;
@property(nonatomic) BOOL showsBackspaceButton; // @synthesize showsBackspaceButton=_showsBackspaceButton;
@property(nonatomic) __weak id <SBUIPasscodeLockNumberPadDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_emergencyCallButtonHit;
- (void)_backspaceButtonHit;
- (void)_cancelButtonHit;
- (void)_configureAdditionalButtons;
- (id)_fontForAncillaryButton;
- (void)_setSnapshotsDisabled:(BOOL)arg1;
- (double)_distanceToTopOfFirstButton;
- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;
@property(readonly, nonatomic) __weak NSArray *buttons;

@end

