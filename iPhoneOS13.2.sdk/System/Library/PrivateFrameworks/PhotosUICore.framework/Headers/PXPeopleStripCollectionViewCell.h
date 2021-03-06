//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, PXRoundedCornerOverlayView;

@interface PXPeopleStripCollectionViewCell : UICollectionViewCell
{
    NSArray *_people;
    NSArray *_groupAvatarViews;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
}

@property(retain, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // @synthesize roundCornerOverlay=_roundCornerOverlay;
@property(retain, nonatomic) NSArray *groupAvatarViews; // @synthesize groupAvatarViews=_groupAvatarViews;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
// - (void).cxx_destruct;
- (void)_layoutAvatarViewsInFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

