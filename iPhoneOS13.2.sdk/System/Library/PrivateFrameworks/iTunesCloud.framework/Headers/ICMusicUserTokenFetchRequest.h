//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRemoteRequestOperation.h>


@class ICClientInfo, NSString;

@interface ICMusicUserTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding>
{
    ICClientInfo *_clientInfo;
    NSString *_developerToken;
    NSUInteger _options;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)_executeByPerformingStoreRequestWithContext:(id)arg1;
- (void)execute;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithDeveloperToken:(id)arg1 clientInfo:(id)arg2 options:(NSUInteger)arg3;

@end

