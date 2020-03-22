//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderKVReporter : NSObject
{
}

+ (void)reportTimelineSeeMoreScene:(unsigned long long)arg1 action:(unsigned long long)arg2;
+ (void)reportClickTopicFeedWithScene:(unsigned long long)arg1 dataItem:(id)arg2;
+ (void)reportForwardTopicWithType:(unsigned long long)arg1 forwardResult:(unsigned long long)arg2 forwardItem:(id)arg3 forwardToUsername:(id)arg4;
+ (void)reportClickTopicWithVCName:(id)arg1 scene:(unsigned long long)arg2 dataItem:(id)arg3;
+ (void)reportMoreActionWithVCName:(id)arg1 dataScene:(long long)arg2 item:(id)arg3;
+ (void)reportFinderClickWithRedDot:(_Bool)arg1;
+ (void)reportFinderRedDotWithType:(unsigned long long)arg1 action:(unsigned long long)arg2 lastVC:(id)arg3;
+ (void)reportShowMentionListWithType:(unsigned long long)arg1 unreadCommentCount:(unsigned long long)arg2 unreadLikeCount:(unsigned long long)arg3 unreadNotifyCount:(unsigned long long)arg4 durationTime:(double)arg5 contextId:(id)arg6;
+ (void)reportSaveQRCodeToAlbum:(id)arg1;
+ (void)reportShareNameCard:(id)arg1 shareToUser:(id)arg2 nameCardUserType:(int)arg3;
+ (void)reportShowFeedCommentListWithVCName:(id)arg1 feedID:(id)arg2 finderUsername:(id)arg3 currentLikeCount:(long long)arg4 friendLikeCount:(long long)arg5 commentCount:(long long)arg6 isClickAll:(_Bool)arg7;
+ (void)reportFollowFeedWithVCName:(id)arg1 feedID:(id)arg2 finderUsername:(id)arg3 isFollow:(_Bool)arg4 currentLikeCount:(long long)arg5 friendLikeCount:(long long)arg6 commentCount:(long long)arg7;
+ (void)reportLikeCommentFeedWithVCName:(id)arg1 feedID:(id)arg2 finderUsername:(id)arg3 commentUsername:(id)arg4 isLike:(_Bool)arg5 commentIsAuthor:(_Bool)arg6 currentLikeCount:(long long)arg7 friendLikeCount:(long long)arg8 commentCount:(long long)arg9;
+ (void)reportReplyCommentFeedWithVCName:(id)arg1 feedID:(id)arg2 finderUsername:(id)arg3 replyUsername:(id)arg4 replyCommentIsAuthor:(_Bool)arg5 currentLikeCount:(long long)arg6 friendLikeCount:(long long)arg7 commentCount:(long long)arg8;
+ (void)reportCommentFeedWithVCName:(id)arg1 feedID:(id)arg2 finderUsername:(id)arg3 currentLikeCount:(long long)arg4 friendLikeCount:(long long)arg5 commentCount:(long long)arg6;
+ (void)reportLikeFeedWithVCName:(id)arg1 feedID:(id)arg2 finderUsername:(id)arg3 isLiked:(_Bool)arg4 currentLikeCount:(long long)arg5 friendLikeCount:(long long)arg6 commentCount:(long long)arg7 actionType:(unsigned long long)arg8 feedType:(unsigned long long)arg9 tag:(id)arg10 likeScene:(unsigned long long)arg11;
+ (id)getTagInfoWithItem:(id)arg1 topicCount:(unsigned long long)arg2;
+ (id)getTagInfo:(id)arg1 location:(id)arg2 totoalCount:(unsigned long long)arg3;
+ (int)ConvertCameraStateToPostVideoSourceType:(_Bool)arg1;
+ (unsigned long long)ConvertMediaTypeToPostAssetsType:(unsigned long long)arg1;
+ (id)getAssetsInfo:(id)arg1;
+ (void)reportPostScene:(int)arg1 PostState:(int)arg2 FeedID:(id)arg3 exitVCNumber:(int)arg4 videoSourceType:(int)arg5 postAssetsType:(int)arg6 assetsInfo:(id)arg7 hasAddText:(int)arg8 textLength:(int)arg9 hasAddPOI:(int)arg10 postExtLink:(id)arg11 postFromDraft:(int)arg12 tag:(id)arg13;
+ (void)reportCreateUser:(int)arg1 isSuccessState:(unsigned long long)arg2 hadAvatar:(_Bool)arg3 hadIntro:(_Bool)arg4;
+ (void)reportClickCardEnterScene:(int)arg1 cardType:(int)arg2 sourceUser:(id)arg3 feedId:(id)arg4 feedUser:(id)arg5 forwardItem:(id)arg6;
+ (unsigned long long)convertRoutineSceneToCommentScene:(unsigned long long)arg1 isFinderIdentity:(_Bool)arg2;
+ (void)reportForword:(int)arg1 forwardResult:(int)arg2 feedUsr:(id)arg3 forwardToUsr:(id)arg4 dataItem:(id)arg5 feedType:(unsigned long long)arg6 tag:(id)arg7 forwardScene:(unsigned long long)arg8;

@end
