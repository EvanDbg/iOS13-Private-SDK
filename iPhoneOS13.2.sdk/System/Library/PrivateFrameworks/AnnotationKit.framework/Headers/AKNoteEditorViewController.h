//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AKPopupAnnotation, UITextView;
@protocol AKNoteEditorViewControllerDelegate;

@interface AKNoteEditorViewController : UIViewController
{
    UITextView *_textView;
    AKPopupAnnotation *_annotation;
    id <AKNoteEditorViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <AKNoteEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) AKPopupAnnotation *annotation; // @synthesize annotation=_annotation;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
// - (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

