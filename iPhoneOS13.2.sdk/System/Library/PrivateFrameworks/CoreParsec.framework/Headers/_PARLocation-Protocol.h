//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary;

@protocol _PARLocation <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) float horizontalAccuracy;
@property(nonatomic) int source;
@property(nonatomic) float longitude;
@property(nonatomic) float latitude;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

