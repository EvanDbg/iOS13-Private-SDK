//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIView;

@interface _UIViewPropertyAnimationDescription : NSObject
{
    NSMutableDictionary *_updates;
    UIView *_view;
}

@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) NSMutableDictionary *updates; // @synthesize updates=_updates;
// - (void).cxx_destruct;
- (void)_addUpdate:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)init;

@end

