//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol NSSecureCoding;

@interface SCROCallback : NSObject <NSSecureCoding>
{
    int _key;
    id <NSSecureCoding> _object;
    BOOL _isAtomic;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)postToHandler:(id)arg1;
- (BOOL)isAtomic;
- (void)setIsAtomic:(BOOL)arg1;
- (id)object;
- (int)key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1 object:(id)arg2;

@end

