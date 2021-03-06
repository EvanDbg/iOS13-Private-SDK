//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class HDCodableError, NSString;

@interface HDCodableCompanionUserNotificationResponse : PBCodable <NSCopying>
{
    HDCodableError *_error;
    NSString *_requestIdentifier;
    BOOL _success;
//     CDStruct_f2ecb737 _has;
}

@property(retain, nonatomic) HDCodableError *error; // @synthesize error=_error;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
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
@property(readonly, nonatomic) BOOL hasError;
@property(nonatomic) BOOL hasSuccess;
@property(readonly, nonatomic) BOOL hasRequestIdentifier;

@end

