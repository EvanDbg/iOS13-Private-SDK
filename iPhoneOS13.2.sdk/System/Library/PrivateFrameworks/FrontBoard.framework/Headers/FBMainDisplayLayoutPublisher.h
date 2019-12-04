//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBSDisplayLayoutPublisherObserving-Protocol.h>
#import <FrontBoard/FBSDisplayObserving-Protocol.h>

@class FBSDisplayLayout, FBSDisplayLayoutPublisher, NSString;

@interface FBMainDisplayLayoutPublisher : NSObject <FBSDisplayObserving, FBSDisplayLayoutPublisherObserving>
{
    FBSDisplayLayoutPublisher *_publisher;
    int _displayBacklightToken;
}

+ (id)sharedInstance;
- (void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (id)_addElement:(id)arg1 forKey:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) FBSDisplayLayout *currentLayout;
- (void)flush;
- (id)transitionAssertionWithReason:(id)arg1;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (id)addElement:(id)arg1;
@property(nonatomic) long long backlightLevel;
@property(nonatomic) long long interfaceOrientation;
- (id)_initWithPublisher:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
