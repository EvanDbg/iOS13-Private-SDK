//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NURenderPipelineFunction : NSObject
{
}

+ (id)functionWithEvaluationBlock:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)evaluate:(id)arg1 error:(out id )arg2;
- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id )arg2;

@end

