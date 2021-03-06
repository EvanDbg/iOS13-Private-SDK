//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSError;

@interface EMMessageDeliveryResult : NSObject <NSSecureCoding>
{
    long long _status;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 error:(id)arg2;

@end

