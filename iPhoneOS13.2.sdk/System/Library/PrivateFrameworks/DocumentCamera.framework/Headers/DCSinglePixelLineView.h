//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


__attribute__((visibility("hidden")))
@interface DCSinglePixelLineView : UIView
{
    BOOL _hasSetUpSizeConstraint;
}

@property(nonatomic) BOOL hasSetUpSizeConstraint; // @synthesize hasSetUpSizeConstraint=_hasSetUpSizeConstraint;
- (id)addSizeConstraint;
- (id)findSizeLayoutConstraintIfExists;
- (void)setUpHeightConstraintIfNecessary;
- (void)updateConstraints;

@end

