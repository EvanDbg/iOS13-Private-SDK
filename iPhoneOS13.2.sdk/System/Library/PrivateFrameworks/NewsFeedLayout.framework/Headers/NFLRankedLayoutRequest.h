//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol NFLFeedTileInfo;

@interface NFLRankedLayoutRequest : NSObject <NSCopying>
{
    BOOL _showAccessoryText;
    NSObject<NFLFeedTileInfo> *_tileInfo;
    NSUInteger _columnSpan;
    long long _cellType;
}

+ (id)requestsWithTileInfo:(id)arg1 columnSpans:(id)arg2 cellType:(long long)arg3 showAccessoryText:(BOOL)arg4;
+ (id)requestWithTileInfo:(id)arg1 columnSpan:(NSUInteger)arg2 cellType:(long long)arg3 showAccessoryText:(BOOL)arg4;
@property(readonly, nonatomic, getter=isShowingAccessoryText) BOOL showAccessoryText; // @synthesize showAccessoryText=_showAccessoryText;
@property(readonly, nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(readonly, nonatomic) NSUInteger columnSpan; // @synthesize columnSpan=_columnSpan;
@property(readonly, copy, nonatomic) NSObject<NFLFeedTileInfo> *tileInfo; // @synthesize tileInfo=_tileInfo;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithTileInfo:(id)arg1 columnSpan:(NSUInteger)arg2 cellType:(long long)arg3 showAccessoryText:(BOOL)arg4;
- (id)init;

@end

