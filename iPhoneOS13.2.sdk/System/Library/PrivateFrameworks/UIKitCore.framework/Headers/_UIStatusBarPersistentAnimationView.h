//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPersistentAnimationView : UIView
{
    NSHashTable *_animations;
}

@property(retain, nonatomic) NSHashTable *animations; // @synthesize animations=_animations;
// - (void).cxx_destruct;
@property(copy, nonatomic) NSArray *persistentAnimations;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end

