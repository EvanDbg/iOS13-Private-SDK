//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPageRangePrivate;

__attribute__((visibility("hidden")))
@interface PDFPageRange : NSObject
{
    PDFPageRangePrivate *_private;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)setRange:(NSRange *)arg1;
- (NSRange *)range;
- (void)setPage:(id)arg1;
- (id)page;
- (id)initWithPage:(id)arg1 range:(NSRange *)arg2;

@end

