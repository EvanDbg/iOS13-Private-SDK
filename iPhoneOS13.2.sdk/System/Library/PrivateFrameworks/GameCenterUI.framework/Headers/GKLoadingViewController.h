//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <GameCenterUI/_GKStateMachineDelegate-Protocol.h>

@class GKLoadableContentStateMachine, NSArray, NSString, UIActivityIndicatorView;

@interface GKLoadingViewController : UIViewController <_GKStateMachineDelegate>
{
    NSArray *_viewsToHideWhileLoading;
    double _loadingIndicatorDelay;
    GKLoadableContentStateMachine *_loadingMachine;
    UIActivityIndicatorView *_activityIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property(nonatomic) double loadingIndicatorDelay; // @synthesize loadingIndicatorDelay=_loadingIndicatorDelay;
@property(retain, nonatomic) NSArray *viewsToHideWhileLoading; // @synthesize viewsToHideWhileLoading=_viewsToHideWhileLoading;
- (void)didExitRefreshingState;
- (void)didEnterRefreshingState;
- (void)didExitLoadedState;
- (void)didEnterLoadedState;
- (void)didExitLoadingState;
- (void)didEnterLoadingState;
- (void)showLoadingIndicator;
- (void)setViewsToHideHidden:(BOOL)arg1;
@property(retain, nonatomic) NSString *loadingState;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

