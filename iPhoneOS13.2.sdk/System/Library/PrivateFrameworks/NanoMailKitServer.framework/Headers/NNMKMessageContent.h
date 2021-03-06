//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSData, NSString;

@interface NNMKMessageContent : NSObject <NSSecureCoding>
{
    BOOL _mainAlternativeValid;
    BOOL _hasTextData;
    BOOL _partiallyLoaded;
    NSString *_messageId;
    NSString *_externalReferenceId;
    NSData *_textData;
    NSData *_htmlContentData;
    NSUInteger _originalContentSize;
    NSArray *_attachments;
}

+ (id)classesForUnarchivingTextData;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL partiallyLoaded; // @synthesize partiallyLoaded=_partiallyLoaded;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) NSUInteger originalContentSize; // @synthesize originalContentSize=_originalContentSize;
@property(nonatomic) BOOL hasTextData; // @synthesize hasTextData=_hasTextData;
@property(retain, nonatomic) NSData *htmlContentData; // @synthesize htmlContentData=_htmlContentData;
@property(retain, nonatomic) NSData *textData; // @synthesize textData=_textData;
@property(nonatomic) BOOL mainAlternativeValid; // @synthesize mainAlternativeValid=_mainAlternativeValid;
@property(retain, nonatomic) NSString *externalReferenceId; // @synthesize externalReferenceId=_externalReferenceId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL isHTML;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

