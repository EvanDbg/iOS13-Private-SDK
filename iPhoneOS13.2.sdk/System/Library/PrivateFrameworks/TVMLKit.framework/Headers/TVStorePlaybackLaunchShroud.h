//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWindow;

@interface TVStorePlaybackLaunchShroud : NSObject
{
    BOOL _hidden;
    UIWindow *_window;
}

+ (id)sharedShroud;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
// - (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fadeOut;
- (void)_hideWithFadeAnimation:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_showWithFadeAnimation:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

