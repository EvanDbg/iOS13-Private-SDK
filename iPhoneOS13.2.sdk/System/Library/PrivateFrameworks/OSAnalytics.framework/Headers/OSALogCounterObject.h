//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface OSALogCounterObject : NSObject
{
    NSUInteger _count;
    NSMutableDictionary *_signatures;
}

+ (id)counter;
+ (id)masterCounts;
@property(readonly) NSMutableDictionary *signatures; // @synthesize signatures=_signatures;
@property(nonatomic) NSUInteger count; // @synthesize count=_count;
// - (void).cxx_destruct;
- (id)description;
- (id)init;

@end

