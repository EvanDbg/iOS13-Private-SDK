//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, PLLibraryServicesManager;

@protocol PLLibraryServicesDelegate
- (void)handleCompletedAllOperationsForLibraryState:(long long)arg1;
- (NSArray *)operationsForLibraryStateTransition:(long long)arg1;
- (id)initWithLibraryServicesManager:(PLLibraryServicesManager *)arg1;
@end
