//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

@class UIView, WAMainFrameTaskbarOperationViewController;

@interface WAMainFrameTaskBarDeleteActionWindow : MMUIWindow
{
    WAMainFrameTaskbarOperationViewController *_operationVC;
    UIView *_containerView;
}

@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WAMainFrameTaskbarOperationViewController *operationVC; // @synthesize operationVC=_operationVC;
- (void).cxx_destruct;
- (void)makeKeyWindow;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)init;

@end
