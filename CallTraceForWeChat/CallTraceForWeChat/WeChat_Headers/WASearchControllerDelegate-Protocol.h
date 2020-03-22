//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UISearchBar, UIView;

@protocol WASearchControllerDelegate <NSObject>

@optional
- (void)waSearchBarDidEndEditting:(UISearchBar *)arg1;
- (void)waSearchBarDidBeginEditting:(UISearchBar *)arg1;
- (void)searchTextChanged:(NSString *)arg1;
- (void)didEndSearch;
- (void)willEndSearch;
- (void)willBeginSearch;
- (UIView *)getBottomView;
- (UIView *)getBlurEffectView;
@end
