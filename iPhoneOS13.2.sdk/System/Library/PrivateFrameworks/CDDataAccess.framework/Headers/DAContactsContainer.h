//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CDDataAccess/DAContainer-Protocol.h>

@class CNMutableContainer;

@interface DAContactsContainer : NSObject <DAContainer>
{
    BOOL _markedForDeletion;
    BOOL _markedAsDefault;
    CNMutableContainer *_mutableContainer;
}

@property(nonatomic) BOOL markedAsDefault; // @synthesize markedAsDefault=_markedAsDefault;
@property(nonatomic) BOOL markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(readonly, nonatomic) CNMutableContainer *mutableContainer; // @synthesize mutableContainer=_mutableContainer;
// - (void).cxx_destruct;
- (id)asContainer;
- (void )asSource;
- (void)updateSaveRequest:(id)arg1;
- (BOOL)isAccount;
- (BOOL)isContainer;
- (BOOL)isGroup;
- (BOOL)isContact;
- (void)markAsDefault;
- (void)markForDeletion;
- (BOOL)isSearchContainer;
- (void)setArePropertiesReadonly:(BOOL)arg1;
- (BOOL)arePropertiesReadonly;
- (void)setContentReadonly:(BOOL)arg1;
- (BOOL)isContentReadonly;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setMeContactIdentifier:(id)arg1;
- (id)meContactidentifier;
- (void)setConstraintsPath:(id)arg1;
- (id)constraintsPath;
- (void)setSyncData:(id)arg1;
- (id)syncData;
- (void)setSyncTag:(id)arg1;
- (id)syncTag;
- (void)setCTag:(id)arg1;
- (id)cTag;
- (void)setExternalIdentifier:(id)arg1;
- (id)externalIdentifier;
- (void)setType:(long long)arg1;
- (long long)type;
- (BOOL)isLocal;
- (void)setName:(id)arg1;
- (id)name;
- (id)identifier;
- (id)initWithCNContainer:(id)arg1;

@end

