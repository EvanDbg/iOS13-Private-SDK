//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HUQuickControlValveToggleView;

@interface HUQuickControlValveToggleViewController : HUQuickControlSingleControlViewController
{
    HUQuickControlValveToggleView *_controlView;
}

+ (Class)controlItemClass;
+ (id)controlItemPredicate;
@property(retain, nonatomic) HUQuickControlValveToggleView *controlView; // @synthesize controlView=_controlView;
// - (void).cxx_destruct;
- (id)controlToViewValueTransformer;
- (id)createViewProfile;
- (id)createInteractionCoordinator;

@end

