//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InertiaCam/ICFlowControl-Protocol.h>

@interface ICFlowControlBasic : NSObject <ICFlowControl>
{
    id /* block */ shouldBeCanceled;
    id /* block */ reportProgress;
}

@property(copy, nonatomic) id /* block */ reportProgress; // @synthesize reportProgress;
@property(copy, nonatomic) id /* block */ shouldBeCanceled; // @synthesize shouldBeCanceled;
- (_Bool)ICShouldBeCanceled;
- (void)ICReportProgress:(float)arg1;
- (id)initWithProgress:(id /* block */)arg1;
- (id)initWithCancel:(id /* block */)arg1;

@end
