//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUIClientContext, SKUIShareTemplateViewElement;

__attribute__((visibility("hidden")))
@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider
{
    SKUIClientContext *_clientContext;
    SKUIShareTemplateViewElement *_templateElement;
}

// - (void).cxx_destruct;
- (id)item;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;

@end

