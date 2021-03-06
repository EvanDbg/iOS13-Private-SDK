//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUIKit/CCUIContentModule-Protocol.h>

@class CCUIContentModuleContext, NSBundle, NSString, NSURL, UIImage;

@interface CCUIAppLauncherModule : NSObject <CCUIContentModule>
{
    NSBundle *_bundle;
    BOOL _supportsApplicationShortcuts;
    NSString *_applicationIdentifier;
    NSString *_displayName;
    CCUIContentModuleContext *_contentModuleContext;
    NSURL *_launchURL;
}

@property(nonatomic) BOOL supportsApplicationShortcuts; // @synthesize supportsApplicationShortcuts=_supportsApplicationShortcuts;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(retain, nonatomic) CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
// - (void).cxx_destruct;
- (id)contentViewControllerForContext:(id)arg1;
- (void)handleTapWithTouchType:(long long)arg1;
- (void)handleTouchDownWithTouchType:(long long)arg1;
- (id)launchURLForTouchType:(long long)arg1;
@property(readonly, copy, nonatomic) UIImage *iconGlyph;
- (id)init;

@end

