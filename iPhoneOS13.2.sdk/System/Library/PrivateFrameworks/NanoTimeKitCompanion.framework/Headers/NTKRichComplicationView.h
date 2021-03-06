//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//




#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, NSDate, UIColor;
@protocol CLKMonochromeFilterProvider, NTKComplicationDisplayObserver;

@interface NTKRichComplicationView : UIView <NTKTemplateComplicationDisplay>
{
    long long _family;
    BOOL _editing;
    BOOL _highlighted;
    NSDate *_timeTravelDate;
    BOOL canUseCurvedText;
    BOOL _paused;
    id _filterProvider;
    id <NTKComplicationDisplayObserver> displayObserver;
    CLKComplicationTemplate *_template;
    CLKDevice *_device;
    UIColor *_foregroundColor;
    UIColor *_templateBackgroundColor;
}

+ (BOOL)handlesComplicationTemplate:(id)arg1;
@property(retain, nonatomic) UIColor *templateBackgroundColor; // @synthesize templateBackgroundColor=_templateBackgroundColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) long long family; // @synthesize family=_family;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) CLKComplicationTemplate *template; // @synthesize template=_template;
@property(nonatomic) BOOL canUseCurvedText; // @synthesize canUseCurvedText;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
@property(nonatomic) __weak id filterProvider; // @synthesize filterProvider=_filterProvider;
// - (void).cxx_destruct;
- (BOOL)viewShouldIgnoreTwoPieceImage:(id)arg1;
- (id)interpolatedColorForView:(id)arg1;
- (id)colorForView:(id)arg1 accented:(BOOL)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2;
- (void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;
- (void)_editingDidEnd;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2;
- (void)_enumerateQuadViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (NSUInteger)timelineAnimationFadeTypeOverride;
@property(readonly, nonatomic) NSDate *timeTravelDate;
@property(readonly, nonatomic) NSDate *complicationDate;
- (void)setEditing:(BOOL)arg1;
- (id)complicationTemplate;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2;
- (void)_setWhistlerAnalogEditingAlphaTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;
- (void)setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (id)initWithFamily:(long long)arg1;

@end

