//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataTuple : HMFObject
{
    NSString *_characteristicType;
    NSString *_serviceType;
    NSString *_index;
}

@property(readonly, nonatomic) NSString *index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCharacteristicType:(id)arg1 serviceType:(id)arg2;

@end

