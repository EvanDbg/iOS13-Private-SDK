//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface HFItemUpdateRequest : NSObject
{
    NSSet *_itemsToUpdate;
    NSSet *_itemsProvidersToReload;
    SEL _senderSelector;
}

+ (id)requestToUpdateItems:(id)arg1 senderSelector:(SEL)arg2;
+ (id)requestToReloadItemProviders:(id)arg1 senderSelector:(SEL)arg2;
@property(readonly, nonatomic) SEL senderSelector; // @synthesize senderSelector=_senderSelector;
@property(readonly, nonatomic) NSSet *itemsProvidersToReload; // @synthesize itemsProvidersToReload=_itemsProvidersToReload;
@property(readonly, nonatomic) NSSet *itemsToUpdate; // @synthesize itemsToUpdate=_itemsToUpdate;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithItemProviders:(id)arg1 items:(id)arg2 senderSelector:(SEL)arg3;

@end

