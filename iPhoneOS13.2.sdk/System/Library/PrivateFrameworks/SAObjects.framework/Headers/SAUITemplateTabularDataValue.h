//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSDictionary, SAUIImageResource, SAUITemplateAttributedString;

@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem
{
}

+ (id)tabularDataValueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)tabularDataValue;
@property(copy, nonatomic) NSArray *themeImages;
@property(nonatomic) double imagePointWidth;
@property(nonatomic) double imagePointHeight;
@property(retain, nonatomic) SAUIImageResource *image;
@property(nonatomic) BOOL highlighted;
@property(copy, nonatomic) NSDictionary *attributedTexts;
@property(retain, nonatomic) SAUITemplateAttributedString *attributedText;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

