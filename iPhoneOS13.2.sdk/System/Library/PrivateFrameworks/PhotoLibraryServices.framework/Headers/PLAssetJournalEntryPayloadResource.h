//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface PLAssetJournalEntryPayloadResource : NSObject
{
    NSDictionary *_payloadAttributes;
}

@property(readonly, nonatomic) NSDictionary *payloadAttributes; // @synthesize payloadAttributes=_payloadAttributes;
- (id)description;
- (_Bool)isReferenceResource;
- (_Bool)isAdjusted;
- (_Bool)isOriginalResource;
- (short)trashedState;
@property(readonly, nonatomic) NSString *bookmarkPath;
@property(readonly, nonatomic) NSData *bookmarkData;
@property(readonly, nonatomic) NSString *volumeUuidString;
- (id)fourCharCodeName;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier;
@property(readonly, nonatomic) unsigned int recipeID;
@property(readonly, nonatomic) unsigned int version;
@property(readonly, nonatomic) unsigned int resourceType;
@property(readonly, nonatomic) unsigned int dataStoreClassID;
@property(readonly, nonatomic) unsigned long long cplType;
- (void)updateStoredResource:(id)arg1;
- (id)validatedExternalResourceWithAsset:(id)arg1 isCPLEnabled:(_Bool)arg2;
- (id)initWithPayloadAttributes:(id)arg1;

@end
