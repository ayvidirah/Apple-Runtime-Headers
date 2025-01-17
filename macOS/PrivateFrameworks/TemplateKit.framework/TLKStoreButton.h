//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKSButton.h>

@class NSView, TLKLabel, TLKProminenceView;

@interface TLKStoreButton : TLKSButton
{
    BOOL _isEmphasized;
    TLKLabel *_label;
    NSView *_backgroundView;
    TLKProminenceView *_highlightView;
}

+ (Class)cellClass;
@property BOOL isEmphasized; // @synthesize isEmphasized=_isEmphasized;
@property(retain) TLKProminenceView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) TLKLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)accessibilityTitle;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)allowsVibrancy;
- (void)setBackgroundStyle:(long long)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void)setTitle:(id)arg1;
- (id)title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (void)setHighlighted:(BOOL)arg1;
- (id)init;

@end

