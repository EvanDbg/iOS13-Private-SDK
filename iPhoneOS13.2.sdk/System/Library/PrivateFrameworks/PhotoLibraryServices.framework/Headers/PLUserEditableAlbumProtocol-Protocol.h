//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAlbumProtocol-Protocol.h>

@class NSArray, NSDictionary, NSIndexSet, NSMutableOrderedSet, NSString;

@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>
@property(readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
- (void)insertInternalUserEditableAssets:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2 customExportsInfo:(NSDictionary *)arg3 trimmedVideoPathInfo:(NSDictionary *)arg4 commentText:(NSString *)arg5;
@end

