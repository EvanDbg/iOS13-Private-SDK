//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface POPAnimationEvent : NSObject
{
    NSUInteger _type;
    double _time;
    NSString *_animationDescription;
}

@property(copy, nonatomic) NSString *animationDescription; // @synthesize animationDescription=_animationDescription;
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)_appendDescription:(id)arg1;
- (id)description;
- (id)initWithType:(NSUInteger)arg1 time:(double)arg2;

@end

