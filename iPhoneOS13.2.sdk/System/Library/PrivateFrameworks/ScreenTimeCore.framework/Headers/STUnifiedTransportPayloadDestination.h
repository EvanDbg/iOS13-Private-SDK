//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/STSerializableManagedObject-Protocol.h>

@class NSString;

@interface STUnifiedTransportPayloadDestination : NSObject <NSCopying, NSSecureCoding, STSerializableManagedObject>
{
    NSString *_address;
    NSString *_type;
    NSUInteger _state;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithAddress:(id)arg1 type:(id)arg2 state:(NSUInteger)arg3;
- (id)initWithAddress:(id)arg1 type:(id)arg2;
- (id)initWithDSID:(id)arg1;

@end

