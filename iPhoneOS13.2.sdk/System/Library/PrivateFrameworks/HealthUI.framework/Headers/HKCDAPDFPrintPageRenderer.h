//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface HKCDAPDFPrintPageRenderer : UIPrintPageRenderer
{
    CGRect _paperRectOverride;
    CGRect _printableRectOverride;
}

- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2;
- (CGRect)printableRect;
- (CGRect)paperRect;
- (id)initWithPaperRect:(CGRect)arg1 horizontalMargin:(double)arg2 verticalMargin:(double)arg3;

@end

