//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeopleSuggester/_PSFeedbackAction.h>

@class NSString;

@interface _PSMapsFeedbackAction : _PSFeedbackAction
{
    NSString *_contactId;
    NSString *_handle;
}

+ (id)engagementWithNonSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2;
+ (id)engagementWithSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, copy, nonatomic) NSString *contactId; // @synthesize contactId=_contactId;
- (id)initWithContactIdentifier:(id)arg1 handle:(id)arg2 type:(long long)arg3;

@end
