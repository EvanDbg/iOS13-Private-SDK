//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAAnimation.h>

@interface CAAnimation (PKCAUtilities)
+ (id)pkui_shakeAnimationWithInitalOffest:(double)arg1 springStiffness:(double)arg2 springDamping:(double)arg3;
+ (id)pkui_smallShakeAnimation;
+ (id)pkui_shakeAnimation;
- (void)pkui_setCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)pkui_completionHandler;
- (void)pkui_setDidStartHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)pkui_didStartHandler;
@end

