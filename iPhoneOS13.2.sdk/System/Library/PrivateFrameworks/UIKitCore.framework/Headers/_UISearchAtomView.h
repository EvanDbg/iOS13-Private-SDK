//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UIAtomTextViewAtomLayout-Protocol.h>

@class NSArray, NSLayoutConstraint, UIColor, UIFont, UIImageView, UILabel, _UISearchAtomBackgroundView;

__attribute__((visibility("hidden")))
@interface _UISearchAtomView : UIView <_UIAtomTextViewAtomLayout>
{
    struct {
        unsigned int enabled:1;
    } _flags;
    UIColor *_atomBackgroundColor;
    UILabel *_textLabel;
    UIImageView *_leadingImage;
    _UISearchAtomBackgroundView *_backgroundView;
    NSArray *_defaultConstraints;
    NSLayoutConstraint *_imageBaselineConstraint;
    NSLayoutConstraint *_imageCenterYConstraint;
    NSArray *_withImageConstraints;
    NSArray *_withoutImageConstraints;
}

+ (id)defaultAtomBackgroundColor;
+ (BOOL)requiresConstraintBasedLayout;
@property(copy, nonatomic) NSArray *withoutImageConstraints; // @synthesize withoutImageConstraints=_withoutImageConstraints;
@property(copy, nonatomic) NSArray *withImageConstraints; // @synthesize withImageConstraints=_withImageConstraints;
@property(retain, nonatomic) NSLayoutConstraint *imageCenterYConstraint; // @synthesize imageCenterYConstraint=_imageCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageBaselineConstraint; // @synthesize imageBaselineConstraint=_imageBaselineConstraint;
@property(copy, nonatomic) NSArray *defaultConstraints; // @synthesize defaultConstraints=_defaultConstraints;
@property(retain, nonatomic) _UISearchAtomBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) UIImageView *leadingImage; // @synthesize leadingImage=_leadingImage;
@property(retain) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIColor *atomBackgroundColor; // @synthesize atomBackgroundColor=_atomBackgroundColor;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CGRect selectionBounds;
- (void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;
@property(nonatomic) long long selectionStyle;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tintColorDidChange;
- (id)viewForLastBaselineLayout;
- (void)_updateColors;
- (void)updateConstraints;
@property(retain, nonatomic) UIFont *atomFont;
- (double)_bottomMargin;
- (double)_topToBaselineDelta;
- (id)_font;
- (id)initWithFrame:(CGRect)arg1;

@end

