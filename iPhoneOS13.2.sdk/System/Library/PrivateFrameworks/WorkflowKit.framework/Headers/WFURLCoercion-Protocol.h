//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSOrderedSet, NSURL;

@protocol WFURLCoercion <NSObject>
+ (NSDictionary *)urlItem_sharingItemClassesByBundleIdentifier;
+ (void)urlItem_generateObjectRepresentations:(void (^)(NSArray *, NSError *))arg1 fromURL:(NSURL *)arg2 forClass:(Class)arg3;
+ (BOOL)urlItem_canCoerceFromURL:(NSURL *)arg1;
+ (NSOrderedSet *)urlItem_outputClasses;
@end

