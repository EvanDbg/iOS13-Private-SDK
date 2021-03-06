//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class FPItem, FPItemID, NSArray, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface FPArchiveOperation : FPActionOperation
{
    NSArray *_items;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    id /* CDUnknownBlockType */ _archiveCompletionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ archiveCompletionBlock; // @synthesize archiveCompletionBlock=_archiveCompletionBlock;
// - (void).cxx_destruct;
- (void)didUnarchiveItemAtURL:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)presendNotifications;
- (id)_zipPathExtension;
- (void)actionMain;
- (void)_archiveURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_prepareItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_copyArchivedItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_coordinateArchivedItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2;

@end

