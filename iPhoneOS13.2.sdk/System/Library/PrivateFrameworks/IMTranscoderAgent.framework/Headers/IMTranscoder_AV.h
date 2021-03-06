//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMTranscoderAgent/IMTranscoder.h>

@interface IMTranscoder_AV : IMTranscoder
{
}

+ (id)supportedUTIs;
- (void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(NSUInteger)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)_transcodeVideoAsync:(id)arg1 target:(long long)arg2 maxBytes:(NSUInteger)arg3 removeAlpha:(BOOL)arg4 userInfo:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (NSUInteger)_fileSizeForTransfer:(id)arg1;
- (long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(NSUInteger)arg6;
- (BOOL)_isHEVCVideo:(id)arg1;

@end

