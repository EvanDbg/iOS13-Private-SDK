//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCFileTextWriterProvider : TCXmlTextWriterProvider
{
    NSString *_filePath;
}

@property(readonly, copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
// - (void).cxx_destruct;
- (BOOL)setUp;
- (id)initWithFilePath:(id)arg1;

@end

