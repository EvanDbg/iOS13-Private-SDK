//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@interface PLSceneClassification : PLManagedObject
{
}

+ (id)PLJunkSceneClassificationIDForLabel:(id)arg1;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)arg1 library:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 asset:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4;
- (id)debugLogDescription;

@end

