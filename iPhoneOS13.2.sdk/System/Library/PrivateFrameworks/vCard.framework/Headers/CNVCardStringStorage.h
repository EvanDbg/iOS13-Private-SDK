//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardSerializationStorage-Protocol.h>

@class NSMutableString;

@interface CNVCardStringStorage : NSObject <CNVCardSerializationStorage>
{
    NSMutableString *_string;
}

+ (id)storageWithString:(id)arg1;
// - (void).cxx_destruct;
- (void)insertString:(id)arg1 atMarker:(id)arg2;
- (NSUInteger)estimatedDataLength;
- (id)insertionMarker;
- (NSUInteger)currentLength;
- (void)appendData:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1 usingEncoding:(NSUInteger)arg2;
- (void)appendString:(id)arg1;
- (id)initWithString:(id)arg1;

@end

