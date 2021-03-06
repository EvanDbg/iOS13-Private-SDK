//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIActionsViewElement;

__attribute__((visibility("hidden")))
@interface SKUITrackViewElement : SKUIViewElement
{
    BOOL _enabled;
    BOOL _selected;
}

@property(readonly, nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (BOOL)isEnabled;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIActionsViewElement *swipeActions;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

