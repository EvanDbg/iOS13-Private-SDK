//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSHashTable, NSSet;

@interface SBUIInteractionForwardingView : UIView
{
    NSHashTable *_ignoreAlphaSubviewsTable;
}

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeIgnoreAlphaSubview:(id)arg1;
- (void)addIgnoreAlphaSubview:(id)arg1;
@property(copy, nonatomic) NSSet *ignoreAlphaSubviews;

@end
