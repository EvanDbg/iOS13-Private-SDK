//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GenerationalStorage/GSAdditionStoring-Protocol.h>

@class GSAddition, NSDictionary, NSString;

@protocol GSAdditionStoringPrivate <GSAdditionStoring>
- (BOOL)mergeAdditionUserInfo:(GSAddition *)arg1 value:(NSDictionary *)arg2 error:(id )arg3;
- (NSDictionary *)setAdditionNameSpace:(GSAddition *)arg1 value:(NSString *)arg2 error:(id )arg3;
- (BOOL)setAdditionDisplayName:(GSAddition *)arg1 value:(NSString *)arg2 error:(id )arg3;
- (BOOL)setAdditionOptions:(GSAddition *)arg1 value:(NSUInteger)arg2 error:(id )arg3;
- (NSDictionary *)getAdditionDictionary:(GSAddition *)arg1 error:(id )arg2;
@end

