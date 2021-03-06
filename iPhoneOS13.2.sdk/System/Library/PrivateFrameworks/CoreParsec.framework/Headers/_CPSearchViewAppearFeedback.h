//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSearchViewAppearFeedback-Protocol.h>

@class NSData, NSDictionary;

@interface _CPSearchViewAppearFeedback : PBCodable <_CPProcessableFeedback, _CPSearchViewAppearFeedback, NSSecureCoding>
{
    BOOL _isOnLockScreen;
    BOOL _isOverApp;
    BOOL _readerTextAvailable;
    int _viewAppearEvent;
    NSUInteger _timestamp;
}

@property(nonatomic) BOOL readerTextAvailable; // @synthesize readerTextAvailable=_readerTextAvailable;
@property(nonatomic) BOOL isOverApp; // @synthesize isOverApp=_isOverApp;
@property(nonatomic) BOOL isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property(nonatomic) int viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;
@property(nonatomic) NSUInteger timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;

@end

