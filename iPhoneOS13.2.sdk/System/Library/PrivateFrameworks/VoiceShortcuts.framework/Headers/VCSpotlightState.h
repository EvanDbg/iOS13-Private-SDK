//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VCSpotlightState : NSObject
{
    NSUInteger _identifier;
    NSDictionary *_syncedShortcuts;
}

@property(readonly, nonatomic) NSDictionary *syncedShortcuts; // @synthesize syncedShortcuts=_syncedShortcuts;
@property(readonly, nonatomic) NSUInteger identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)saveToPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithIdentifier:(NSUInteger)arg1 syncedShortcuts:(id)arg2;

@end

