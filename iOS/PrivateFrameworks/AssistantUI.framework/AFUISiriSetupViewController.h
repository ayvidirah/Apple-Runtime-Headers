//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIStatusBar, UIView, _UIBackdropView;
@protocol AFUISiriSetupViewControllerDelegate;

@interface AFUISiriSetupViewController : UIViewController
{
    UIView *_contentView;
    _UIBackdropView *_backdropView;
    _Bool _backdropViewVisible;
    _Bool _visible;
    _Bool _lastTimeShown;
    id <AFUISiriSetupViewControllerDelegate> _delegate;
    UIView *_siriSetupView;
    UIStatusBar *_statusBar;
}

@property(retain, nonatomic, getter=_statusBar, setter=_setStatusBar:) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) UIView *siriSetupView; // @synthesize siriSetupView=_siriSetupView;
@property(nonatomic) _Bool lastTimeShown; // @synthesize lastTimeShown=_lastTimeShown;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <AFUISiriSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (struct CGRect)_statusBarFrame;
- (void)_removeStatusBar;
- (void)_addStatusBar;
- (void)_laterTapped:(id)arg1;
- (void)_continueTapped:(id)arg1;
- (id)dimBackdropSettings;
- (void)setBackdropVisible:(_Bool)arg1;
- (void)setFluidDismissalState:(id)arg1;
- (void)animatedDisappearanceWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animatedAppearanceWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

@end

