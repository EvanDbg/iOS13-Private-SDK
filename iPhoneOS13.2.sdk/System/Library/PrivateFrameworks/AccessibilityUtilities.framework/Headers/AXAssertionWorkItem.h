//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXAssertionWorkItem : NSObject
{
    BOOL _acquire;
    NSString *_type;
    NSString *_identifier;
    NSUInteger _retries;
}

@property(nonatomic) NSUInteger retries; // @synthesize retries=_retries;
@property(readonly, nonatomic) BOOL acquire; // @synthesize acquire=_acquire;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(BOOL)arg3;

@end

