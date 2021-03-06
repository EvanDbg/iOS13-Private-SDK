//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSString;

@interface BSPluginManager : NSObject
{
    NSBundle *_bundle;
    NSString *_pluginDirectory;
    NSArray *_pluginBundles;
}

+ (id)managerForBundle:(id)arg1;
+ (id)mainManager;
@property(readonly, copy, nonatomic) NSArray *pluginBundles; // @synthesize pluginBundles=_pluginBundles;
@property(readonly, copy, nonatomic) NSString *pluginDirectory; // @synthesize pluginDirectory=_pluginDirectory;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (id)pluginBundlesForType:(id)arg1;
- (id)pluginBundleForIdentifier:(id)arg1;
- (id)pluginBundleForName:(id)arg1 type:(id)arg2;
- (id)initWithBundle:(id)arg1;

@end

