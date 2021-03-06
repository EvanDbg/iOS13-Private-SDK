//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSString;

@interface NNMKAttachment : NSTextAttachment <NSSecureCoding>
{
    NSString *_url;
    NSString *_contentId;
    NSString *_fileName;
    NSString *_mimePartNumber;
    NSUInteger _fileSize;
    NSUInteger _type;
    NSString *_messageId;
    NSUInteger _syncState;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger syncState; // @synthesize syncState=_syncState;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(nonatomic) NSUInteger fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *mimePartNumber; // @synthesize mimePartNumber=_mimePartNumber;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

