//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary;

@protocol _PARBagResponse <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSData *legacyJSON;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

