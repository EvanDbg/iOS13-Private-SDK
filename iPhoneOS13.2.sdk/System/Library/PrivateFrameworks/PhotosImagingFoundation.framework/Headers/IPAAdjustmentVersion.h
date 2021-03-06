//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IPAAdjustmentVersion : NSObject
{
    NSUInteger _majorVersion;
    NSUInteger _minorVersion;
    NSString *_platform;
}

+ (id)versionFromArchivalRepresentation:(id)arg1;
+ (id)versionForMajor:(NSUInteger)arg1 minor:(NSUInteger)arg2;
+ (id)versionForMajor:(NSUInteger)arg1 minor:(NSUInteger)arg2 platform:(id)arg3;
+ (id)validatePlatformString:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) NSUInteger minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly, nonatomic) NSUInteger majorVersion; // @synthesize majorVersion=_majorVersion;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqualToAdjustmentVersion:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (long long)compare:(id)arg1;
- (id)archivalRepresentation;
- (id)initWithMajor:(NSUInteger)arg1 minor:(NSUInteger)arg2 platform:(id)arg3;

@end

