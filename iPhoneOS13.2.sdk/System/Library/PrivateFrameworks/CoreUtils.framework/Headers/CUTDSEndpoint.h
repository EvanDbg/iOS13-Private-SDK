//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface CUTDSEndpoint : NSObject <NSSecureCoding>
{
    int _dataLinkType;
    NSData *_deviceAddress;
    NSString *_serviceType;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSData *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property(nonatomic) int dataLinkType; // @synthesize dataLinkType=_dataLinkType;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

