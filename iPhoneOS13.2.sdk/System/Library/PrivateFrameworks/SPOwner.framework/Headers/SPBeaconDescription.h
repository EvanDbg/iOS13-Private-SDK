//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SPBeaconDescription : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_stableIdentifier;
    NSString *_name;
    NSString *_model;
    NSString *_systemVersion;
    long long _vendorId;
    long long _productId;
    long long _role;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) long long productId; // @synthesize productId=_productId;
@property(nonatomic) long long vendorId; // @synthesize vendorId=_vendorId;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *stableIdentifier; // @synthesize stableIdentifier=_stableIdentifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithStableIdentifier:(id)arg1 name:(id)arg2 model:(id)arg3 systemVersion:(id)arg4 vendorId:(long long)arg5 productId:(long long)arg6 role:(long long)arg7;

@end

