//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/UIContextMenuInteractionDelegate-Protocol.h>

@class NSArray, UIContextMenuConfiguration, UIContextMenuInteraction, _UIContextMenuStyle;
@protocol UIContextMenuInteractionCommitAnimating;

@protocol UIContextMenuInteractionDelegate_Private <UIContextMenuInteractionDelegate>

@optional
- (void)contextMenuInteractionDidEnd:(UIContextMenuInteraction *)arg1;
- (void)contextMenuInteractionWillPresent:(UIContextMenuInteraction *)arg1;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg2;
- (NSArray *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 accessoriesForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 layoutAnchor:(CDStruct_4bcfbbae)arg3;
- (_UIContextMenuStyle *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 styleForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
@end

