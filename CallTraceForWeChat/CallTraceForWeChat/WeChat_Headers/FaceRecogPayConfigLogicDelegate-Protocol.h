//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FaceRecogPayConfigLogic, NSString;

@protocol FaceRecogPayConfigLogicDelegate <NSObject>

@optional
- (void)onGetPayBioConfigOK:(FaceRecogPayConfigLogic *)arg1;
- (void)onGetPayBioConfig:(FaceRecogPayConfigLogic *)arg1 failedCauseOf:(int)arg2 errMsg:(NSString *)arg3;
@end
