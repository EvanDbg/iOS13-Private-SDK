//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol UserFontServicesProtocol
- (void)GSFontEnableOrDisablePersistentURLs:(NSArray *)arg1 forProfileFonts:(BOOL)arg2 enabled:(BOOL)arg3 suspend:(BOOL)arg4 withReply:(void (^)(NSArray *))arg5;
- (void)GSFontUnregisterPersistentURLs:(NSArray *)arg1 forProfileFonts:(BOOL)arg2 withReply:(void (^)(NSArray *, NSUInteger))arg3;
- (void)GSFontRegisterPersistentURLs:(NSArray *)arg1 enabled:(BOOL)arg2 forProfileFonts:(BOOL)arg3 withReply:(void (^)(NSArray *, NSUInteger))arg4;
@end

