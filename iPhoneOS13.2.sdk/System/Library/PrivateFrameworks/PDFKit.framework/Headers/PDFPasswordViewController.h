//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class PDFView, UIView;

__attribute__((visibility("hidden")))
@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate>
{
    UIView *_passwordView;
    PDFView *_pdfView;
}

// - (void).cxx_destruct;
- (void)_commonInit;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)setPDFView:(id)arg1;
- (void)loadView;

@end

