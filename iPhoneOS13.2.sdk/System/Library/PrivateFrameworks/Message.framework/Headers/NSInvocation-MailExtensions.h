//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <Message/EFLoggable-Protocol.h>

@interface NSInvocation (MailExtensions) <EFLoggable>
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)log;
- (BOOL)mf_shouldLogInvocation;
@end

