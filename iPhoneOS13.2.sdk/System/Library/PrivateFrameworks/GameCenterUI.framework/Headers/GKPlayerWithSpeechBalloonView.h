//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKDashboardPlayerPhotoView, GKPlayer, GKSpeechBalloonBackgroundView, NSArray, NSString, UITextView;

@interface GKPlayerWithSpeechBalloonView : UIView
{
    UITextView *_speechTextView;
    GKDashboardPlayerPhotoView *_photoView;
    GKSpeechBalloonBackgroundView *_balloonView;
    NSArray *_replaceableConstraints;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (id)instantiatePhotoContainer;
@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property(retain, nonatomic) GKSpeechBalloonBackgroundView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) GKDashboardPlayerPhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) UITextView *speechTextView; // @synthesize speechTextView=_speechTextView;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(nonatomic) unsigned char tipDirection;
@property(retain, nonatomic) NSString *speechText;
- (void)_updateSpeechText:(id)arg1;
@property(nonatomic) unsigned char drawStyle;
@property(retain, nonatomic) GKPlayer *player;
- (void)updateConstraints;
- (id)metrics;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(CGRect)arg1;

@end

