//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface GKNavigationControllerDeferredTransitionInfo : NSObject
{
    BOOL _animated;
    int _type;
    UIViewController *_viewController;
}

@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)dealloc;

@end

