//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, SXAction, UIContextMenuConfiguration, UIView, UIViewController;

@protocol SXActionManager <NSObject>
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForAction:(SXAction *)arg1;
- (UIContextMenuConfiguration *)contextMenuConfigurationForAction:(SXAction *)arg1;
- (void)performAction:(SXAction *)arg1 postActionHandlers:(NSArray *)arg2 sourceView:(UIView *)arg3 sourceRect:(struct CGRect)arg4 mode:(unsigned long long)arg5;
- (void)performAction:(SXAction *)arg1 postActionHandlers:(NSArray *)arg2;
@end

