//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SKUIGiftConfiguration, SKUIGiftConfirmLabeledValue, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftConfirmView : UIView
{
    SKUIGiftConfirmLabeledValue *_amountView;
    UILabel *_chargeDisclaimerLabel;
    UILabel *_confirmYourOrderLabel;
    SKUIGiftConfirmLabeledValue *_senderView;
    SKUIGiftConfiguration *_giftConfiguration;
    SKUIGiftConfirmLabeledValue *_itemView;
    SKUIGiftConfirmLabeledValue *_messageView;
    SKUIGiftConfirmLabeledValue *_recipientsView;
    UIView *_rule1;
    UIView *_rule2;
    UIView *_rule3;
    UIView *_rule4;
    UIView *_rule5;
    UIView *_rule6;
    SKUIGiftConfirmLabeledValue *_fromView;
    SKUIGiftConfirmLabeledValue *_sendOnView;
    UIButton *_termsButton;
    SKUIGiftConfirmLabeledValue *_themeNameView;
    UILabel *_totalLabel;
}

- (id)_termsButton;
- (id)_newLightLabelWithSize:(double)arg1 alpha:(double)arg2;
- (id)_newBoldLabelWithSize:(double)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIButton *termsButton;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;

@end
