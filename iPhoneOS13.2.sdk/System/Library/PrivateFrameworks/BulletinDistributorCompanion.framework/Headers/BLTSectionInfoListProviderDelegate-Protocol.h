//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary, NSString;

@protocol BLTSectionInfoListProviderDelegate <NSObject>
- (void)removedSectionWithSectionID:(NSString *)arg1;
- (void)updateOverrides:(NSDictionary *)arg1 forSectionID:(NSString *)arg2;
- (void)updateSectionInfoForSectionIDs:(NSArray *)arg1;
@end

