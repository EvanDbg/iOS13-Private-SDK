//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFHashBuilder : NSObject
{
}

+ (NSUInteger)doubleHash:(double)arg1;
+ (NSUInteger)unsignedIntegerHash:(NSUInteger)arg1;
+ (NSUInteger)integerHash:(long long)arg1;
+ (NSUInteger)boolHash:(BOOL)arg1;
+ (NSUInteger)arrayHash:(id)arg1;
+ (NSUInteger)pointerHash:(void )arg1;
+ (NSUInteger)objectHash:(id)arg1;
+ (NSUInteger)hashWithBlocks:(CDUnknownBlockType)arg1;

@end

