//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIButton, UIStackView;

@interface LUILogOptionsView : UIView
{
    UIStackView *_buttonStackView;
    UIButton *_tenMinutesLogButton;
    UIButton *_halfHourButton;
    UIButton *_hourButton;
    UIButton *_lastDayButton;
    UIButton *_streamButton;
}

@property(retain, nonatomic) UIButton *streamButton; // @synthesize streamButton=_streamButton;
@property(retain, nonatomic) UIButton *lastDayButton; // @synthesize lastDayButton=_lastDayButton;
@property(retain, nonatomic) UIButton *hourButton; // @synthesize hourButton=_hourButton;
@property(retain, nonatomic) UIButton *halfHourButton; // @synthesize halfHourButton=_halfHourButton;
@property(retain, nonatomic) UIButton *tenMinutesLogButton; // @synthesize tenMinutesLogButton=_tenMinutesLogButton;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
// - (void).cxx_destruct;
- (id)_createButtonWithTitle:(id)arg1;
- (id)_createButtonStackView;
- (void)layoutSubviews;
- (void)_setup;
- (id)initWithFrame:(CGRect)arg1;

@end

