//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKitUI/AKAppleIDServerUIFieldExtractor-Protocol.h>

@class RUIObjectModel;

@interface AKAppleIDObjectModelFieldExtractor : NSObject <AKAppleIDServerUIFieldExtractor>
{
    RUIObjectModel *_objectModel;
}

// - (void).cxx_destruct;
- (id)_valueForTextFieldFromPage:(id)arg1 rowID:(id)arg2;
- (id)_valueForFieldWithID:(id)arg1 inObjectModel:(id)arg2;
- (id)valueForFieldWithID:(id)arg1;
- (id)initWithObjectModel:(id)arg1;

@end

