//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SiriCoreSQLiteStatement;
@protocol SiriCoreSQLiteRecordBuilder;

@interface SiriCoreSQLiteQuery : NSObject
{
    NSString *_string;
    SiriCoreSQLiteStatement *_statement;
    NSArray *_parameters;
    id <SiriCoreSQLiteRecordBuilder> _recordBuilder;
    NSUInteger _options;
}

@property(readonly, nonatomic) NSUInteger options; // @synthesize options=_options;
@property(readonly, nonatomic) id <SiriCoreSQLiteRecordBuilder> recordBuilder; // @synthesize recordBuilder=_recordBuilder;
@property(readonly, copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) SiriCoreSQLiteStatement *statement; // @synthesize statement=_statement;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithString:(id)arg1 statement:(id)arg2 parameters:(id)arg3 recordBuilder:(id)arg4 options:(NSUInteger)arg5;

@end

