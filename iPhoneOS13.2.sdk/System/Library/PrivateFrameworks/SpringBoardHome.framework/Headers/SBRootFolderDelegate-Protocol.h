//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBIcon, SBRootFolder;

@protocol SBRootFolderDelegate <NSObject>
- (BOOL)rootFolder:(SBRootFolder *)arg1 canBounceIcon:(SBIcon *)arg2;
- (BOOL)rootFolder:(SBRootFolder *)arg1 shouldAllowBadgingForIcon:(SBIcon *)arg2;
@end

