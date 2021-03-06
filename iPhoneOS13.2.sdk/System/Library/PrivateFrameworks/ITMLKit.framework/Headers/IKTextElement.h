//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKTextParser, NSArray, NSAttributedString, NSMutableArray, UIColor;

@interface IKTextElement : IKViewElement
{
    IKTextParser *_textParser;
    NSMutableArray *_textBadges;
    NSMutableArray *_textBadgeElements;
    NSMutableArray *_textSpanElements;
    NSUInteger _textStyle;
}

+ (BOOL)shouldParseChildDOMElements;
@property(readonly, nonatomic) NSUInteger textStyle; // @synthesize textStyle=_textStyle;
// - (void).cxx_destruct;
- (NSUInteger)_styleForTagName:(id)arg1;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 defaultAttributes:(id )arg4;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 defaultAttributes:(id )arg2;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1;
- (id)attributedStringWithFont:(id)arg1;
- (void)appDocumentDidMarkStylesDirty;
- (id)accessibilityText;
@property(readonly, retain, nonatomic) NSAttributedString *text;
@property(readonly, nonatomic) NSArray *badges;
@property(readonly, nonatomic) NSUInteger alignment;
@property(readonly, nonatomic) long long maxLines;
@property(readonly, nonatomic) UIColor *color;
- (id)debugDescription;
- (id)initWithOriginalElement:(id)arg1;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

