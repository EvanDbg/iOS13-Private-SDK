//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EFPrivacy : NSObject
{
}

+ (unsigned int)bucketMessageCount:(NSUInteger)arg1;
+ (id)fullyRedactedStringForString:(id)arg1;
+ (id)partiallyRedactedStringForString:(id)arg1;
+ (id)partiallyRedactedStringForString:(id)arg1 maximumUnredactedLength:(NSUInteger)arg2;
+ (long long)weeksSinceDate:(id)arg1;
+ (id)dateByRemovingTimeComponentsFromDate:(id)arg1;

@end

