//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSULocale, TSWPPadding;

@protocol TSWPTextDelegate
@property(readonly, nonatomic) BOOL shouldHyphenate;
@property(readonly, nonatomic) TSULocale *locale;
@property(readonly, nonatomic) double maxWidthForChildren;
- (TSWPPadding *)padding;
- (int)verticalAlignment;

@optional
- (BOOL)forceWesternLineBreaking;
@end

