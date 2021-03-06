//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICQLink, NSArray, NSDictionary, NSString;

@interface _ICQFollowupSpecification : NSObject
{
    NSDictionary *_serverDict;
    BOOL _forAccountGroup;
    BOOL _zeroAction;
    NSString *_title;
    NSString *_message;
    NSString *_altMessage;
    NSArray *_links;
    NSString *_noteTitle;
    NSString *_noteMessage;
    NSString *_altNoteMessage;
    ICQLink *_noteActivateLink;
    ICQLink *_noteClearLink;
}

+ (void)clearFollowupWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isZeroAction) BOOL zeroAction; // @synthesize zeroAction=_zeroAction;
@property(nonatomic, getter=isForAccountGroup) BOOL forAccountGroup; // @synthesize forAccountGroup=_forAccountGroup;
@property(retain, nonatomic) ICQLink *noteClearLink; // @synthesize noteClearLink=_noteClearLink;
@property(retain, nonatomic) ICQLink *noteActivateLink; // @synthesize noteActivateLink=_noteActivateLink;
@property(retain, nonatomic) NSString *altNoteMessage; // @synthesize altNoteMessage=_altNoteMessage;
@property(retain, nonatomic) NSString *noteMessage; // @synthesize noteMessage=_noteMessage;
@property(retain, nonatomic) NSString *noteTitle; // @synthesize noteTitle=_noteTitle;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
@property(retain, nonatomic) NSString *altMessage; // @synthesize altMessage=_altMessage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *serverDict;
- (void)postFollowupWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postFollowupWithController:(id)arg1;
- (id)followupActionForLink:(id)arg1 needsFlow:(BOOL)arg2;
- (id)followupActionForLink:(id)arg1;
- (id)initWithServerDictionary:(id)arg1;
- (id)init;

@end

