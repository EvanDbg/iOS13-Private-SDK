//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphMomentsDeletion : PGGraphChange
{
    NSSet *_momentLocalIdentifiers;
}

@property(readonly, nonatomic) NSSet *momentLocalIdentifiers; // @synthesize momentLocalIdentifiers=_momentLocalIdentifiers;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)changeCount;
- (NSUInteger)type;
- (id)initWithMomentLocalIdentifiers:(id)arg1;

@end

