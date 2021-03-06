//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ARUIRingsView, UIImageView, UILabel, UIView;

@interface FIUIWorkoutSimpleCompletionRingCell : UITableViewCell
{
    ARUIRingsView *_ringsView;
    UIImageView *_ringImageView;
    UIImageView *_iconImageView;
    UIView *_lineView;
    UILabel *_typeLabel;
}

+ (double)preferredHeightForWorkout:(id)arg1 fittingWidth:(double)arg2;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *ringImageView; // @synthesize ringImageView=_ringImageView;
@property(retain, nonatomic) ARUIRingsView *ringsView; // @synthesize ringsView=_ringsView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithWorkout:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

