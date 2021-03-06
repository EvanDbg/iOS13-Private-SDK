//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface DMFApplicationInstallProgress : NSObject <NSCopying, NSSecureCoding>
{
    NSUInteger _state;
    NSUInteger _phase;
    double _fractionCompleted;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(readonly, nonatomic) NSUInteger phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) NSUInteger state; // @synthesize state=_state;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(NSUInteger)arg1 phase:(NSUInteger)arg2 fractionCompleted:(double)arg3;

@end

