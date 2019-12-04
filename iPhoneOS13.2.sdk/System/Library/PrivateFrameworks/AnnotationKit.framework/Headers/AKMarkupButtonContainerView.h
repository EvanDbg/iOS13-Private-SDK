//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage;

@interface AKMarkupButtonContainerView : UIView
{
    _Bool _selected;
    UIButton *_button;
    UIImage *_templateImage;
    UIImage *_colorizedImage;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIImage *colorizedImage; // @synthesize colorizedImage=_colorizedImage;
@property(retain, nonatomic) UIImage *templateImage; // @synthesize templateImage=_templateImage;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (struct CGSize)_buttonSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateForMiniBarState:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
