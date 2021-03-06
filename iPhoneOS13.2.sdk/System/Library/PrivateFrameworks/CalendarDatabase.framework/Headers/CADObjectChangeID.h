//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CADObjectChangeID : NSObject <NSSecureCoding>
{
    int _entityType;
    long long _changeID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long changeID; // @synthesize changeID=_changeID;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithEntityType:(int)arg1 changeID:(long long)arg2;

@end

