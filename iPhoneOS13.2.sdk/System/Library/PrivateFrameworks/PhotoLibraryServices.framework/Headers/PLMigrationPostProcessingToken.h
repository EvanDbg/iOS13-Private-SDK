//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLMigrationPostProcessingToken : NSObject
{
    BOOL _tokenIsKnownToBeMissing;
    PLPhotoLibraryPathManager *_pathManager;
}

// - (void).cxx_destruct;
- (int)_tokenValue;
- (void)_writeTokenValue:(int)arg1;
- (void)invalidateCachedTokenState;
- (void)removeToken;
- (void)incrementToken;
- (BOOL)isTokenValid;
- (BOOL)isTokenPresent;
- (id)_tokenFullPath;
- (void)writeToken;
- (id)initWithPathManager:(id)arg1;

@end

