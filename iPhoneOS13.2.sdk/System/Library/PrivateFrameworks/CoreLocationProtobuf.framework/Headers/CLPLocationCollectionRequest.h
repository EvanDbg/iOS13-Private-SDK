//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class CLPAccessoryMeta, CLPMeta, NSMutableArray, NSString;

@interface CLPLocationCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_accessoryLocations;
    CLPAccessoryMeta *_accessoryMeta;
    NSString *_appBundleId;
    NSMutableArray *_appBundleIds;
    NSMutableArray *_locations;
    int _mcc;
    CLPMeta *_meta;
    int _mnc;
    int _rat;
    NSString *_tripId;
    struct {
        unsigned int mcc:1;
        unsigned int mnc:1;
        unsigned int rat:1;
    } _has;
}

+ (Class)accessoryLocationType;
+ (Class)appBundleIdsType;
+ (Class)locationType;
@property(retain, nonatomic) NSMutableArray *accessoryLocations; // @synthesize accessoryLocations=_accessoryLocations;
@property(retain, nonatomic) CLPAccessoryMeta *accessoryMeta; // @synthesize accessoryMeta=_accessoryMeta;
@property(retain, nonatomic) NSMutableArray *appBundleIds; // @synthesize appBundleIds=_appBundleIds;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
@property(nonatomic) int rat; // @synthesize rat=_rat;
@property(retain, nonatomic) NSString *tripId; // @synthesize tripId=_tripId;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)accessoryLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessoryLocationsCount;
- (void)addAccessoryLocation:(id)arg1;
- (void)clearAccessoryLocations;
@property(readonly, nonatomic) _Bool hasAccessoryMeta;
- (id)appBundleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)appBundleIdsCount;
- (void)addAppBundleIds:(id)arg1;
- (void)clearAppBundleIds;
@property(nonatomic) _Bool hasMnc;
@property(nonatomic) _Bool hasMcc;
@property(nonatomic) _Bool hasRat;
@property(readonly, nonatomic) _Bool hasAppBundleId;
- (id)locationAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)addLocation:(id)arg1;
- (void)clearLocations;

@end
