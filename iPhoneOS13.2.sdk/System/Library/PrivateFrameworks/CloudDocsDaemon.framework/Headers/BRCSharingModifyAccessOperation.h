//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCDocumentItem, NSData, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingModifyAccessOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    BRCDocumentItem *_document;
    BOOL _allowAccess;
    NSData *_accessToken;
    NSString *_referenceIdentifier;
}

// - (void).cxx_destruct;
- (void)main;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithItem:(id)arg1 allowAccess:(BOOL)arg2;

@end

