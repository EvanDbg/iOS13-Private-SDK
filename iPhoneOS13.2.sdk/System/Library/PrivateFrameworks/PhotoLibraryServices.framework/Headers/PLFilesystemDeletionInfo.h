//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface PLFilesystemDeletionInfo : NSObject
{
    NSString *_directory;
    NSString *_filename;
    NSURL *_objectIDURI;
    NSArray *_fileURLs;
    NSUInteger _thumbnailIndex;
    NSString *_thumbnailIdentifier;
    NSString *_uuid;
    NSUInteger _timestamp;
}

+ (id)deletionInfoWithAsset:(id)arg1;
@property(readonly) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain) NSString *thumbnailIdentifier; // @synthesize thumbnailIdentifier=_thumbnailIdentifier;
@property(readonly) NSUInteger thumbnailIndex; // @synthesize thumbnailIndex=_thumbnailIndex;
@property(retain) NSArray *fileURLs; // @synthesize fileURLs=_fileURLs;
@property(readonly) NSURL *objectIDURI; // @synthesize objectIDURI=_objectIDURI;
@property(readonly) NSString *filename; // @synthesize filename=_filename;
@property(readonly) NSString *directory; // @synthesize directory=_directory;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithObjectIDURI:(id)arg1 directory:(id)arg2 filename:(id)arg3 fileURLs:(id)arg4 thumbnailIndex:(NSUInteger)arg5 thumbnailIdentifier:(id)arg6 uuid:(id)arg7 timestamp:(NSUInteger)arg8;

@end

