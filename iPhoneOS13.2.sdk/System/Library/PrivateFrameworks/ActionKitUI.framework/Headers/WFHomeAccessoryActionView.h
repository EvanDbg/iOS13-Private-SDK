//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFActionCustomView.h>

#import <ActionKitUI/WFActionEventObserver-Protocol.h>

@class NSString, UIStackView;

__attribute__((visibility("hidden")))
@interface WFHomeAccessoryActionView : WFActionCustomView <WFActionEventObserver>
{
    UIStackView *_iconsStackView;
}

+ (double)preferredHeightForAction:(id)arg1;
@property(retain, nonatomic) UIStackView *iconsStackView; // @synthesize iconsStackView=_iconsStackView;
- (void)updateIcons;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)setAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
