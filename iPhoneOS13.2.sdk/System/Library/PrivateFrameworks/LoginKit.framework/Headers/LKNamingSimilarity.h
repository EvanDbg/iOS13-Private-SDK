//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface LKNamingSimilarity : NSObject <NSSecureCoding>
{
    NSUInteger _similarity;
}

+ (BOOL)supportsSecureCoding;
+ (id)namingSimilarityWithSimilarity:(NSUInteger)arg1;
@property(nonatomic) NSUInteger similarity; // @synthesize similarity=_similarity;
- (id)init;
- (BOOL)isEqualToLKNamingSimilarity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

