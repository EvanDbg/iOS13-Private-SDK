//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentSizerFactory-Protocol.h>

@class NSString;
@protocol SXDOMObjectProviding, SXEmbedService;

@interface SXEmbedComponentSizerFactory : NSObject <SXComponentSizerFactory>
{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXEmbedService> _embedService;
}

@property(readonly, nonatomic) id <SXEmbedService> embedService; // @synthesize embedService=_embedService;
@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
// - (void).cxx_destruct;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *type;
- (id)initWithDOMObjectProvider:(id)arg1 embedService:(id)arg2;

@end

