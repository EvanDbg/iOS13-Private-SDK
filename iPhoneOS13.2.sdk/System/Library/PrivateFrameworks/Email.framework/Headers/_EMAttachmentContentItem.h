//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMObject.h>

#import <Email/EFPubliclyDescribable-Protocol.h>
#import <Email/EMMutableContentItem-Protocol.h>

@class EMMailDropMetadata, NSArray, NSString;

@interface _EMAttachmentContentItem : EMObject <EFPubliclyDescribable, EMMutableContentItem, NSSecureCoding>
{
    BOOL _isAvailableLocally;
    BOOL _isSinglePagePDF;
    int _exchangeEventUID;
    NSArray *_availableRepresentations;
    NSString *_contentID;
    long long _dataTransferByteCount;
    NSString *_displayName;
    id /* CDUnknownBlockType */ _loaderBlock;
    long long _storageByteCount;
    NSString *_UTType;
    EMMailDropMetadata *_mailDropMetadata;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int exchangeEventUID;
@property(readonly, copy, nonatomic) EMMailDropMetadata *mailDropMetadata;
@property(nonatomic) BOOL isSinglePagePDF; // @synthesize isSinglePagePDF=_isSinglePagePDF;
@property(readonly, copy, nonatomic) NSString *UTType;
@property(readonly, nonatomic) long long storageByteCount;
@property(copy, nonatomic) id /* CDUnknownBlockType */ loaderBlock; // @synthesize loaderBlock=_loaderBlock;
@property(readonly, nonatomic) BOOL isAvailableLocally;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) long long dataTransferByteCount;
@property(readonly, copy, nonatomic) NSString *contentID;
@property(readonly, copy, nonatomic) NSArray *availableRepresentations;
// - (void).cxx_destruct;
- (id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestRepresentationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

