//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SettingsCellularUI/PSHeaderFooterView-Protocol.h>

@class UIActivityIndicatorView, UIButton, UILabel, UILayoutGuide, UITextView;

__attribute__((visibility("hidden")))
@interface PSUICarrierItemsNotLoadedView : UIView <UITextViewDelegate, PSHeaderFooterView>
{
    UIActivityIndicatorView *_spinner;
    UILabel *_titleLabel;
    UITextView *_linkTextView;
    UIButton *_retryButton;
    UILayoutGuide *_layoutGuide;
}

@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UITextView *linkTextView; // @synthesize linkTextView=_linkTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
// - (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange *)arg3 interaction:(long long)arg4;
- (void)setLinkText:(id)arg1 url:(id)arg2;
- (id)initWithSpecifier:(id)arg1;

@end

