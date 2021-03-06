//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, TSKCommand, TSKSelection;
@protocol TSKAnnotation, TSKModel, TSKSearchReference;

@protocol TSKSearchReference <NSObject, NSCopying>
@property(retain, nonatomic) id <TSKAnnotation> annotation;
@property(nonatomic) BOOL autohideHighlight;
@property(nonatomic) BOOL pulseHighlight;
@property(retain, nonatomic) NSArray *findHighlights;
@property(nonatomic) CGPoint searchRef erencePoint;
- (BOOL)isReplaceable;
- (TSKSelection *)selection;
- (id <TSKModel>)model;
- (id <TSKSearchReference>)searchReferenceEnd;
- (id <TSKSearchReference>)searchReferenceStart;
- (id <TSKSearchReference>)searchReferenceForReplacingWithString:(NSString *)arg1 options:(NSUInteger)arg2 authorCreatedWithCommand:(id )arg3;
- (TSKCommand *)commandForReplacingWithString:(NSString *)arg1 options:(NSUInteger)arg2;
@end

