//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/INCLocalExtending-Protocol.h>
#import <WorkflowKit/INIntentHandlerProviding-Protocol.h>

@class NSString;

@interface WFBundledIntentHandlerProvider : NSObject <INCLocalExtending, INIntentHandlerProviding>
{
}

+ (id)localIntentHandlerLaunchID;
+ (id)sharedInstance;
- (id)handlerForIntent:(id)arg1;
@property(readonly, nonatomic) NSString *localExtensionIdentifier;
- (id)init;

@end

