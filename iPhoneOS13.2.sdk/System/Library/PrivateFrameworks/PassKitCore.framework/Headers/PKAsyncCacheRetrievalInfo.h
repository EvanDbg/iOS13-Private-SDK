//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKAsyncCacheRetrievalInfo : NSObject
{
//    struct os_unfair_lock_s _lock;
    BOOL _itemFetched;
    id _item;
    NSMutableArray *_deliveryBlocks;
}

// - (void).cxx_destruct;
- (void)deliverItem:(id)arg1;
- (id)synchronouslyRetrieve:(CDUnknownBlockType)arg1 outDeliveryBlocks:(id )arg2;
- (void)addDeliveryBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

