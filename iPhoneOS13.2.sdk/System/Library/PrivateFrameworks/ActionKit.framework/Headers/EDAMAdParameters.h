//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface EDAMAdParameters : FATObject
{
    NSString *_clientLanguage;
    NSArray *_impressions;
    NSNumber *_supportHtml;
    NSDictionary *_clientProperties;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSDictionary *clientProperties; // @synthesize clientProperties=_clientProperties;
@property(retain, nonatomic) NSNumber *supportHtml; // @synthesize supportHtml=_supportHtml;
@property(retain, nonatomic) NSArray *impressions; // @synthesize impressions=_impressions;
@property(retain, nonatomic) NSString *clientLanguage; // @synthesize clientLanguage=_clientLanguage;
// - (void).cxx_destruct;

@end

