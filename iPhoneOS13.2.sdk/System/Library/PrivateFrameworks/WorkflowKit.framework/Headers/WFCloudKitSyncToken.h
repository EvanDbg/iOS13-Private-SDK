//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRecord.h>

@class CKServerChangeToken, NSData, NSDate, NSOrderedSet, NSString;

@interface WFCloudKitSyncToken : WFRecord
{
    NSString *_identifier;
    NSString *_account;
    NSDate *_date;
    NSData *_serverChangeTokenData;
    NSData *_lastOrderingData;
}

+ (id)defaultPropertyValues;
@property(copy, nonatomic) NSData *lastOrderingData; // @synthesize lastOrderingData=_lastOrderingData;
@property(copy, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(copy, nonatomic) NSOrderedSet *lastOrdering;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken;

@end

