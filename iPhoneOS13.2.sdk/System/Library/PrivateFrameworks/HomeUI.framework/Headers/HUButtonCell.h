//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUTitleDescriptionCell.h>

@interface HUButtonCell : HUTitleDescriptionCell
{
    BOOL _destructive;
    BOOL _textColorFollowsTintColor;
    long long _textAlignment;
}

@property(nonatomic) BOOL textColorFollowsTintColor; // @synthesize textColorFollowsTintColor=_textColorFollowsTintColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic, getter=isDestructive) BOOL destructive; // @synthesize destructive=_destructive;
- (void)updateTitle;
- (void)didMoveToSuperview;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

