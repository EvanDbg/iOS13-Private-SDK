//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIInterfaceActionGroupView.h"

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView
{
    BOOL _scrollableHeaderViewHasRealContent;
    UIAlertController *_alertController;
}

@property(nonatomic) BOOL scrollableHeaderViewHasRealContent; // @synthesize scrollableHeaderViewHasRealContent=_scrollableHeaderViewHasRealContent;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
// - (void).cxx_destruct;
- (BOOL)_shouldInstallContentGuideConstraints;
- (BOOL)_shouldShowSeparatorAboveActionsSequenceView;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
- (id)_alertController;
- (id)initWithAlertController:(id)arg1 actionGroup:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;

@end

