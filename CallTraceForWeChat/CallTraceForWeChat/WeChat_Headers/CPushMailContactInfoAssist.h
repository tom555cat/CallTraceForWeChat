//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PluginContactInfoAssist.h"

#import "PBMessageObserverDelegate-Protocol.h"

@interface CPushMailContactInfoAssist : PluginContactInfoAssist <PBMessageObserverDelegate>
{
    map_f8690629 m_mapPushMailCellToCellType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)openPushNoDisturbView;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSwitchPushMailOk:(unsigned int)arg1;
- (id)getPushMailErrorTitle;
- (void)showInputPwdAlert:(_Bool)arg1;
- (void)showFolderConfigPage;
- (void)reloadInstalledTableViewData;
- (void)onWrite;
- (id)getLoadingText;
- (id)getPluginIntro;
- (void)onSwitchViewOff;
- (void)onSwitchViewOn;
- (void)doSwitchPushMail:(id)arg1;
- (void)reloadPushMailTableView;
- (_Bool)isShowOpenPushMailBtn;

@end
