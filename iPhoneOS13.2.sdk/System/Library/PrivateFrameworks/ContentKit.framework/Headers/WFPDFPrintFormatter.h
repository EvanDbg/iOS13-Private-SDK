//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIPrintFormatter, WFPDFDocument;

__attribute__((visibility("hidden")))
@interface WFPDFPrintFormatter : NSObject <NSCopying>
{
    UIPrintFormatter *_printFormatter;
    WFPDFDocument *_document;
}

@property(readonly, nonatomic) WFPDFDocument *document; // @synthesize document=_document;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) UIPrintFormatter *printFormatter; // @synthesize printFormatter=_printFormatter;
- (id)initWithPDFDocument:(id)arg1;
- (id)initWithFileRepresentation:(id)arg1;

@end

