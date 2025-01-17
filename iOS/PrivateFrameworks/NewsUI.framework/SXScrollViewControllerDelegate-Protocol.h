//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class SXAction, SXScrollViewController;

@protocol SXScrollViewControllerDelegate <NSObject>

@optional
- (_Bool)accessibilityShouldScrollForScrollViewController:(SXScrollViewController *)arg1;
- (_Bool)accessibilityShouldScrollForScrollViewController:(SXScrollViewController *)arg1 defaultValue:(_Bool)arg2;
- (_Bool)scrollViewController:(SXScrollViewController *)arg1 shouldOccludeAccessibilityElement:(id)arg2;
- (void)scrollViewController:(SXScrollViewController *)arg1 enableNavigation:(_Bool)arg2;
- (void)scrollViewControllerDidStopScrolling:(SXScrollViewController *)arg1;
- (void)scrollViewControllerDidScroll:(SXScrollViewController *)arg1;
- (void)scrollViewControllerDismissFullscreen:(SXScrollViewController *)arg1;
- (double)toolBarHeightForScrollViewController:(SXScrollViewController *)arg1;
- (double)navigationBarHeightForScrollViewController:(SXScrollViewController *)arg1;
- (void)scrollViewControllerRequestsFullscreen:(SXScrollViewController *)arg1;
- (void)scrollViewController:(SXScrollViewController *)arg1 triggerAction:(SXAction *)arg2;
- (void)scrollViewControllerDidLayoutContent:(SXScrollViewController *)arg1;
- (void)scrollViewControllerWillLayoutContent:(SXScrollViewController *)arg1;
@end

