//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HMFHTTPRequest, HMFHTTPResponseInternal, NSData, NSDictionary;

@interface HMFHTTPResponse : HMFObject <NSCopying, NSMutableCopying>
{
    HMFHTTPResponseInternal *_internal;
    HMFHTTPRequest *_request;
}

@property(readonly, nonatomic) HMFHTTPResponseInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) HMFHTTPRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSData *body;
@property(readonly, nonatomic) NSDictionary *headerFields;
@property(readonly, nonatomic) long long statusCode;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)attributeDescriptions;
- (id)initWithRequest:(id)arg1 internalResponse:(id)arg2;
- (id)init;

@end

