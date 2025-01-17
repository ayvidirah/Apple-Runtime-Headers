//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIScene.h>

#import <UIKitCore/_UIContextBinderContextCreationPolicyHolding-Protocol.h>
#import <UIKitCore/_UIFallbackEnvironment-Protocol.h>
#import <UIKitCore/_UISceneUIWindowHosting-Protocol.h>

@class FBSDisplayConfigurationRequest, FBSScene, NSArray, NSPointerArray, NSSet, NSString, UIAlertControllerStackManager, UIInputResponderController, UISceneSizeRestrictions, UIScreen, UIScreenshotService, UIStatusBarManager, UITitlebar, UITraitCollection, UIWindow, _UIBannerManager, _UICanvasDefinition, _UIContextBinder, _UISystemAppearanceManager, _UIWindowSceneMacComponent, _UIWindowSceneTouchBarCoordinator;
@protocol UICoordinateSpace, _UIDisplayInfoProviding, _UISceneMetricsCalculating;

@interface UIWindowScene : UIScene <_UIFallbackEnvironment, _UISceneUIWindowHosting, _UIContextBinderContextCreationPolicyHolding>
{
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    _UIContextBinder *_contextBinder;
    NSPointerArray *_keyWindowHistory;
    UISceneSizeRestrictions *_sizeRestrictions;
    BOOL _isPerformingSystemSnapshot;
    id <_UIDisplayInfoProviding> _displayEdgeInfoProvider;
    id <UICoordinateSpace> _coordinateSpace;
    BOOL _shouldDisableTouchCancellationOnRotation;
    BOOL _windowWasInitializedWithDefaultStoryboard;
    BOOL _didMakeKeyAndVisible;
    NSSet *_componentsWithTraitOverrides;
    struct {
        char valid;
        struct CGSize size;
        struct UIEdgeInsets contentInsets;
    } _explicitSettings;
    id <_UISceneMetricsCalculating> _metricsCalculator;
    BOOL __isKeyWindowScene;
    long long _screenRequestedOverscanCompensation;
    long long _avkitRequestedOverscanCompensation;
}

