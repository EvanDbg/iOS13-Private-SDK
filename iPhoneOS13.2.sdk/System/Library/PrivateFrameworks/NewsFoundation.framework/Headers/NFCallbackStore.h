//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NFCallbackStore : NSObject
{
    NSMutableDictionary *_store;
}

@property(readonly, nonatomic) NSMutableDictionary *store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (void)storeCallbackDefinition:(id)arg1 forKey:(id)arg2 scope:(id)arg3;
- (id)lookupForKey:(id)arg1;
- (id)init;

@end

