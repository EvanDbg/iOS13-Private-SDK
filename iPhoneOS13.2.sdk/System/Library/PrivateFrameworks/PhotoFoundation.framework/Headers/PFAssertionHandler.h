//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol PFAssertionPolicyHandler;

@interface PFAssertionHandler : NSAssertionHandler
{
    id <PFAssertionPolicyHandler> _policy;
}

+ (BOOL)runningUnitTests;
+ (void)install;
+ (id)currentHandler;
@property(retain) id <PFAssertionPolicyHandler> policy; // @synthesize policy=_policy;
// - (void).cxx_destruct;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5;
//  (void)continueAfterAssertInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
//  (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
//  (id)newAssertionInfoInMethod:(SEL)arg1 object:(id)arg2 function:(id)arg3 file:(id)arg4 lineNumber:(long long)arg5 description:(id)arg6 arguments:(struct __va_list_tag [1])arg7;
- (void)_install;
- (id)defaultTestingPolicy;
- (id)defaultPolicy;
- (id)init;

@end

