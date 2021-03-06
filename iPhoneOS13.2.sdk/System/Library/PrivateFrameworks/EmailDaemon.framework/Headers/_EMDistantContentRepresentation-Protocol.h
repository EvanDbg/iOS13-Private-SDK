//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EMContentRequestOptions, EMObjectID, NSProgress;
@protocol EMContentItemRequestDelegate;

@protocol _EMDistantContentRepresentation <NSObject>
- (void)invalidate;
- (NSProgress *)requestUpdatedRepresentationWithCompletion:(void (^)(EMContentRepresentation *, NSError *))arg1;
- (NSProgress *)requestRepresentationForItemWithObjectID:(EMObjectID *)arg1 options:(EMContentRequestOptions *)arg2 delegate:(id <EMContentItemRequestDelegate>)arg3 completionHandler:(void (^)(id <_EMDistantContentRepresentation>, EMContentRepresentation *, NSError *))arg4;
@end

