//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, SACalendar, SAMPPlaybackInfo;

@interface SAMPMediaEntity : SADomainObject
{
}

+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaEntity;
@property(nonatomic) BOOL unplayable;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *storeId;
@property(copy, nonatomic) NSString *sortTitle;
@property(copy, nonatomic) NSString *releaseDate;
@property(copy, nonatomic) NSString *rawPlaybackInfo;
@property(retain, nonatomic) SAMPPlaybackInfo *playbackInfo;
@property(copy, nonatomic) NSString *mediaType;
@property(copy, nonatomic) NSString *externalIdentifier;
@property(nonatomic) BOOL explicit;
@property(retain, nonatomic) SACalendar *dateAdded;
@property(copy, nonatomic) NSString *brandIdentifier;
@property(copy, nonatomic) NSString *adamIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

