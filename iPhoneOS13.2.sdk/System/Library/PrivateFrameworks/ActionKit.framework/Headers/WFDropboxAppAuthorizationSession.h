//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFOAuth2AuthorizationSession-Protocol.h>

@class NSArray, NSString, NSURL;

@interface WFDropboxAppAuthorizationSession : NSObject <WFOAuth2AuthorizationSession>
{
    NSArray *_authorizationURLs;
    NSURL *_successURI;
    NSURL *_cancelURI;
    NSString *_clientID;
    NSString *_state;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSURL *cancelURI; // @synthesize cancelURI=_cancelURI;
@property(readonly, nonatomic) NSURL *successURI; // @synthesize successURI=_successURI;
@property(readonly, nonatomic) NSArray *authorizationURLs; // @synthesize authorizationURLs=_authorizationURLs;
// - (void).cxx_destruct;
- (BOOL)resumeSessionWithURL:(id)arg1;
- (id)initWithClientID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

