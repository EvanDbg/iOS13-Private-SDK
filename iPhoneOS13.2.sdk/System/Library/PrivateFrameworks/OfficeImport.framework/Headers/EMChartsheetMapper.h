//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EMSheetMapper.h>

@class EDChartSheet;

__attribute__((visibility("hidden")))
@interface EMChartsheetMapper : EMSheetMapper
{
    EDChartSheet *mChartSheet;
    CGRect mBox;
}

// - (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (int)preprocessHeightWithState:(id)arg1;
- (int)preprocessWidthWithState:(id)arg1;
- (int)width;
- (id)initWithChartSheet:(id)arg1 parent:(id)arg2;

@end

