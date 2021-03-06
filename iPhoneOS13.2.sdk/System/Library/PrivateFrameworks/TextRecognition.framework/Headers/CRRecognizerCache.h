//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRImage, NSMutableDictionary;

@interface CRRecognizerCache : NSObject
{
    CRImage *_image;
    NSMutableDictionary *_initialSubRegions;
    NSMutableDictionary *_indexedSubRegions;
}

@property(retain) NSMutableDictionary *indexedSubRegions; // @synthesize indexedSubRegions=_indexedSubRegions;
@property(retain) NSMutableDictionary *initialSubRegions; // @synthesize initialSubRegions=_initialSubRegions;
@property(retain) CRImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (id)subFeatureForRegion:(CGRect)arg1;
- (void)addRegion:(CGRect)arg1 withSwt:(id)arg2;
- (id)initWithImage:(id)arg1 initialTextFeatures:(id)arg2;
- (id)initWithImage:(id)arg1;

@end

