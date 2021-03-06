//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFAskForInputIntentHandling-Protocol.h>

@interface WFAskForInputIntentHandler : NSObject <WFAskForInputIntentHandling>
{
    BOOL _resolvedValue;
}

@property(nonatomic) BOOL resolvedValue; // @synthesize resolvedValue=_resolvedValue;
- (void)handleAskForInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveDateAndTimeAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveTimeAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveDateAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveUrlAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveDefaultURLAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveNumberAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveStringAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveTypeForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveQuestionForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

