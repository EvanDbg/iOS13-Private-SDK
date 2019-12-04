//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableItem;

@interface SGDHarvestQueueItem : NSObject
{
    long long _itemId;
    CSSearchableItem *_item;
    unsigned long long _fails;
}

@property(readonly, nonatomic) unsigned long long fails; // @synthesize fails=_fails;
@property(readonly) CSSearchableItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(readonly, nonatomic) _Bool highPriority;
- (void)markAsFailed;
- (void)finish;
- (id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3;

@end
