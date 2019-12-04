//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, NSString;

@interface ADExperimentResult : NSObject
{
    NSString *_experimentID;
    NSString *_appVectorVersion;
    NSString *_responseObfuscationID;
    NSMutableArray *_results;
    NSNumber *_impression;
    NSNumber *_tap;
}

@property(retain, nonatomic) NSNumber *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) NSNumber *impression; // @synthesize impression=_impression;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSString *responseObfuscationID; // @synthesize responseObfuscationID=_responseObfuscationID;
@property(retain, nonatomic) NSString *appVectorVersion; // @synthesize appVectorVersion=_appVectorVersion;
@property(retain, nonatomic) NSString *experimentID; // @synthesize experimentID=_experimentID;
- (id)dictionaryRepresentation;
- (void)addPrediction:(id)arg1 forTestWeights:(id)arg2 andLookbackPeriod:(id)arg3;
- (id)initWithExperimentID:(id)arg1;

@end
