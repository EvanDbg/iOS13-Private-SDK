//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class INCodableAttribute, WFContentItem;

@protocol WFCodableAttributeContentConvertible <NSObject>
+ (Class)wf_contentItemClass;
- (void)wf_transformUsingCodableAttribute:(INCodableAttribute *)arg1 completionHandler:(void (^)(id))arg2;
- (WFContentItem *)wf_contentItemWithCodableAttribute:(INCodableAttribute *)arg1;
@end

