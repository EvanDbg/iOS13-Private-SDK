//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NAUITextStyleDescriptor;

@interface UIView (NAUIAutolayoutDebugging)
+ (void)_naui_beginDebuggingAutolayout;
+ (void)naui_prepareToAutolayoutProperDescendantsOfView:(id)arg1 inConstraints:(id)arg2;
+ (void)naui_performAnimateableChangesWithAnimationDuration:(double)arg1 setupBlock:(CDUnknownBlockType)arg2 animatablesBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)naui_endDisablingAnimations;
+ (void)naui_beginDisablingAnimations;
- (id)naui_descendantsWithAmbiguousLayout;
- (void)naui_removeNamedConstraints;
- (void)naui_removeConstraintsNamed:(id)arg1;
- (void)naui_setNamedConstraints:(id)arg1 forName:(id)arg2;
- (id)_naui_constraintsNamed:(id)arg1;
- (id)_naui_constraintsByNameDictionary:(BOOL)arg1;
- (BOOL)naui_replaceConstraints:(id)arg1 withConstraints:(id)arg2;
- (BOOL)naui_replaceConstraint:(id)arg1 withConstraints:(id)arg2;
- (void)naui_addConstraints:(id)arg1;
- (void)naui_addConstraint:(id)arg1;
- (void)naui_removeConstraints:(id)arg1;
- (void)naui_removeConstraint:(id)arg1;
- (void)naui_reloadDynamicFontWithTextStyleDescriptor:(id)arg1;
- (BOOL)naui_isProperDescendantOfView:(id)arg1;
- (void)naui_addAutoLayoutSubviews:(id)arg1;
- (void)naui_addAutoLayoutSubview:(id)arg1;
- (void)naui_performAnimateableConstraintChanges:(CDUnknownBlockType)arg1;
- (BOOL)naui_canAnimate;
@property(retain, nonatomic, setter=naui_setDynamicFontTextStyleDescriptor:) NAUITextStyleDescriptor *naui_dynamicFontTextStyleDescriptor;
- (void)naui_showAllViewBoundsRecursively:(BOOL)arg1;
@end

