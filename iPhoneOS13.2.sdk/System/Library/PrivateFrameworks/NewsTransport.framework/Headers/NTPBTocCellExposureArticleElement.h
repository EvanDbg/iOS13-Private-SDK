//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NTPBTocCellExposureArticleElement : PBCodable <NSCopying>
{
    long long _publisherArticleVersionInt64;
    NSString *_articleId;
    int _articleType;
    NSString *_sourceChannelId;
   struct {
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
    } _has;
}

@property(nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPublisherArticleVersionInt64;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
- (int)StringAsArticleType:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasArticleType;
@property(nonatomic) int articleType; // @synthesize articleType=_articleType;
@property(readonly, nonatomic) BOOL hasArticleId;

@end

