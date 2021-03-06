//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMCameraClip;

@interface HUClipSpacerCollectionViewCell : UICollectionViewCell
{
    BOOL _spansMultipleDays;
    HMCameraClip *_clip;
    HMCameraClip *_previousClip;
}

@property(nonatomic) __weak HMCameraClip *previousClip; // @synthesize previousClip=_previousClip;
@property(nonatomic) __weak HMCameraClip *clip; // @synthesize clip=_clip;
@property(nonatomic) BOOL spansMultipleDays; // @synthesize spansMultipleDays=_spansMultipleDays;
// - (void).cxx_destruct;
- (void)updateWithClip:(id)arg1 previousClip:(id)arg2;
- (void)drawRect:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

