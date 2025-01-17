//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, PUPhotoEditToolPickerSpec, PUViewControllerSpec, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolPickerController : UIViewController
{
    long long _layoutDirection;
    long long _style;
    NSArray *_toolButtons;
    long long _selectedToolTag;
    PUViewControllerSpec *_parentSpec;
    NSArray *_toolButtonConstraints;
    UIView *_selectionIndicatorView;
    NSArray *_selectionIndicatorConstraints;
    double _interToolSpacing;
    PUPhotoEditToolPickerSpec *_toolPickerSpec;
}

@property(retain, nonatomic) PUPhotoEditToolPickerSpec *toolPickerSpec; // @synthesize toolPickerSpec=_toolPickerSpec;
@property(nonatomic) double interToolSpacing; // @synthesize interToolSpacing=_interToolSpacing;
@property(retain, nonatomic) NSArray *selectionIndicatorConstraints; // @synthesize selectionIndicatorConstraints=_selectionIndicatorConstraints;
@property(retain, nonatomic) UIView *selectionIndicatorView; // @synthesize selectionIndicatorView=_selectionIndicatorView;
@property(retain, nonatomic) NSArray *toolButtonConstraints; // @synthesize toolButtonConstraints=_toolButtonConstraints;
@property(retain, nonatomic) PUViewControllerSpec *parentSpec; // @synthesize parentSpec=_parentSpec;
@property(nonatomic) long long selectedToolTag; // @synthesize selectedToolTag=_selectedToolTag;
@property(copy, nonatomic) NSArray *toolButtons; // @synthesize toolButtons=_toolButtons;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
- (void).cxx_destruct;
- (_Bool)_canShowWhileLocked;
- (void)updateSelectionIndicatorConstraints;
- (void)createSelectionIndicatorView;
- (void)viewDidLayoutSubviews;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithLayoutDirection:(long long)arg1 style:(long long)arg2;

@end

