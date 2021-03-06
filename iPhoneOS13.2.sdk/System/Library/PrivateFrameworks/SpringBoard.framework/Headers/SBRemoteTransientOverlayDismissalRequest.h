//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBTransientOverlayViewController;

@interface SBRemoteTransientOverlayDismissalRequest : NSObject
{
    BOOL _animated;
    BOOL _shouldInvalidatePresentation;
    id /* CDUnknownBlockType */ _completionHandler;
    SBTransientOverlayViewController *_viewController;
}

@property(readonly, nonatomic) SBTransientOverlayViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) BOOL shouldInvalidatePresentation; // @synthesize shouldInvalidatePresentation=_shouldInvalidatePresentation;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithViewController:(id)arg1;

@end

