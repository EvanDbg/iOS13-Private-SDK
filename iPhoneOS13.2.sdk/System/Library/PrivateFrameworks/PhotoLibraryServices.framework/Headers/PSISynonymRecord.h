//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PSISynonymRecord : NSObject
{
    short _category;
    NSString *_synonym;
}

@property(nonatomic) short category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *synonym; // @synthesize synonym=_synonym;
// - (void).cxx_destruct;
- (id)initWithSynonym:(id)arg1 category:(short)arg2;

@end

