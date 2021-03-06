//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class OADFontReference, OADStyleMatrixReference;

__attribute__((visibility("hidden")))
@interface OADShapeStyle : NSObject <NSCopying>
{
    OADStyleMatrixReference *mLineReference;
    OADStyleMatrixReference *mFillReference;
    OADStyleMatrixReference *mEffectReference;
    OADFontReference *mFontReference;
}

+ (id)defaultOfficeShapeStyle;
+ (id)defaultShapeStyle;
// - (void).cxx_destruct;
- (id)description;
- (void)setFontReference:(id)arg1;
- (id)fontReference;
- (void)setEffectMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setEffectReference:(id)arg1;
- (id)effectReference;
- (void)setFillMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setFillReference:(id)arg1;
- (id)fillReference;
- (void)setLineMatrixIndex:(unsigned int)arg1 color:(id)arg2;
- (void)setLineReference:(id)arg1;
- (id)lineReference;
- (void)applyToParagraphProperties:(id)arg1;
- (void)applyToTextListStyle:(id)arg1;
- (void)applyToTextBody:(id)arg1;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2 useNull:(BOOL)arg3 strokeWidthMultiplier:(float)arg4;
- (void)applyToGraphicProperties:(id)arg1 styleMatrix:(id)arg2;
// - (id)copyWithZone:(_NSZone )arg1;

@end

