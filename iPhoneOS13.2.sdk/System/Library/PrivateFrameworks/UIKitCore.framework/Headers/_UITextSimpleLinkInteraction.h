//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITextItemInteractionInteraction.h"

@class UILongPressGestureRecognizer, UITapGestureRecognizer, _UITextInteractableItem;

__attribute__((visibility("hidden")))
@interface _UITextSimpleLinkInteraction : UITextItemInteractionInteraction
{
    UITapGestureRecognizer *_linkTap;
    UILongPressGestureRecognizer *_highlighter;
    _UITextInteractableItem *_highlightedItem;
}

// - (void).cxx_destruct;
- (BOOL)_allowItemInteractions;
- (BOOL)_beginInteractionSessionForLinkAtPoint:(CGPoint)arg1 asTap:(BOOL)arg2;
- (BOOL)_canBeginInteractionSessionForLinkAtPoint:(CGPoint)arg1 asTap:(BOOL)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)highlight:(id)arg1;
- (void)linkTapped:(id)arg1;
- (id)textLinkInteractableView;
- (id)itemInteractableView;
- (id)gesturesForFailureRequirements;
- (id)init;

@end

