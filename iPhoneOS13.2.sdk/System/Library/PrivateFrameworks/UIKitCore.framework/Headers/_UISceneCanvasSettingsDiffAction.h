//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneSettingsDiffAction-Protocol.h>

@protocol _UICanvasSettingsDiffAction;

__attribute__((visibility("hidden")))
@interface _UISceneCanvasSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>
{
    id <_UICanvasSettingsDiffAction> _canvasDiffAction;
}

+ (id)sceneArrayFromCanvasArray:(id)arg1;
// - (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)initWithCanvasDiffAction:(id)arg1;

@end

