//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXProgrammaticNavigationDestination;

@interface PXProgrammaticNavigationRequest : NSObject
{
    PXProgrammaticNavigationDestination *_destination;
    NSUInteger _options;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSUInteger options; // @synthesize options=_options;
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *destination; // @synthesize destination=_destination;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithDestination:(id)arg1 options:(NSUInteger)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

