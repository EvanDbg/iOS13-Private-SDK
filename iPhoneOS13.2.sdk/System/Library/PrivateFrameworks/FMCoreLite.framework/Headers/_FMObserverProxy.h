//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _FMObserverProxy : NSObject
{
    BOOL _valid;
    id _weakObserver;
}

@property(readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) __weak id weakObserver; // @synthesize weakObserver=_weakObserver;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithWeakObserver:(id)arg1;

@end

