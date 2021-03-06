//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, NSThread;

@interface _ML3DatabaseConnectionWrapper : NSObject
{
    ML3DatabaseConnection *_connection;
    NSThread *_owningThread;
    NSThread *_borrowingThread;
    NSUInteger _useCount;
}

@property(nonatomic) NSUInteger useCount; // @synthesize useCount=_useCount;
@property(retain, nonatomic) NSThread *borrowingThread; // @synthesize borrowingThread=_borrowingThread;
@property(retain, nonatomic) NSThread *owningThread; // @synthesize owningThread=_owningThread;
@property(retain, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithConnection:(id)arg1;

@end

