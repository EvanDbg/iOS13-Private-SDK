//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICRadioContentReference, MPIdentifierSet;

@interface MPCModelRadioContentReference : NSObject <NSCopying, NSSecureCoding>
{
    ICRadioContentReference *_ICRadioContentReference;
    MPIdentifierSet *_referenceModelObjectIdentifiers;
}

+ (BOOL)supportsSecureCoding;
+ (id)referenceWithMPModelObject:(id)arg1;
@property(readonly, nonatomic) MPIdentifierSet *referenceModelObjectIdentifiers; // @synthesize referenceModelObjectIdentifiers=_referenceModelObjectIdentifiers;
@property(readonly, nonatomic) ICRadioContentReference *ICRadioContentReference; // @synthesize ICRadioContentReference=_ICRadioContentReference;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithICRadioContentReference:(id)arg1;

@end

