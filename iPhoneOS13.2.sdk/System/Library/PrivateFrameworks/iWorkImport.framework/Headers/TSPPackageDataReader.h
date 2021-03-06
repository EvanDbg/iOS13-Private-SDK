//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPFileCoordinatorDelegate-Protocol.h>
#import <iWorkImport/TSPPassphraseConsumer-Protocol.h>

@class NSString, NSURL, SFUCryptoKey, TSPDocumentProperties, TSPPackage;

__attribute__((visibility("hidden")))
@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate, TSPPassphraseConsumer>
{
    TSPPackage *_package;
    NSString *_lastPasswordAttempted;
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
- (CGImageRef)newCGImageAtRelativePath:(id)arg1;
- (CGImageSource )newCGImageSourceAtRelativePath:(id)arg1;
- (CGDataProvider )newCGDataProviderAtRelativePath:(id)arg1;
- (BOOL)hasDataAtRelativePath:(id)arg1;
- (BOOL)checkPassword:(id)arg1;
@property(readonly, nonatomic) SFUCryptoKey *lastDecryptionKeyAttempted;
@property(readonly, nonatomic) NSString *lastPasswordAttempted;
- (BOOL)setPassphrase:(id)arg1;
@property(readonly, nonatomic) NSString *passwordHint;
@property(readonly, nonatomic) BOOL isPasswordProtected;
@property(readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) long long packageType;
- (void)performReadUsingAccessor:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;
- (id)init;

@end

