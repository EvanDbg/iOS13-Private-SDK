//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSItemProvider, NSString;
@protocol NSItemProviderWriting;

@protocol WebItemProviderRegistrar <NSObject>
- (void)registerItemProvider:(NSItemProvider *)arg1;

@optional
@property(readonly, nonatomic) NSData *dataForClient;
@property(readonly, nonatomic) NSString *typeIdentifierForClient;
@property(readonly, nonatomic) id <NSItemProviderWriting> representingObjectForClient;
@end

