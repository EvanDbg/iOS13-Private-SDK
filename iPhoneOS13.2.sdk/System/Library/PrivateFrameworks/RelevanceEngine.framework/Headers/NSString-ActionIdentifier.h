//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <RelevanceEngine/REContentEncodable-Protocol.h>
#import <RelevanceEngine/REDonatedActionIdentifierProviding-Protocol.h>

@interface NSString (ActionIdentifier) <REDonatedActionIdentifierProviding, REContentEncodable>
- (unsigned long long)re_actionIdentifierHashValue;
@property(readonly, nonatomic) NSString *contentEncodedString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end
