//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAUSRichText : AceObject <SAAceSerializable>
{
}

+ (id)richTextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)richText;
@property(copy, nonatomic) NSNumber *textMaxlines;
@property(copy, nonatomic) NSNumber *starRating;
@property(copy, nonatomic) NSArray *moreGlyphs;
@property(copy, nonatomic) NSArray *markupList;
@property(copy, nonatomic) NSString *formattedTextDelimiter;
@property(copy, nonatomic) NSString *contentAdvisory;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

