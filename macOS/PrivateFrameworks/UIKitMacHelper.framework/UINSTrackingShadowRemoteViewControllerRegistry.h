//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSHashTable;
@protocol UINSShadowRemoteViewController_UIResponder, UINSShadowRemoteViewController_UIWindow;

__attribute__((visibility("hidden")))
@interface UINSTrackingShadowRemoteViewControllerRegistry : NSObject
{
    NSHashTable *_shadowVCs;
    CADisplayLink *_displayLink;
    id _keyWindowNotificationObserver;
    id _firstResponderNotificationObserver;
    id <UINSShadowRemoteViewController_UIWindow> _lastKeyWindow;
    id <UINSShadowRemoteViewController_UIResponder> _lastFirstResponder;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_resampleFirstResponder:(id)arg1;
- (void)_displayLinkTick:(id)arg1;
- (void)unregisterShadowRemoteViewController:(id)arg1;
- (void)_stopTracking;
- (void)registerShadowRemoteViewController:(id)arg1;
- (void)_firstResponderDidChange;
- (id)_init;

@end

