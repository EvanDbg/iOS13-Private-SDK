//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UISEGestureFeatureDelegate;

__attribute__((visibility("hidden")))
@interface _UISEGestureFeature : NSObject
{
    id <_UISEGestureFeatureDelegate> _delegate;
    NSUInteger _state;
}

@property(readonly, nonatomic) NSUInteger state; // @synthesize state=_state;
@property(nonatomic) __weak id <_UISEGestureFeatureDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
// - (void)_incorporateSample:(const struct _UISEGestureFeatureSample )arg1;
- (void)_setState:(NSUInteger)arg1;
- (id)debugDictionary;
// - (void)incorporateSample:(const struct _UISEGestureFeatureSample )arg1;

@end

