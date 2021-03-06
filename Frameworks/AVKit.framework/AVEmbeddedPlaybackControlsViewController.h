//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVKit/AVPlaybackControlsViewController.h>

@class AVLoadingIndicatorView, AVScrubber, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface AVEmbeddedPlaybackControlsViewController : AVPlaybackControlsViewController
{
    unsigned int _showsLoadingIndicator:1;
    unsigned int _playing:1;
    unsigned int _scrubberEnabled:1;
    NSArray *_scrubberLoadedTimeRanges;
    unsigned int _playPauseButtonEnabled:1;
    unsigned int _showsStreamingControls:1;
    unsigned int _showsMediaSelectionButton:1;
    NSString *_elapsedTimeLabelText;
    float _scrubberMinimumValue;
    float _scrubberValue;
    float _scrubberMaximumValue;
    NSString *_remainingTimeLabelText;
    UIView *_lowerControlsSubContainerView;
    UIButton *_playPauseButton;
    UILabel *_elapsedTimeLabel;
    AVScrubber *_scrubber;
    UILabel *_remainingTimeLabel;
    UIButton *_mediaSelectionButton;
    UIButton *_fullScreenButton;
    UILabel *_liveStreamingLabel;
    AVLoadingIndicatorView *_loadingIndicatorView;
    UILabel *_scrubInstructionsTitleLabel;
    UILabel *_scrubInstructionsSubtitleLabel;
    NSMutableArray *_layoutConstraints;
    NSLayoutConstraint *_controlsContainerViewHeightLayoutConstraint;
    unsigned int _showsScrubInstructions:1;
    unsigned int _controlsVisibilityHasBeenManagedBefore:1;
}

- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateViewConstraints;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)_hideScrubInstructions;
- (void)_showScrubInstructions;
- (void)_scrubberEndTracking:(id)arg1;
- (void)_scrubberBeginTracking:(id)arg1;
- (void)_manageControlsVisibility;
- (BOOL)showsMediaSelectionButton;
- (void)setShowsLoadingIndicator:(BOOL)arg1;
- (BOOL)showsLoadingIndicator;
- (BOOL)showsStreamingControls;
- (BOOL)isPlayPauseButtonEnabled;
- (id)scrubberLoadedTimeRanges;
- (BOOL)isScrubberEnabled;
- (void)updateScrubberValue:(float)arg1;
- (void)updateRemainingTimeLabel:(id)arg1;
- (void)updateElapsedTimeLabel:(id)arg1;
- (float)scrubberWidth;
- (void)setShowsMediaSelectionButton:(BOOL)arg1;
- (void)setShowsStreamingControls:(BOOL)arg1;
- (void)setPlayPauseButtonEnabled:(BOOL)arg1;
- (void)setScrubberLoadedTimeRanges:(id)arg1;
- (void)updateScrubberMaximumValue:(float)arg1;
- (void)updateScrubberMinimumValue:(float)arg1;
- (void)setScrubberEnabled:(BOOL)arg1;

@end

