//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKZipArchiver : NSObject
{
}

//  (void)noteBOMCopier:(struct _BOMCopier )arg1 succeeded:(BOOL)arg2;
//  (void)disassociateBOMCopier:(struct _BOMCopier )arg1;
//  (void)associateBOMCopier:(struct _BOMCopier )arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)zippedDataForURL:(id)arg1;
- (void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

