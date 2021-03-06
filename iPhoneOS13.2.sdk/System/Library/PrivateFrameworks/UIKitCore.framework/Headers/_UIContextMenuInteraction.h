//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIContextMenuInteraction, UIView, _UIContextMenuPreviewActionGroup;
@protocol _UIContextMenuInteractionDelegate;

@interface _UIContextMenuInteraction : NSObject <UIContextMenuInteractionDelegate, UIInteraction>
{
    struct {
        BOOL shouldBegin;
        BOOL previewForHighlighting;
        BOOL previewForDismissing;
        BOOL willPresent;
        BOOL didEnd;
        BOOL actionsForMenuSuggestedActionsPresentingWithStyle;
    } _delegateImplements;
    UIView *_view;
    id <_UIContextMenuInteractionDelegate> _delegate;
    UIContextMenuInteraction *_actualInteraction;
    _UIContextMenuPreviewActionGroup *_actionGroup;
}

@property(retain, nonatomic) _UIContextMenuPreviewActionGroup *actionGroup; // @synthesize actionGroup=_actionGroup;
@property(retain, nonatomic) UIContextMenuInteraction *actualInteraction; // @synthesize actualInteraction=_actualInteraction;
@property(readonly, nonatomic) __weak id <_UIContextMenuInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
// - (void).cxx_destruct;
- (id)_previewViewController;
- (id)_actionsWithSuggestedActions:(id)arg1;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (void)contextMenuInteractionWillPresent:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2;
- (CGPoint)locationInView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

