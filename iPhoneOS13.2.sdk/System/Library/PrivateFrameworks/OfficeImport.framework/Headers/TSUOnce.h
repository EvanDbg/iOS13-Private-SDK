//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUOnce : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _didPerformOnce;
}

// - (void).cxx_destruct;
- (void)performBlockOnce:(CDUnknownBlockType)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

