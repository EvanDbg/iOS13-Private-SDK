//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXCMMPosterHeaderView, PXGadgetSpec, PXRoundedCornerOverlayView, PXUpdater;
@protocol PXCMMSuggestion, PXGadgetDelegate, PXMessagesCMMSuggestionGadgetActionDelegate;

@interface PXMessagesCMMSuggestionGadget : UIViewController <PXGadget>
{
    PXUpdater *_updater;
    PXCMMPosterHeaderView *_posterHeaderView;
    PXRoundedCornerOverlayView *_roundedOverlayView;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    NSUInteger _accessoryButtonType;
    PXGadgetSpec *_gadgetSpec;
    id <PXCMMSuggestion> _suggestion;
    id <PXMessagesCMMSuggestionGadgetActionDelegate> _actionDelegate;
}

@property(nonatomic) __weak id <PXMessagesCMMSuggestionGadgetActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) id <PXCMMSuggestion> suggestion; // @synthesize suggestion=_suggestion;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(readonly, nonatomic) NSUInteger accessoryButtonType; // @synthesize accessoryButtonType=_accessoryButtonType;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)userDidSelectGadget;
@property(readonly, nonatomic) BOOL supportsSelection;
@property(readonly, nonatomic) BOOL supportsHighlighting;
@property(readonly, nonatomic) BOOL hasContentToDisplay;
@property(readonly, nonatomic) NSUInteger gadgetType;
- (NSObject )contentViewController;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)_updatePosterHeaderView;
- (void)viewWillLayoutSubviews;
- (void)_scheduleLayout;
- (void)viewDidLoad;
- (id)initWithSuggestion:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

