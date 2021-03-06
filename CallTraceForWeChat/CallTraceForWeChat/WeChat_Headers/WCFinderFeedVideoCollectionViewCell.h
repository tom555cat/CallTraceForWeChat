//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCFinderDownloadImageCdnMgrExt-Protocol.h"
#import "WCFinderFeedImageViewProtocol-Protocol.h"
#import "WCFinderPlayerControlViewDelegate-Protocol.h"
#import "WCPlayerDownloaderExt-Protocol.h"

@class NSString, UIImageView, UILabel, UITapGestureRecognizer, UIView, WCFinderFeedImageView, WCFinderFeedMediaWrap, WCFinderMediaInfo, WCFinderPlayerControlView, WCPlayerView;
@protocol WCFinderFeedContentMediaActionProtocol;

@interface WCFinderFeedVideoCollectionViewCell : UICollectionViewCell <WCFinderDownloadImageCdnMgrExt, WCFinderPlayerControlViewDelegate, WCFinderFeedImageViewProtocol, WCPlayerDownloaderExt, UIGestureRecognizerDelegate>
{
    _Bool _isVodeoPlayContinueInFullScreen;
    _Bool _isSilence;
    _Bool _isShowDuration;
    _Bool _isCurrentPlaying;
    id <WCFinderFeedContentMediaActionProtocol> _delegate;
    WCPlayerView *_playerView;
    WCFinderFeedImageView *_thumbImageView;
    WCFinderPlayerControlView *_playerConfigControlView;
    UIImageView *_volumnImageView;
    UILabel *_videoDurationLabel;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderMediaInfo *_mediaInfo;
    UIImageView *_retryImageView;
    UILabel *_retryLabel;
    UITapGestureRecognizer *_volumnChangeGes;
    UITapGestureRecognizer *_likeGes;
    UIView *_volumnBlurView;
    UILabel *_durationBlurView;
}

@property(retain, nonatomic) UILabel *durationBlurView; // @synthesize durationBlurView=_durationBlurView;
@property(retain, nonatomic) UIView *volumnBlurView; // @synthesize volumnBlurView=_volumnBlurView;
@property(retain, nonatomic) UITapGestureRecognizer *likeGes; // @synthesize likeGes=_likeGes;
@property(retain, nonatomic) UITapGestureRecognizer *volumnChangeGes; // @synthesize volumnChangeGes=_volumnChangeGes;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(nonatomic) _Bool isCurrentPlaying; // @synthesize isCurrentPlaying=_isCurrentPlaying;
@property(nonatomic) _Bool isShowDuration; // @synthesize isShowDuration=_isShowDuration;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) UILabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(nonatomic) _Bool isSilence; // @synthesize isSilence=_isSilence;
@property(retain, nonatomic) UIImageView *volumnImageView; // @synthesize volumnImageView=_volumnImageView;
@property(nonatomic) _Bool isVodeoPlayContinueInFullScreen; // @synthesize isVodeoPlayContinueInFullScreen=_isVodeoPlayContinueInFullScreen;
@property(retain, nonatomic) WCFinderPlayerControlView *playerConfigControlView; // @synthesize playerConfigControlView=_playerConfigControlView;
@property(retain, nonatomic) WCFinderFeedImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <WCFinderFeedContentMediaActionProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getPatchVideoIconView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnCdnVideoMoovReady:(id)arg1 WaitTime:(unsigned int)arg2 Offset:(unsigned int)arg3;
- (void)loadingRetry;
- (void)onFinderThumbDownloadFail:(id)arg1;
- (void)onFinderThumbDownloadSuccess:(id)arg1;
- (void)processIconViewVisible;
- (void)onShowBufferingView;
- (void)onVideoPlay;
- (void)onPlayToEnd;
- (double)getPlayVideoTotalTime;
- (double)getCurrentPlayVideoTime;
- (void)pauseVideoIfSupport;
- (void)changeVideoSilenctStatue:(_Bool)arg1;
- (void)stopVideoIfSupport;
- (void)onLikeFeed;
- (void)onClickVolumnChanged;
- (void)initVolumnView;
- (void)initVideoDurationLabel;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2 dataScene:(long long)arg3 dataTid:(id)arg4 dataPos:(long long)arg5 fetchFeedTime:(double)arg6;
- (void)updateImage:(id)arg1;
- (struct CGSize)contentSizeForMediaInfo:(id)arg1;
- (void)resetVideoReloadHidden:(_Bool)arg1;
- (void)initVideoReloadAction;
- (void)onClickRetry:(id)arg1;
- (id)generateConfig;
- (void)changeDataSource:(id)arg1;
- (void)initSubView;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

