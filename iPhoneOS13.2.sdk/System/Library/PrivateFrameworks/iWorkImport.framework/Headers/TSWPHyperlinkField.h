//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

@class NSString, NSURL, TSWPSelection;

__attribute__((visibility("hidden")))
@interface TSWPHyperlinkField : TSWPSmartField
{
    NSString *_urlString;
    NSString *_displayTextForChangeTracking;
}

+ (id)newURLFromURLReference:(id)arg1;
+ (id)defaultMailURL;
+ (id)defaultFileURL;
+ (id)defaultWebURL;
+ (id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2;
+ (BOOL)schemeIsValidForURLReference:(id)arg1;
+ (BOOL)schemeIsValidForURL:(id)arg1;
+ (long long)schemeFromURL:(id)arg1;
+ (id)defaultFieldStyleIdentifier;
@property(readonly, nonatomic) NSString *displayTextForChangeTracking; // @synthesize displayTextForChangeTracking=_displayTextForChangeTracking;
// - (void).cxx_destruct;
- (void)willBeRemovedFromDocumentRoot:(id)arg1 storage:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)p_performHyperlinkSelector:(SEL)arg1 onStorage:(id)arg2;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
//  (void)loadFromArchive:(const struct HyperlinkFieldArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToHyperlinkArchive:(id)arg1;
- (void)saveToUnsupportedHyperlinkArchive:(id)arg1;
//  (void)saveToArchive:(struct HyperlinkFieldArchive )arg1 archiver:(id)arg2;
@property(readonly, nonatomic) NSString *fullPath;
@property(readonly, nonatomic) NSString *filePath;
@property(readonly, nonatomic) BOOL hasDisplayText;
@property(readonly, nonatomic) NSString *urlPrefix;
@property(readonly, nonatomic) long long scheme;
@property(copy, nonatomic, setter=setURL:) NSURL *url;
- (BOOL)allowsEditing;
- (int)smartFieldKind;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 url:(id)arg2;
@property(readonly, nonatomic) NSString *displayText;
- (void)setUrlString:(id)arg1;
- (id)urlString;
@property(readonly, nonatomic) TSWPSelection *highlightSelection;

@end

