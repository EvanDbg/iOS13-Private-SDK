//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface TCMemoryBufferTextWriterProvider : TCXmlTextWriterProvider
{
    NSMutableData *_memoryBuffer;
}

@property(readonly, retain, nonatomic) NSMutableData *memoryBuffer; // @synthesize memoryBuffer=_memoryBuffer;
// - (void).cxx_destruct;
- (BOOL)setUp;
- (id)initWithMemoryBuffer:(id)arg1;

@end

