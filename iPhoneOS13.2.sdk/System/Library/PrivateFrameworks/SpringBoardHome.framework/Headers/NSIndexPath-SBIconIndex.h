//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSIndexPath (SBIconIndex)
+ (id)indexPathWithFolderIconIndex:(NSUInteger)arg1 folderListIndex:(NSUInteger)arg2 iconIndex:(NSUInteger)arg3 listIndex:(NSUInteger)arg4;
+ (id)indexPathWithIconIndex:(NSUInteger)arg1 listIndex:(NSUInteger)arg2;
- (id)sb_indexPathByAddingPathComponentWithListIndex:(NSUInteger)arg1 iconIndex:(NSUInteger)arg2;
- (id)sb_indexPathByAddingIndexPath:(id)arg1;
- (id)sb_lastIconPathComponent;
- (id)sb_indexPathByRemovingLastIconPathComponent;
- (id)sb_iconRelativePathComponents;
- (NSUInteger)sb_iconPathCount;
- (NSUInteger)sbListIndex;
- (NSUInteger)sbIconIndex;
@end

