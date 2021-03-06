//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemon, NSArray, NSDictionary;

@interface HDPluginManager : NSObject
{
    NSArray *_plugins;
    NSArray *_legacyPlugins;
    HDDaemon *_daemon;
    NSArray *_allowablePluginDirectoryPaths;
    NSDictionary *_legacyPluginsByIdentifier;
}

@property(retain, nonatomic) NSDictionary *legacyPluginsByIdentifier; // @synthesize legacyPluginsByIdentifier=_legacyPluginsByIdentifier;
@property(copy, nonatomic) NSArray *allowablePluginDirectoryPaths; // @synthesize allowablePluginDirectoryPaths=_allowablePluginDirectoryPaths;
@property(nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
// - (void).cxx_destruct;
- (Class)_loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtPath:(id)arg2;
- (id)_loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id )arg3;
- (id)pluginsForProtocol:(id)arg1;
- (id)pluginForIdentifier:(id)arg1;
- (id)legacyPlugins;
- (id)pluginsConformingToProtocol:(id)arg1;
- (id)createExtensionsForProfile:(id)arg1;
- (id)createExtensionsForDaemon:(id)arg1;
- (void)_loadPlugins;
- (id)_createLegacyPluginsFromClasses:(id)arg1;
- (id)_createPluginsFromClasses:(id)arg1;
- (id)_pluginClasses;
- (id)_principalClassProtocols;
- (id)_pluginDirectoryPaths;
- (id)_internalPluginsDirectoryPaths;
- (id)_pluginsDirectoryPath;
- (id)initWithDaemon:(id)arg1;
- (id)_builtInPluginClasses;

@end

