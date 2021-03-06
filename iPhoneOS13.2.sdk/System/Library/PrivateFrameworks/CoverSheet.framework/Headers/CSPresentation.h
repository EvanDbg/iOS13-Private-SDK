//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/CSPresentationProviding-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol UICoordinateSpace;

@interface CSPresentation : NSObject <CSPresentationProviding, UICoordinateSpace, NSCopying>
{
    NSMutableArray *_regions;
    id <UICoordinateSpace> _coordinateSpace;
    NSString *_identifier;
}

+ (id)presentationForProvider:(id)arg1;
+ (id)presentationWithCoordinateSpace:(id)arg1;
+ (id)presentation;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *regions; // @synthesize regions=_regions;
@property(nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
// - (void).cxx_destruct;
- (CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) CGRect bounds;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
- (UIEdgeInsets)suggestedInsetsForPreferredContentFrame:(CGRect)arg1;
- (id)regionsIntersectingCoordinateSpace:(id)arg1;
- (id)firstRegionIntersectingCoordinateSpace:(id)arg1 excludingRegionsWithRole:(long long)arg2;
- (id)firstRegionIntersectingCoordinateSpace:(id)arg1;
- (BOOL)intersectsCoordinateSpace:(id)arg1;
- (id)presentationForRole:(long long)arg1;
- (void)reset;
- (void)unionPresentation:(id)arg1;
- (void)addRegions:(id)arg1;
- (void)addRegion:(id)arg1;
- (id)init;

@end

