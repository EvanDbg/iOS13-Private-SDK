//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSUnlockRequest-Protocol.h>

@class NSString;

@interface CSConcreteUnlockRequest : NSObject <CSUnlockRequest>
{
    BOOL wantsBiometricPresentation;
    BOOL confirmedNotInPocket;
    int source;
    int intent;
    NSString *name;
}

@property(nonatomic) BOOL confirmedNotInPocket; // @synthesize confirmedNotInPocket;
@property(nonatomic) BOOL wantsBiometricPresentation; // @synthesize wantsBiometricPresentation;
@property(nonatomic) int intent; // @synthesize intent;
@property(nonatomic) int source; // @synthesize source;
@property(copy, nonatomic) NSString *name; // @synthesize name;
// - (void).cxx_destruct;

@end

