//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/SGRecordId.h>

@interface SGRecordId (Internal)
+ (id)recordIdForEventWithRowId:(long long)arg1;
+ (id)recordIdForContactDetailWithRowId:(long long)arg1;
+ (id)recordIdForContactWithRowId:(long long)arg1;
+ (id)recordIdForEmailWithRowId:(long long)arg1;
+ (id)recordIdWithTableId:(unsigned char)arg1 rowId:(long long)arg2;
- (long long)rowId;
- (unsigned char)tableId;
@end

