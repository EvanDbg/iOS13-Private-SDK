//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SearchUITLKImageConverter : NSObject
{
}

+ (BOOL)hasTransparencyAtPoint:(CGPoint)arg1 forImage:(id)arg2;
+ (BOOL)checkTransparencyForImageAtCorners:(id)arg1;
+ (BOOL)imageIsProbablyOpaque:(id)arg1;
+ (void)executeBlock:(CDUnknownBlockType)arg1 async:(BOOL)arg2;
+ (id)imageForSFImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)imageForSFImage:(id)arg1;
+ (id)imagesForSFImages:(id)arg1;

@end

