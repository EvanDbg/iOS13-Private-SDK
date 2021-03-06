//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DShaderEffect.h>

__attribute__((visibility("hidden")))
@interface TSCH3DLightShaderEffect : TSCH3DShaderEffect
{
    NSUInteger mLightCount;
}

+ (id)effectWithLightCount:(NSUInteger)arg1;
// + (void)updatePackageState:(const struct LightingPackageShaderEffectState )arg1 effectsStates:(id)arg2;
+ (void)createStateInEffectsStates:(id)arg1;
+ (Class)stateClass;
- (void)uploadLightDirectionalWithUploader:(id)arg1 effectsStates:(id)arg2;
- (void)uploadLightPositionablesWithUploader:(id)arg1 effectsStates:(id)arg2;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)addVariables:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (id)initWithLightCount:(NSUInteger)arg1;

@end

