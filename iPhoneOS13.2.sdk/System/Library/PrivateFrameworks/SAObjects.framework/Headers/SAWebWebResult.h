//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, NSURL;

@interface SAWebWebResult : AceObject <SAAceSerializable>
{
}

+ (id)webResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)webResult;
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

