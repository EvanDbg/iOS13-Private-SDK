//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface FPBlockRecoveryAttempter : NSObject
{
    id /* CDUnknownBlockType */ _recoveryBlock;
    NSError *_expectedError;
}

@property(nonatomic) __weak NSError *expectedError; // @synthesize expectedError=_expectedError;
// - (void).cxx_destruct;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(NSUInteger)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

