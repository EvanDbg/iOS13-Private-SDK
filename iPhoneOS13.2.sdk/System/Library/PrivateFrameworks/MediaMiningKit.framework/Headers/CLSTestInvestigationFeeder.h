//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder
{
    NSArray *_items;
}

// - (void).cxx_destruct;
- (void)enumerateItemsWithOptions:(NSUInteger)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(NSUInteger)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
- (NSUInteger)numberOfItems;
- (id)initWithItems:(id)arg1;

@end

