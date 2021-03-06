//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "MMImageLoaderObserver-Protocol.h"
#import "WCSightViewDelegate-Protocol.h"

@class CAShapeLayer, MMUIImageView, NSArray, NSMutableArray, NSString, UIBezierPath, UIButton, UIColor, UIImageView, UILabel, UIPanGestureRecognizer, UIView, WCGestureReportInfo, WCSightView;

@interface WCTimeLineAdFullCardView : WCContentItemBaseView <WCSightViewDelegate, MMImageLoaderObserver>
{
    UIImageView *weAppLogo;
    UILabel *weAppTips;
    unsigned long long m_uiGestureStartTime;
    unsigned long long m_uiGestureEndTime;
    double m_uiGestureDistance;
    NSArray *m_uiGestureTargetPoint;
    NSArray *m_uiGestureTargetPointReverse;
    UIColor *m_uiGestureColor;
    _Bool m_IsGestureAd;
    UIPanGestureRecognizer *m_uiPanGestureRecognizer;
    unsigned int m_sourceType;
    _Bool _stopCheckingTimerForMaskImg;
    _Bool _stopCheckingTimerForCoverImg;
    UIButton *_adTouchButton;
    CAShapeLayer *_slayer;
    UIBezierPath *_bPath;
    NSMutableArray *_sourcePoints;
    WCGestureReportInfo *_gestureReportInfo;
    MMUIImageView *_maskImgView;
    MMUIImageView *_coverImgView;
    WCSightView *_sightView;
    UIView *_mediaWrapperView;
}

+ (double)heightForMedia:(id)arg1;
@property(retain, nonatomic) UIView *mediaWrapperView; // @synthesize mediaWrapperView=_mediaWrapperView;
@property(retain, nonatomic) WCSightView *sightView; // @synthesize sightView=_sightView;
@property(nonatomic) _Bool stopCheckingTimerForCoverImg; // @synthesize stopCheckingTimerForCoverImg=_stopCheckingTimerForCoverImg;
@property(nonatomic) _Bool stopCheckingTimerForMaskImg; // @synthesize stopCheckingTimerForMaskImg=_stopCheckingTimerForMaskImg;
@property(retain, nonatomic) MMUIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(retain, nonatomic) MMUIImageView *maskImgView; // @synthesize maskImgView=_maskImgView;
@property(retain, nonatomic) WCGestureReportInfo *gestureReportInfo; // @synthesize gestureReportInfo=_gestureReportInfo;
@property(retain, nonatomic) NSMutableArray *sourcePoints; // @synthesize sourcePoints=_sourcePoints;
@property(retain, nonatomic) UIBezierPath *bPath; // @synthesize bPath=_bPath;
@property(retain, nonatomic) CAShapeLayer *slayer; // @synthesize slayer=_slayer;
@property(retain, nonatomic) UIButton *adTouchButton; // @synthesize adTouchButton=_adTouchButton;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)showOrHideViewWithAnimation:(id)arg1 isShow:(_Bool)arg2;
- (void)checkMaskAndCoverImgStateByTime:(double)arg1;
- (void)checkCoverImageState:(double)arg1;
- (void)checkMaskImageState:(double)arg1;
- (void)showOrHiddenMaskAndCoverImg:(_Bool)arg1 isForMaskImg:(_Bool)arg2;
- (void)onPlayEnd;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (long long)getSamplingInterval:(long long)arg1;
- (void)onGestureEnd:(struct CGPoint)arg1;
- (void)unregisterUIPanGestureRecognizer;
- (void)registerUIPanGestureRecognizer;
- (void)onUIGesureEvent:(id)arg1;
- (void)startGestureWithoutWCPlayer;
- (void)initUIGesture:(id)arg1;
- (void)dealloc;
- (void)onClick:(_Bool)arg1;
- (void)delayClearTouchButtonColor;
- (void)delayClickAdTouchButton;
- (void)onClickAdTouchButton:(id)arg1 forEvent:(id)arg2;
- (void)addButtonForItem:(id)arg1;
- (id)genRichTextViewWithFont:(double)arg1 And:(id)arg2;
- (void)genWeAppLogoAndTip;
- (void)addTitleAndDescriptionForItem:(id)arg1;
- (void)addSightViewWithMediaItem:(id)arg1;
- (void)initSightAndCoverView:(id)arg1;
- (void)addImageViewWithMediaItem:(id)arg1;
- (void)addMediaViewForItem:(id)arg1;
- (void)downloadAndSetImage:(id)arg1 isForMaskImg:(_Bool)arg2;
- (void)initMaskAndCoverImage:(id)arg1 isForMaskImg:(_Bool)arg2;
- (void)addMaskAndCoverImage:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

