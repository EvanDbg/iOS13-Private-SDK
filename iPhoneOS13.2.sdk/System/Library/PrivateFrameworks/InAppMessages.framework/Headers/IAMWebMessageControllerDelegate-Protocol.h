//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class IAMWebMessageController, NSDictionary, NSURL;

@protocol IAMWebMessageControllerDelegate 

@optional
- (void)webMessageControllerWebViewDidRequestAction:(IAMWebMessageController *)arg1 actionConfiguration:(NSDictionary *)arg2;
- (void)webMessageControllerWebViewDidReportEvent:(IAMWebMessageController *)arg1 event:(NSDictionary *)arg2;
- (void)webMessageControllerWebViewDidRequestOpenURL:(IAMWebMessageController *)arg1 url:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (void)webMessageControllerWebViewDidRequestClose:(IAMWebMessageController *)arg1;
@end
