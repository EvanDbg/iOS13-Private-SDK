//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBaseLayoutPerformer.h>

#import <PhotosUICore/PXMutableLayoutPerformer-Protocol.h>

@class NSArray;

@interface PXIdentityLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>
{
    NSArray *children;
}

// + (CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSArray *children;
// - (void).cxx_destruct;
- (CGSize)performLayout;

@end

