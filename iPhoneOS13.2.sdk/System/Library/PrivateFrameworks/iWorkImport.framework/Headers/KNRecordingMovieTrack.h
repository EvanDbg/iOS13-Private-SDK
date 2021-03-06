//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface KNRecordingMovieTrack : TSPObject
{
    NSArray *_movieSegments;
    BOOL _isMovieSegmentDataTrimmedToDuration;
}

@property(readonly, nonatomic) NSArray *movieSegments; // @synthesize movieSegments=_movieSegments;
// - (void).cxx_destruct;
- (id)movieTrackByReplacingAfterTime:(double)arg1 withMovieTrack:(id)arg2 trimmedMovieSegment:(id)arg3;
- (id)movieSegmentToTrimWhenReplacingAfterTime:(double)arg1 trimDuration:(out double )arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 movieSegments:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
// - (void)saveToArchive:(struct RecordingMovieTrackArchive )arg1 archiver:(id)arg2;
// - (void)loadFromArchive:(const struct RecordingMovieTrackArchive )arg1 unarchiver:(id)arg2;

@end

