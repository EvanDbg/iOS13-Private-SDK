//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDCanvasDelegate-Protocol.h>

@class NSArray, TSDCanvas, TSKDocumentRoot;

@interface TSDImager : NSObject <TSDCanvasDelegate>
{
    NSArray *mInfos;
    CGColorRef mBackgroundColor;
    CGRect mUnscaledClipRect;
    double mViewScale;
    CGSize mScaledImageSize;
    CGSize mMaximumScaledImageSize;
    BOOL mUseScaledImageSize;
    BOOL mDistortedToMatch;
    BOOL mImageMustHaveEvenDimensions;
    BOOL mShouldReuseBitmapContext;
    UIEdgeInsets mContentInset;
    TSKDocumentRoot *mDocumentRoot;
    TSDCanvas *mCanvas;
    CGRect mActualScaledClipRect;
    BOOL mDrawingIntoPDF;
    BOOL mIsPrinting;
    CGContextRef mReusableBitmapContext;
    CGRect mReusableBounds;
    CGRect mReusableIntegralBounds;
    CGRect mReusableActualScaledClipRect;
    CGSize mReusableScaledImageSize;
    id /* CDUnknownBlockType */ mPostRenderAction;
}

@property(readonly, nonatomic) TSDCanvas *canvas; // @synthesize canvas=mCanvas;
@property(nonatomic) BOOL isPrinting; // @synthesize isPrinting=mIsPrinting;
@property(nonatomic) BOOL shouldReuseBitmapContext; // @synthesize shouldReuseBitmapContext=mShouldReuseBitmapContext;
@property(nonatomic) BOOL imageMustHaveEvenDimensions; // @synthesize imageMustHaveEvenDimensions=mImageMustHaveEvenDimensions;
@property(nonatomic) BOOL distortedToMatch; // @synthesize distortedToMatch=mDistortedToMatch;
@property(readonly, nonatomic) CGRect actualScaledClipRect; // @synthesize actualScaledClipRect=mActualScaledClipRect;
@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(nonatomic) CGRect unscaledClipRect; // @synthesize unscaledClipRect=mUnscaledClipRect;
@property(nonatomic) CGColorRef backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property(retain, nonatomic) NSArray *infos; // @synthesize infos=mInfos;
- (CGImageRef)p_newImageInReusableContext;
- (void)p_drawPageInContext:(CGContextRef )arg1 createPage:(BOOL)arg2;
- (BOOL)p_configureCanvas;
- (BOOL)isPrintingCanvas;
- (BOOL)isCanvasDrawingIntoPDF:(id)arg1;
- (CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (id)documentRoot;
- (BOOL)drawPageInContext:(CGContextRef )arg1 createPage:(BOOL)arg2;
- (id)pdfData;
- (CGImageRef)newImage;
@property(nonatomic) CGSize maximumScaledImageSize;
@property(nonatomic) CGSize scaledImageSize;
@property(nonatomic) double viewScale;
- (void)setPostRenderAction:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;

@end

