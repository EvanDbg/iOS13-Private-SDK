//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/FBSDisplayLayoutObserver-Protocol.h>

@class FBSDisplayLayout, FBSDisplayLayoutMonitor, FBSDisplayLayoutTransitionContext;
@protocol OS_dispatch_queue;

@interface SBScreenTimeTrackingController : NSObject <FBSDisplayLayoutObserver>
{
    FBSDisplayLayoutMonitor *_layoutMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_isScreenOn;
    BOOL _queue_isPhoneOrFaceTimeActive;
    NSUInteger _queue_thisCategoryStartTime;
    double _queue_lastCategoryChangeTime;
    int _queue_activeContext;
    int _queue_activeCategory;
    FBSDisplayLayout *_queue_lastLayout;
    FBSDisplayLayoutTransitionContext *_queue_lastLayoutTransitionContext;
}

// - (void).cxx_destruct;
- (void)_queue_setActiveCategory:(int)arg1 context:(int)arg2;
- (void)_queue_setPhoneOrFaceTimeActive:(BOOL)arg1;
- (void)_queue_setScreenOn:(BOOL)arg1 withContext:(id)arg2;
- (void)_queue_handleNewLayout:(id)arg1 withContext:(id)arg2;
- (id)_nameForContext:(int)arg1;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)dealloc;
- (id)init;

@end

