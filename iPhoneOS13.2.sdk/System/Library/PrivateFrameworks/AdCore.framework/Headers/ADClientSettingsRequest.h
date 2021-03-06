//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSMutableArray, NSString;

@interface ADClientSettingsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_currentSettingParams;
    NSString *_iAdIDString;
}

+ (Class)currentSettingParamsType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *currentSettingParams; // @synthesize currentSettingParams=_currentSettingParams;
@property(retain, nonatomic) NSString *iAdIDString; // @synthesize iAdIDString=_iAdIDString;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)currentSettingParamsAtIndex:(NSUInteger)arg1;
- (NSUInteger)currentSettingParamsCount;
- (void)addCurrentSettingParams:(id)arg1;
- (void)clearCurrentSettingParams;
@property(readonly, nonatomic) BOOL hasIAdIDString;

@end

