//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DCDispatchAfterHandler : NSObject
{
    NSMutableDictionary *_identifierBlockMap;
}

+ (id)appLifeCycleHandler;
@property(retain, nonatomic) NSMutableDictionary *identifierBlockMap; // @synthesize identifierBlockMap=_identifierBlockMap;
// - (void).cxx_destruct;
- (void)cancelAll;
- (void)cancelBlocksWithStringIdentifier:(id)arg1;
- (void)dispatchAfter:(double)arg1 stringIdentifier:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)identifierForStringIdentifier:(id)arg1;
- (id)init;

@end

