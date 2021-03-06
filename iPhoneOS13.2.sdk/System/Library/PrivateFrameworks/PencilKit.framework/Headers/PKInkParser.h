//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKInkParser : NSObject
{
}

+ (id)stringForInkInput:(NSUInteger)arg1;
+ (id)stringForFunctionMask:(id)arg1;
+ (id)controlPointArrayForInkFunction:(id)arg1;
+ (id)dictionaryForInkFunction:(id)arg1;
+ (void)addFunctionsIfNecessaryForInk:(id)arg1 property:(NSUInteger)arg2 forDictionary:(id)arg3;
+ (id)dictionaryForInk:(id)arg1 name:(id)arg2;
+ (unique_ptr_94812230)loadFunction:(id)arg1;
+ (void)validateFunctionDictionary:(id)arg1;
//  (void)validatePiecewiseBezierFunction:(struct PKFunctionPiecewiseBezier )arg1;
+ (vector_2b0a8222)loadOutput:(id)arg1 forBehavior:(id)arg2;
+ (void)verifyParameters:(id)arg1;
+ (void)validateRenderingDescriptorDictionary:(id)arg1;
+ (void)validateBehaviorVariantDictionary:(id)arg1;
+ (id)inkBehaviorVariantWithDictionary:(id)arg1 renderingDescriptor:(id)arg2 variant:(id)arg3;
+ (id)inkRenderingDescriptorWithDictionary:(id)arg1;
+ (CGImageRef)imageRefForTextureName:(id)arg1;
+ (id)inkBehaviorsWithIdentifer:(id)arg1 version:(NSUInteger)arg2;
+ (id)inkBehaviorsWithIdentifer:(id)arg1;
+ (id)inkBehaviorFromDictionary:(id)arg1 identifier:(id)arg2 version:(NSUInteger)arg3 variant:(id)arg4;
+ (id)plistDictionaryForInk:(id)arg1;

@end

