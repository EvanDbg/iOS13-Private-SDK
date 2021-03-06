//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface AWDDEDExtensionCompleted : PBCodable <NSCopying>
{
    NSUInteger _duration;
    NSUInteger _numbytes;
    NSUInteger _numfiles;
    NSUInteger _timestamp;
    int _error;
    NSString *_extension;
    struct {
        unsigned int duration:1;
        unsigned int numbytes:1;
        unsigned int numfiles:1;
        unsigned int timestamp:1;
        unsigned int error:1;
    } _has;
}

@property(nonatomic) NSUInteger duration; // @synthesize duration=_duration;
@property(nonatomic) NSUInteger numbytes; // @synthesize numbytes=_numbytes;
@property(nonatomic) NSUInteger numfiles; // @synthesize numfiles=_numfiles;
@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasDuration;
- (int)StringAsError:(id)arg1;
- (id)errorAsString:(int)arg1;
@property(nonatomic) BOOL hasError;
@property(nonatomic) int error; // @synthesize error=_error;
@property(nonatomic) BOOL hasNumbytes;
@property(nonatomic) BOOL hasNumfiles;
@property(readonly, nonatomic) BOOL hasExtension;
@property(nonatomic) BOOL hasTimestamp;

@end

