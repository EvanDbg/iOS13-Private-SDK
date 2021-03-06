//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@interface PGGraphIngestHolidaysProcessor : NSObject <PGGraphIngestProcessor>
{
}

- (void)insertHolidaysBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 graph:(id)arg3 locale:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (void)insertHolidaysWithMomentNodes:(id)arg1 graph:(id)arg2 locale:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (BOOL)shouldRunWithGraphUpdate:(id)arg1;

@end

