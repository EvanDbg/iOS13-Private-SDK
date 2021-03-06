//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewVisitor : NSObject
{
    BOOL _visitMaskViews;
    BOOL _tracksHierarchy;
    BOOL __currentlyVisitingHierarchy;
    NSUInteger _traversalDirection;
}

+ (void)_startTraversalOfVisitor:(id)arg1 withView:(id)arg2;
+ (void)_removeHierarchyTrackingVisitor:(id)arg1;
+ (void)_addHierarchyTrackingVisitor:(id)arg1;
@property(readonly, nonatomic) NSUInteger traversalDirection; // @synthesize traversalDirection=_traversalDirection;
@property(nonatomic) BOOL _currentlyVisitingHierarchy; // @synthesize _currentlyVisitingHierarchy=__currentlyVisitingHierarchy;
@property(nonatomic) BOOL tracksHierarchy; // @synthesize tracksHierarchy=_tracksHierarchy;
@property(nonatomic) BOOL visitMaskViews; // @synthesize visitMaskViews=_visitMaskViews;
- (BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (BOOL)_visitView:(id)arg1;
- (id)initWithTraversalDirection:(NSUInteger)arg1;

@end

