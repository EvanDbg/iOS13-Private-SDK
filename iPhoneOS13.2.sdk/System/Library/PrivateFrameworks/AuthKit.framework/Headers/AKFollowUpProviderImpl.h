//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKFollowUpProvider-Protocol.h>

@interface AKFollowUpProviderImpl : NSObject <AKFollowUpProvider>
{
}

+ (id)sharedFollowUpController;
- (BOOL)clearNotificationsForItem:(id)arg1 error:(id )arg2;
- (BOOL)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id )arg2;
- (BOOL)removeFollowUpItems:(id)arg1 error:(id )arg2;
- (BOOL)addFollowUpItems:(id)arg1 error:(id )arg2;
- (BOOL)removeAllAuthKitFollowUpItems:(id )arg1;
- (id)pendingAuthKitFollowUpItems:(id )arg1;

@end

