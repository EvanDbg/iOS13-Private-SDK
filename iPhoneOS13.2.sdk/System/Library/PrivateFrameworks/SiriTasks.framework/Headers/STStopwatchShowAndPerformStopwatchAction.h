//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@interface STStopwatchShowAndPerformStopwatchAction : AFSiriRequest
{
    NSUInteger _action;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)action;
- (id)_initWithAction:(NSUInteger)arg1;

@end

