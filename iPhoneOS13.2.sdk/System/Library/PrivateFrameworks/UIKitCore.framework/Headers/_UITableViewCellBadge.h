//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge : UIView
{
    _Bool _selected;
    UILabel *_badgeTextLabel;
}

@property(retain, nonatomic) UILabel *badgeTextLabel; // @synthesize badgeTextLabel=_badgeTextLabel;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
@property(copy, nonatomic) NSString *text;
- (void)_sizeToFit;
- (double)minHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
