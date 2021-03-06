//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum
{
}

+ (id)keyPathsForValuesAffectingPersonID;
+ (id)entityName;
+ (id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(BOOL)arg3;
- (void)addAssetOrderedByDataTaken:(id)arg1;
- (void)enforceImageLimitIfNecessary;
- (BOOL)shouldDeleteWhenEmpty;
@property(retain, nonatomic) NSString *personID;
- (void)awakeFromInsert;

@end

