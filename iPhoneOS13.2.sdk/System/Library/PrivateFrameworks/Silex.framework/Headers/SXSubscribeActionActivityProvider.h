//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@protocol SXSubscribeActionHandler, SXViewControllerPresenting;

@interface SXSubscribeActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id <SXSubscribeActionHandler> _handler;
    id <SXViewControllerPresenting> _viewControllerPresenting;
}

@property(readonly, nonatomic) id <SXViewControllerPresenting> viewControllerPresenting; // @synthesize viewControllerPresenting=_viewControllerPresenting;
@property(readonly, nonatomic) id <SXSubscribeActionHandler> handler; // @synthesize handler=_handler;
// - (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (id)initWithHandler:(id)arg1 viewControllerPresenting:(id)arg2;

@end

