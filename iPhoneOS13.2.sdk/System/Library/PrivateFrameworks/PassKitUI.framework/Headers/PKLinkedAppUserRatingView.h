//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray;

@interface PKLinkedAppUserRatingView : UIView
{
    NSMutableArray *_starViews;
    float _userRating;
}

@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
// - (void).cxx_destruct;
- (id)_starImageViewWithImage:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

