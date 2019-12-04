//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDecoder-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface TSPObjectSerializationDecoder : NSObject <TSPDecoder>
{
    NSObject<OS_dispatch_data> *_encodedData;
    unsigned long long _encodedDataLength;
    NSMutableDictionary *_directory;
}

- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForLocator:(id)arg1;
- (id)initWithEncodedData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
