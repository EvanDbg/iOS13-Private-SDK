//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest
{
    STCall *_call;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (id)description;
- (id)call;
- (id)_initWithCall:(id)arg1;

@end

