//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@protocol SVScrubbingPolicyHandling, SVVideoViewControllerProviding;

@interface SVScrubbingManager : NSObject <SVVideoTransitionObserver>
{
    id <SVScrubbingPolicyHandling> _policyHandler;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <SVScrubbingPolicyHandling> policyHandler; // @synthesize policyHandler=_policyHandler;
// - (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithPolicyHandler:(id)arg1 videoViewControllerProvider:(id)arg2;

@end

