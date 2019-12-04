//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CardKit/CRKComposedView.h>

@class NSMutableArray;

@interface CRKComposedStackView : CRKComposedView
{
    NSMutableArray *_keylines;
    unsigned long long _direction;
}

@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (struct UIEdgeInsets)templatedContentMargins;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
- (void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
- (void)setCardSectionSubviews:(id)arg1;
- (void)triggerLayoutAnimated:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)_updateLayout;
- (void)setDirection:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(id /* block */)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
