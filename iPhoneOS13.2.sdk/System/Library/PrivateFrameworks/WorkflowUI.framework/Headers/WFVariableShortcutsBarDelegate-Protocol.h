//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WFVariable, WFVariableShortcutsBar;

@protocol WFVariableShortcutsBarDelegate <NSObject>
- (void)shortcutsBarDidSelectCustomButton:(WFVariableShortcutsBar *)arg1;
- (void)shortcutsBarDidSelectMagicVariable:(WFVariableShortcutsBar *)arg1;
- (void)shortcutsBar:(WFVariableShortcutsBar *)arg1 didSelectVariable:(WFVariable *)arg2;
- (void)shortcutsBarDidOpenTray:(WFVariableShortcutsBar *)arg1;
- (void)shortcutsBarDidDismiss:(WFVariableShortcutsBar *)arg1;
@end

