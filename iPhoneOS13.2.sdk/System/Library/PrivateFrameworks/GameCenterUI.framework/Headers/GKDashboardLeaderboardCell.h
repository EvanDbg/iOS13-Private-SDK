//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GKLeaderboard, GKLeaderboardSet, NSString, UIColor, UIImageView, UILabel, UIView;

@interface GKDashboardLeaderboardCell : UICollectionViewCell
{
    NSString *_bundleIdentifier;
    NSString *_imageName;
    GKLeaderboardSet *_leaderboardSet;
    GKLeaderboard *_leaderboard;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIView *_overlayView;
    UIColor *_titleLabelColor;
}

@property(retain, nonatomic) UIColor *titleLabelColor; // @synthesize titleLabelColor=_titleLabelColor;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)canBecomeFocused;
- (void)updateOverlay;
- (void)updateImage;
- (void)updateRank;
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)dealloc;
- (void)awakeFromNib;

@end

