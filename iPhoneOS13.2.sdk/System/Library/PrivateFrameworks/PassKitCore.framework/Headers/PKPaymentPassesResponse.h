//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString;

@interface PKPaymentPassesResponse : PKPaymentWebServiceResponse
{
    NSArray *_passURLs;
    NSString *_lastUpdatedTag;
    NSArray *_devicePassSerialNumbers;
}

@property(copy, nonatomic) NSArray *devicePassSerialNumbers; // @synthesize devicePassSerialNumbers=_devicePassSerialNumbers;
@property(copy, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(copy, nonatomic) NSArray *passURLs; // @synthesize passURLs=_passURLs;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

