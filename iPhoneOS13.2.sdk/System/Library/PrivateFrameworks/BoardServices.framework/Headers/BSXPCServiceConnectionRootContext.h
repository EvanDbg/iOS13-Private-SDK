//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext
{
    NSUInteger _unique;
    _Atomic NSUInteger __uniqueChildCounter;
    NSString *_eDesc;
}

// - (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isRoot;
- (id)endpointDescription;
- (id)childContextWithRemoteIdentifier:(NSUInteger)arg1;
- (id)uniqueChildContext;
- (id)_initWithType:(BOOL)arg1 eDesc:(id)arg2;

@end

