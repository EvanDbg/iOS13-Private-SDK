//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAClientBoundCommand-Protocol.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupIntentSearchResponse : SABaseClientBoundCommand <SAClientBoundCommand>
{
}

+ (id)intentSearchResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)intentSearchResponse;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *metadata;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

