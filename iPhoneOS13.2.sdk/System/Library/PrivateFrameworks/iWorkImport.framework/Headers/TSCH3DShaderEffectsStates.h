//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderEffectsStates : NSObject <NSCopying>
{
    NSMutableDictionary *mObjects;
}

// - (id)copyWithZone:(_NSZone )arg1;
- (void)clear;
- (void)setState:(id)arg1 forStateInfo:(id)arg2;
- (id)stateForStateInfo:(id)arg1 createIfNil:(BOOL)arg2;
- (id)valueStateForKey:(id)arg1;
- (void)setValueState:(id)arg1 forKey:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

