//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface ExtDeviceLoginConfirmOKRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *loginUrl; // @dynamic loginUrl;
@property(retain, nonatomic) NSString *sessionList; // @dynamic sessionList;
@property(nonatomic) _Bool syncMsg; // @dynamic syncMsg;
@property(retain, nonatomic) NSMutableArray *unReadChatContactList; // @dynamic unReadChatContactList;

@end

