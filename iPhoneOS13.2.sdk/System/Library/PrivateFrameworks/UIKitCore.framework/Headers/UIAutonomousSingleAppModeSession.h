//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIAutonomousSingleAppModeConfiguration;

@interface UIAutonomousSingleAppModeSession : NSObject
{
    _Bool _active;
    UIAutonomousSingleAppModeConfiguration *_effectiveConfiguration;
}

+ (void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestSessionWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
+ (id)__gaxTrampoline_currentlyActiveSession;
+ (id)currentlyActiveSession;
@property(copy, nonatomic) UIAutonomousSingleAppModeConfiguration *effectiveConfiguration; // @synthesize effectiveConfiguration=_effectiveConfiguration;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)__gaxTrampoline_endSessionWithCompletion:(id /* block */)arg1;
- (void)endWithCompletion:(id /* block */)arg1;
- (void)_guidedAccessStateDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithEffectiveConfiguration:(id)arg1;

@end
