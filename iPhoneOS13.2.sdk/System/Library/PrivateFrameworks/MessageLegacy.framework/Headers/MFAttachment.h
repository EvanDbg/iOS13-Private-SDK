//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageLegacy/EFCancelable-Protocol.h>

@class MFAttachmentManager, MFAttachmentPlaceholder, MFMimePart, NSProgress, NSString, NSURL;
@protocol MFDataConsumer;

@interface MFAttachment : NSObject <EFCancelable>
{
    MFAttachmentManager *_attachmentManager;
    BOOL _isDataAvailableLocally;
    MFAttachmentPlaceholder *_placeholder;
    NSProgress *_downloadProgress;
    BOOL _isAutoArchive;
    BOOL _wantsCompletionBlockOffMainThread;
    NSURL *_url;
    MFMimePart *_part;
    NSString *_disposition;
    id /* CDUnknownBlockType */ _fetchCompletionBlock;
    id <MFDataConsumer> _customConsumer;
    NSUInteger _lastProgressBytes;
    double _lastProgressTime;
}

@property(nonatomic) double lastProgressTime; // @synthesize lastProgressTime=_lastProgressTime;
@property(nonatomic) NSUInteger lastProgressBytes; // @synthesize lastProgressBytes=_lastProgressBytes;
@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property(nonatomic) BOOL wantsCompletionBlockOffMainThread; // @synthesize wantsCompletionBlockOffMainThread=_wantsCompletionBlockOffMainThread;
@property(retain, nonatomic) id <MFDataConsumer> customConsumer; // @synthesize customConsumer=_customConsumer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
@property(retain, nonatomic) MFAttachmentPlaceholder *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly) BOOL isAutoArchive; // @synthesize isAutoArchive=_isAutoArchive;
@property(copy, nonatomic) NSString *disposition; // @synthesize disposition=_disposition;
@property(retain, nonatomic) MFMimePart *part; // @synthesize part=_part;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (BOOL)contentTypeConformsToIWork;
- (BOOL)contentTypeConformsToPassbook;
- (BOOL)contentTypeConformsToMarkup;
- (BOOL)contentTypeConformsToProvisionment;
- (BOOL)contentTypeConformsToEventICS;
- (BOOL)contentTypeConformsToEventVCS;
- (BOOL)contentTypeConformsToEvent;
- (BOOL)contentTypeConformsToVCard;
- (BOOL)conformsToType:(id)arg1;
- (id)textEncodingGuessWithData:(id)arg1;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (id)readFromDisk;
- (void)writeToDiskWithData:(id)arg1;
- (NSUInteger)sizeOnDisk;
- (id)fileAttributes;
- (BOOL)isCached;
@property(nonatomic) NSUInteger encodedFileSize;
@property(nonatomic) NSUInteger decodedFileSize;
@property(copy, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(copy) NSString *contentID;
- (id)attachmentContentTypeForFileName:(id)arg1;
@property(readonly) NSString *fileUTType;
- (id)_fileUTTypeForFileName:(id)arg1;
@property(readonly) NSString *path; // @dynamic path;
@property(copy, nonatomic) NSString *remoteImageFileName;
@property(copy, nonatomic) NSString *fileName; // @dynamic fileName;
- (id)fileNameByStrippingZipIfNeeded:(BOOL)arg1;
- (BOOL)isImageFile;
@property(readonly) BOOL isContainedInCompose;
@property(readonly) BOOL isContainedInRFC822;
@property(readonly) NSString *inferredMimeType;
@property(readonly) BOOL isDataAvailableLocally;
- (id)_dataProvider;
- (BOOL)isAvailable;
- (id)filterICSData:(id)arg1;
- (id)filterVCSData:(id)arg1;
- (id)filterData:(id)arg1;
- (id)fileURL;
- (void)resetProgress;
- (void)updateProgressWithCurrentBytes:(NSUInteger)arg1;
@property BOOL isPlaceholder; // @dynamic isPlaceholder;
- (id)fetchPlaceholderData;
- (BOOL)isMailDropPhotoArchive;
- (BOOL)isMailDrop;
- (id)fetchDataToURL:(id )arg1;
- (void)cancel;
- (id)fetchDataSynchronously:(id )arg1 stripPrivateMetadata:(BOOL)arg2;
- (id)fetchDataSynchronously:(id )arg1;
- (id)fetchLocalData:(id )arg1 stripPrivateMetadata:(BOOL)arg2;
- (id)fetchLocalData;
- (void)fetchData;
- (id)decodeFilterWithDataConsumer:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 attachmentManager:(id)arg2;

@end

