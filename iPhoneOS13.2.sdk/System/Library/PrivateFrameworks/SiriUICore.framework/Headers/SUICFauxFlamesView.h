//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface SUICFauxFlamesView : UIView
{
    long long _style;
    double _width;
//     CDStruct_65a63019 _sequenceAttributes;
}

// + (id)_frameImagesForSequence:(CDStruct_65a63019)arg1;
- (void)_cleanupView;
- (BOOL)isAnimating;
- (void)stop:(BOOL)arg1;
- (void)start:(BOOL)arg1;
- (void)prewarm;
- (void)setHidden:(BOOL)arg1;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 screenSize:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

