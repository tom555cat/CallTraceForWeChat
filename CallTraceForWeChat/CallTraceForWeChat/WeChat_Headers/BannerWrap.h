//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol MFBanner;

@interface BannerWrap : NSObject
{
    _Bool _editable;
    unsigned int _index;
    UIView<MFBanner> *_banner;
}

@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) UIView<MFBanner> *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;

@end
