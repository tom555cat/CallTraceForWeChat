//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderGetBlackListCgiDelegate-Protocol.h"

@class NSData, NSMutableArray, NSString;
@protocol WCFinderBlackListViewModelDelegate;

@interface WCFinderBlackListViewModel : NSObject <WCFinderGetBlackListCgiDelegate>
{
    _Bool _hasMoreContact;
    id <WCFinderBlackListViewModelDelegate> _delegate;
    NSMutableArray *_contactArray;
    NSData *_lastBuffer;
}

@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool hasMoreContact; // @synthesize hasMoreContact=_hasMoreContact;
@property(retain, nonatomic) NSMutableArray *contactArray; // @synthesize contactArray=_contactArray;
@property(nonatomic) __weak id <WCFinderBlackListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)revertBlackContact:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchMoreData;
- (void)fetchLocalData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
