//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Rapport/RPEndpoint.h>


@class NSString;

@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding>
{
    unsigned int _flags;
    NSString *_persistentIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
// - (void).cxx_destruct;
- (unsigned int)updateWithEndpoint:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

