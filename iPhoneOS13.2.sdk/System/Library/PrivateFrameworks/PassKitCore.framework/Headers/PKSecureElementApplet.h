//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PKSecureElementApplet : NSObject <NSSecureCoding>
{
    BOOL _locked;
    NSString *_identifier;
    NSUInteger _lifecycleState;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property(readonly, nonatomic) NSUInteger lifecycleState; // @synthesize lifecycleState=_lifecycleState;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(NSUInteger)arg2 locked:(BOOL)arg3;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(NSUInteger)arg2;

@end

