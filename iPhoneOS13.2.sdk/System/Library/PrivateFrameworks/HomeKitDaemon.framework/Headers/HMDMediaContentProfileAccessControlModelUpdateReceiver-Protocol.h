//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDMediaContentProfileAccessControlModel;

@protocol HMDMediaContentProfileAccessControlModelUpdateReceiver <NSObject>
- (void)mediaContentProfileAccessControlModelRemoved:(HMDMediaContentProfileAccessControlModel *)arg1 completion:(void (^)(HMBAction *))arg2;
- (void)mediaContentProfileAccessControlModelUpdated:(HMDMediaContentProfileAccessControlModel *)arg1 previousModel:(HMDMediaContentProfileAccessControlModel *)arg2 completion:(void (^)(HMBAction *))arg3;
@end

