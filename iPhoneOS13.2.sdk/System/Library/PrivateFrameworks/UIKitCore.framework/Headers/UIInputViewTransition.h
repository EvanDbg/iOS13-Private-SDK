//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIInputViewSet;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : NSObject
{
    UIInputViewSet *oldSet;
    UIInputViewSet *newSet;
}

- (void)postNotificationsForTransitionEnd;
- (void)postNotificationsForTransitionStart;
- (id)newSet;
@property(readonly, nonatomic) UIInputViewSet *oldSet;

@end
