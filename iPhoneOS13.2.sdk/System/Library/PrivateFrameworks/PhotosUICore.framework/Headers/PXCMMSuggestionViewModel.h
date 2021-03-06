//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSString, UIColor, UIImage;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMSuggestionViewModel : PXObservable
{
    BOOL _containsUnverifiedPersons;
    BOOL _highlighted;
    BOOL _selected;
    NSString *_posterTitle;
    NSString *_posterSubtitle;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    NSArray *_localizedNames;
    NSString *_subtitle;
    UIImage *_combinedFaceTileImage;
    UIColor *_opaqueAncestorBackgroundColor;
}

+ (double)faceTileImageDiameter;
@property(readonly, nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) UIColor *opaqueAncestorBackgroundColor; // @synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor;
@property(readonly, nonatomic) UIImage *combinedFaceTileImage; // @synthesize combinedFaceTileImage=_combinedFaceTileImage;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) BOOL containsUnverifiedPersons; // @synthesize containsUnverifiedPersons=_containsUnverifiedPersons;
@property(readonly, copy, nonatomic) NSArray *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property(readonly, copy, nonatomic) NSString *posterSubtitle; // @synthesize posterSubtitle=_posterSubtitle;
@property(readonly, copy, nonatomic) NSString *posterTitle; // @synthesize posterTitle=_posterTitle;
// - (void).cxx_destruct;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;

@end

