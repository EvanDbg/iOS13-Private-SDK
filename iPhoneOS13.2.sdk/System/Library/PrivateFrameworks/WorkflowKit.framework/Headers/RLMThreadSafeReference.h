//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RLMThreadSafeReference : NSObject
{
    unique_ptr_d0e912ad _reference;
    id _metadata;
    Class _type;
}

+ (id)referenceWithThreadConfined:(id)arg1;
- (id).cxx_construct;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
- (id)resolveReferenceInRealm:(id)arg1;
- (id)initWithThreadConfined:(id)arg1;

@end

