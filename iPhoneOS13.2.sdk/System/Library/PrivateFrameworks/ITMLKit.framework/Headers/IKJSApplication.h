//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSApplication-Protocol.h>
#import <ITMLKit/_IKJSApplication-Protocol.h>
#import <ITMLKit/_IKJSApplicationProxy-Protocol.h>

@class NSDictionary;

@interface IKJSApplication : IKJSObject <NSObject, IKJSApplication, _IKJSApplicationProxy, _IKJSApplication>
{
}

@property(readonly, nonatomic) NSDictionary *traitCollection;
- (void)update;
- (void)reload:(id)arg1:(id)arg2;
- (void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3;
- (BOOL)requestDocumentWithContext:(id)arg1 response:(id)arg2;
- (void)traitCollectionChanged:(id)arg1;
- (void)updatedAppWithOptions:(id)arg1;
- (void)exitAppWithOptions:(id)arg1;
- (void)openURLWithOptions:(id)arg1;
- (void)resumeAppWithOptions:(id)arg1;
- (void)suspendAppWithOptions:(id)arg1;
- (void)launchAppWithOptions:(id)arg1;
- (id)asPrivateIKJSApplication;

@end

