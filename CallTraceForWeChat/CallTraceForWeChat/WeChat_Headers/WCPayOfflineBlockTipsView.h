//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"

@class NSString, UIButton, WCPayOfflinePayBlockLayer;
@protocol WCPayOfflinePayBlockTipsViewDelegate;

@interface WCPayOfflineBlockTipsView : MMUIView <ILinkEventExt>
{
    id <WCPayOfflinePayBlockTipsViewDelegate> _delegate;
    WCPayOfflinePayBlockLayer *_viewData;
    UIButton *_confirmBtn;
}

@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) WCPayOfflinePayBlockLayer *viewData; // @synthesize viewData=_viewData;
@property(nonatomic) __weak id <WCPayOfflinePayBlockTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)confirmBtnClick;
- (void)startCountDownBtn;
- (void)setupContentView;
- (id)initBlockTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 viewData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
