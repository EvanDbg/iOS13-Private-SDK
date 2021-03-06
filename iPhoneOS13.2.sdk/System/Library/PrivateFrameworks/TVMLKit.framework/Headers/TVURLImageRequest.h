//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol TVImageDecrypter;

@interface TVURLImageRequest : NSObject
{
    NSURL *_url;
    NSDictionary *_headers;
    id <TVImageDecrypter> _decrypter;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id <TVImageDecrypter> decrypter; // @synthesize decrypter=_decrypter;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3;
- (id)initWithURL:(id)arg1 headers:(id)arg2 identifier:(id)arg3 decrypter:(id)arg4;

@end