+ (id)_findNewKeyWindowSceneOnScreen:(id)arg1;
+ (void)_setShouldRestoreKeyWindowSceneOnActivation:(BOOL)arg1;
+ (BOOL)_shouldRestoreKeyWindowSceneOnActivation;
+ (id)_keyWindowScene;
+ (id)_placeholderWindowSceneForScreen:(id)arg1 create:(BOOL)arg2;
+ (id)_keyboardWindowSceneForScreen:(id)arg1 create:(BOOL)arg2;
+ (id)_unassociatedWindowSceneForScreen:(id)arg1 create:(BOOL)arg2;
+ (void)_updateVisibleSceneAndWindowOrderWithTest:(CDUnknownBlockType)arg1;
+ (BOOL)_hostsWindows;
+ (void)initialize;
+ (void)_registerComponentClass:(Class)arg1 withKey:(id)arg2 predicate:(id)arg3;
+ (id)_canvasForScene:(id)arg1;
@property(nonatomic) BOOL _isKeyWindowScene; // @synthesize _isKeyWindowScene=__isKeyWindowScene;
@property(nonatomic, getter=_avkitRequestedOverscanCompensation, setter=_setAVKitRequestedOverscanCompensation:) long long _avkitRequestedOverscanCompensation; // @synthesize _avkitRequestedOverscanCompensation;
@property(readonly, nonatomic) BOOL _isPerformingSystemSnapshot; // @synthesize _isPerformingSystemSnapshot;
- (void).cxx_destruct;
- (void)_showProgressWhenFetchingUserActivityForTypes:(id)arg1;
@property(readonly, nonatomic) NSArray *_overrideTraitCollectionForWindows;
- (id)_inheritingWindowsIncludingInvisible:(BOOL)arg1;
- (id)_windowSceneDelegate;
@property(readonly, copy) NSString *description;
- (id)_fixupEffectiveSettings:(id)arg1;
- (BOOL)_permitContextCreationForBindingDescription:(CDStruct_2a214484)arg1;
- (void)_applySnapshotSettings:(id)arg1 forActions:(CDUnknownBlockType)arg2;
- (void)_invalidateScreen;
@property(retain, nonatomic, getter=_displayConfigurationRequest, setter=_setDisplayConfigurationRequest:) FBSDisplayConfigurationRequest *_displayConfigurationRequest; // @dynamic _displayConfigurationRequest;
- (void)_setAVKitRequestedRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
@property(nonatomic, getter=_screenRequestedOverscanCompensation, setter=_setScreenRequestedOverscanCompensation:) long long _screenRequestedOverscanCompensation; // @synthesize _screenRequestedOverscanCompensation;
- (long long)_resolvedOverscanCompensation;
@property(nonatomic, getter=_screenRequestedDisplayNativePixelSize, setter=_setScreenRequestedDisplayNativePixelSize:) struct CGSize _screenRequestedDisplayNativePixelSize; // @dynamic _screenRequestedDisplayNativePixelSize;
@property(readonly, nonatomic) UISceneSizeRestrictions *sizeRestrictions;
- (void)_componentDidUpdateTraitOverrides:(id)arg1;
- (BOOL)_windowsIgnoreSceneClientOrientation;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2;
- (id)_disableTouchCancellationOnRotation;
- (void)_setShouldDisableTouchCancellationOnRotation:(BOOL)arg1;
- (unsigned long long)_currentlySupportedInterfaceOrientations;
@property(readonly, nonatomic) id <_UIDisplayInfoProviding> _displayInfoProvider;
- (double)_systemMinimumMargin;
- (struct UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets _peripheryInsets;
- (void)_setExplicitSize:(struct CGSize)arg1 contentInsets:(struct UIEdgeInsets)arg2;
- (struct CGRect)_referenceBoundsForOrientation:(long long)arg1;
- (struct CGRect)_referenceBounds;
- (void)_computeMetricsForWindows:(id)arg1 animated:(BOOL)arg2;
- (void)_computeMetrics:(BOOL)arg1;
- (void)_prepareForSuspend;
- (void)_prepareForResume;
- (void)_recycleAttachmentForWindow:(id)arg1;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 asCopy:(BOOL)arg3 stopped:(char *)arg4 withBlock:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) BOOL _canReceiveDeviceOrientationEvents;
- (id)_allWindows;
- (id)_visibleWindows;
@property(readonly, nonatomic) UIWindow *_keyWindow;
- (void)_windowDidBecomeKey:(id)arg1;
- (id)_topVisibleWindowPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)_windowIsFront:(id)arg1;
@property(readonly, nonatomic) _UIContextBinder *_contextBinder;
- (void)_makeKeyAndVisibleIfNeeded;
- (BOOL)_needsMakeKeyAndVisible;
- (void)_loadWindowWithStoryboardIfNeeded:(id)arg1;
- (void)_readySceneForConnection;
- (id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
- (void)_windowUpdatedProperties:(id)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (void)_updateVisibleWindowOrderWithTest:(CDUnknownBlockType)arg1;
- (void)_detachWindow:(id)arg1;
- (void)_attachWindow:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *_traitCollection;
@property(readonly, nonatomic) id <UICoordinateSpace> _coordinateSpace;
@property(readonly, nonatomic) long long _interfaceOrientation;
@property(readonly, nonatomic) UIScreen *_screen;
- (void)_setSystemVolumeHUDEnabled:(BOOL)arg1;
- (void)_setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2;
@property(nonatomic, getter=_keepContextAssociationInBackground, setter=_setKeepContextAssociationInBackground:) BOOL keepContextAssociationInBackground;
@property(nonatomic, setter=_setBackgroundStyle:) long long _backgroundStyle;
@property(readonly, nonatomic) NSArray *windows;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly, nonatomic) UIScreen *screen;
- (void)_invalidate;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
@property(readonly, nonatomic) UIAlertControllerStackManager *_alertControllerStackManager;
- (id)canvasToolbar;
- (id)_componentForKey:(id)arg1;
- (void)_unregisterComponentForKey:(id)arg1;
- (void)_registerComponent:(id)arg1 forKey:(id)arg2;
- (void)_unregisterSceneActionsHandler:(id)arg1;
- (void)_registerSceneActionsHandler:(id)arg1 forKey:(id)arg2;
- (void)_unregisterSettingsDiffActionsForKey:(id)arg1;
- (void)_registerSettingsDiffActions:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic, getter=_scene) FBSScene *scene;
@property(readonly, nonatomic) _UICanvasDefinition *_definition;
@property(readonly, nonatomic, getter=isKeyCanvas) BOOL keyCanvas;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) UIStatusBarManager *statusBarManager;
@property(readonly, nonatomic) _UISystemAppearanceManager *_systemAppearanceManager;
@property(readonly, nonatomic) UIInputResponderController *inputResponderController;
- (id)_screenshotServiceIfPresent;
@property(readonly, nonatomic) UIScreenshotService *screenshotService;
- (id)_fallbackTraitCollection;
- (void)unregisterFallbackTouchBarProvider:(id)arg1;
- (void)registerFallbackTouchBarProvider:(id)arg1;
@property(readonly, nonatomic) _UIWindowSceneTouchBarCoordinator *_touchBarCoordinator;
@property(readonly, nonatomic) UITitlebar *titlebar;
@property(readonly, nonatomic, getter=_bannerManager) _UIBannerManager *_bannerManager;
@property(readonly, nonatomic) _UIWindowSceneMacComponent *_macComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

