//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIRefreshControlHosting-Protocol.h>

@class NSArray, UINavigationController, UIRefreshControl, UIScrollView, UIView;
@protocol _UINavigationControllerRefreshControlHostDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationControllerRefreshControlHost : NSObject <_UIRefreshControlHosting>
{
    UIScrollView *_scrollView;
    id <_UINavigationControllerRefreshControlHostDelegate> _delegate;
    UINavigationController *_navigationController;
    double _restingHeightOfRefreshControl;
    UIView *_hostContainerView;
    double _unobstructedHeight;
    UIRefreshControl *_refreshControl;
    NSArray *_refreshControlConstraints;
}

+ (BOOL)canHostRefreshControlOwnedByScrollView:(id)arg1 inNavigationController:(id)arg2;
@property(retain) NSArray *refreshControlConstraints; // @synthesize refreshControlConstraints=_refreshControlConstraints;
@property __weak UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) double unobstructedHeight; // @synthesize unobstructedHeight=_unobstructedHeight;
@property(retain, nonatomic) UIView *hostContainerView; // @synthesize hostContainerView=_hostContainerView;
@property(nonatomic) double restingHeightOfRefreshControl; // @synthesize restingHeightOfRefreshControl=_restingHeightOfRefreshControl;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <_UINavigationControllerRefreshControlHostDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
// - (void).cxx_destruct;
- (double)_alphaForRefreshingControlStateWithPossiblyObstructedContent;
- (double)_thresholdForObstructedContentZeroAlpha;
- (double)_thresholdForObstructedContentFullAlpha;
- (void)_updateFadeOutProgress;
- (void)_installRefreshControlIntoContainerView;
- (void)_removeRefreshControlFromContainerView;
- (void)_notifyLayoutDidChange;
@property(readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding;
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (void)decrementInsetHeight:(double)arg1;
- (void)incrementInsetHeight:(double)arg1;
- (void)dealloc;
- (BOOL)isHostingRefreshControlOwnedByScrollView:(id)arg1;
- (void)stopAnimations;
@property(readonly, nonatomic) double fullHeightOfRefreshControl;
- (id)initWithNavigationController:(id)arg1 scrollView:(id)arg2;

@end

