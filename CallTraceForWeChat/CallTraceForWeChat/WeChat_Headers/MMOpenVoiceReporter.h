//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMOpenVoiceReporter : NSObject
{
}

+ (void)resetAll;
+ (id)generateReport;
+ (void)setAudioPlayInitStatus:(int)arg1 recorderErrCode:(int)arg2 playerErrCode:(int)arg3;
+ (void)setAudioEndStatusWithRecordReadNum:(int)arg1 playVolume:(int)arg2;

@end
