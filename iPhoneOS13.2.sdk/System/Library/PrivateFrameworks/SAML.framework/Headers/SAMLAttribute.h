//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SAMLAttribute : SAMLBaseElement
{
}

+ (id)createElement:(id )arg1;
- (void)addAttributeValue:(id)arg1;
@property(readonly, nonatomic) NSArray *values;
@property(readonly, nonatomic) NSString *friendlyName;
@property(readonly, nonatomic) NSString *nameFormat;
@property(retain, nonatomic) NSString *name;

@end

