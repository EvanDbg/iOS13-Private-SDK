//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, WFAction;

@protocol WFActionEventObserver <NSObject>

@optional
- (void)action:(WFAction *)arg1 supplementalParameterValueDidChangeForKey:(NSString *)arg2;
- (void)action:(WFAction *)arg1 parameterStateDidChangeForKey:(NSString *)arg2;
- (void)actionRunningStateDidChange:(WFAction *)arg1;
- (void)actionOutputDetailsDidChange:(WFAction *)arg1;
- (void)actionNameDidChange:(WFAction *)arg1;
@end

