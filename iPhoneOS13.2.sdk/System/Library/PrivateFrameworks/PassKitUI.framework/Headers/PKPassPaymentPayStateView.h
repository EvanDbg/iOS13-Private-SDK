//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PassKitUI/PKGlyphViewDelegate-Protocol.h>

@class PKGlyphView, UILabel;
@protocol PKPassPaymentPayStateViewDelegate;

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate>
{
    long long _style;
    double _glyphViewPadding;
    double _labelTopPadding;
    BOOL _didLayout;
    BOOL _biometricsUnavailableHint;
    BOOL _touchRecognizingHint;
    BOOL _persistentEmulationHint;
    BOOL _accessPass;
    long long _state;
    long long _layoutState;
    PKGlyphView *_glyph;
    UILabel *_label;
    UILabel *_debugLabel;
    double _labelStateBottomInset;
    double _labelAlpha;
    id <PKPassPaymentPayStateViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPassPaymentPayStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL accessPass; // @synthesize accessPass=_accessPass;
@property(nonatomic) BOOL persistentEmulationHint; // @synthesize persistentEmulationHint=_persistentEmulationHint;
@property(nonatomic) BOOL touchRecognizingHint; // @synthesize touchRecognizingHint=_touchRecognizingHint;
@property(nonatomic) BOOL biometricsUnavailableHint; // @synthesize biometricsUnavailableHint=_biometricsUnavailableHint;
@property(nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(nonatomic) double labelStateBottomInset; // @synthesize labelStateBottomInset=_labelStateBottomInset;
@property(readonly, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) PKGlyphView *glyph; // @synthesize glyph=_glyph;
@property(readonly, nonatomic) long long layoutState; // @synthesize layoutState=_layoutState;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (void)glyphView:(id)arg1 revealingCheckmark:(BOOL)arg2;
- (void)_configureLayoutMetrics;
- (id)_attributedTextWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)_attributedTextWithTitle:(id)arg1;
- (id)_textForState:(long long)arg1 textOverride:(id)arg2;
- (BOOL)_canEmphasizeState:(long long)arg1;
- (void)updateDebugLabel:(id)arg1 isErrorState:(BOOL)arg2;
- (void)emphasizeStateIfPossible:(long long)arg1 withOverrideText:(id)arg2;
- (BOOL)labelWillChangeForState:(long long)arg1 withOverrideText:(id)arg2;
- (void)_applyStatePreservingGlyphState:(BOOL)arg1 overridingText:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setState:(long long)arg1 animated:(BOOL)arg2 withOverrideText:(id)arg3 preserveGlyphState:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setState:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_canPreserveGlyphForState:(long long)arg1;
- (long long)_defaultGlyphStateForState:(long long)arg1;
- (void)layoutSubviews;
- (void)_resolveLayout;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@end

