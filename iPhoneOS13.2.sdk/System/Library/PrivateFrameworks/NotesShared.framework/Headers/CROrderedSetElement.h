//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/CREquatable-Protocol.h>

@class CRRegisterLatest, NSString;
@protocol CRDataType><CRCoding;

@interface CROrderedSetElement : NSObject <CRDataType, NSCopying, CREquatable>
{
    id <CRDataType><CRCoding> _value;
    CRRegisterLatest *_index;
}

+ (id)temporaryElementWithValue:(id)arg1;
@property(retain, nonatomic) CRRegisterLatest *index; // @synthesize index=_index;
@property(retain, nonatomic) id <CRDataType><CRCoding> value; // @synthesize value=_value;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)tombstone;
- (void)setDocument:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)mergeWith:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
//  (void)encodeIntoProtobufSetElement:(struct Dictionary_Element )arg1 coder:(id)arg2;
//  (id)initWithProtobufSetElement:(const struct Dictionary_Element )arg1 decoder:(id)arg2;

@end

