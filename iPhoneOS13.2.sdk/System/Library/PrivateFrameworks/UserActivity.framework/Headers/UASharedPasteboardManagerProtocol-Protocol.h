//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UASharedPasteboardInfo;

@protocol UASharedPasteboardManagerProtocol <NSObject>
- (void)setReturnPasteboardDataEarlyWithCompletion:(void (^)(BOOL))arg1;
- (void)fetchRemotePasteboardForProcess:(int)arg1 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg2;
- (void)fetchRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg2;
- (void)localPasteboardTypesDidChange:(UASharedPasteboardInfo *)arg1 forGeneration:(NSUInteger)arg2;
- (void)clearLocalPasteboardInformation;
- (void)fetchRemotePasteboardStatus:(void (^)(BOOL))arg1;
@end

