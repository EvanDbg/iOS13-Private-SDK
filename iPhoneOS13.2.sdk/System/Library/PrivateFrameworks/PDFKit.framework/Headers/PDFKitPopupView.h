//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class PDFKitPopupViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFKitPopupView : UIView <UITextViewDelegate>
{
    PDFKitPopupViewPrivate *_private;
}

// - (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)_updateParentContents;
- (void)_removeControlForAnnotation;
- (void)removeFromSuperview;
- (BOOL)becomeFirstResponder;
- (void)doneButton:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect )arg2 inView:(inout id )arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (CGRect)_popoverControllerSourceRect;
- (void)_presentViewController:(id)arg1;
- (void)_presentPopupView_iOS;
- (void)_presentPopupView;
- (void)_setupPopupView;
- (id)initWithParentAnnotation:(id)arg1 owningPageView:(id)arg2 owningPDFView:(id)arg3;

@end

