//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PSPhotoSuggestions : NSObject
{
}

+ (id)photoSuggestedPeopleFromAttachments:(id)arg1;
+ (id)partitionPeopleSuggestionProxiesFromPhotosByAssetPresenceInAttachments:(id)arg1 photoSuggestedPeople:(id)arg2 contactIDsInAssets:(id)arg3;
+ (id)suggestionTemplateForPhotoContactIdWithMessages:(id)arg1 cdInteraction:(id)arg2 reason:(id)arg3 reasonType:(id)arg4;
+ (id)contactIDsByAssetPresenceInAttachments:(id)arg1;

@end
