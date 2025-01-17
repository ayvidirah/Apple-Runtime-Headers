//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, _TVImageView;

@interface _TVSwipeUpMessageView : UIView
{
    int _swipeUpMessageState;
    _Bool _enabled;
    NSString *_message;
    _TVImageView *_chevronView;
    UILabel *_messageView;
}

@property(readonly, nonatomic) UILabel *messageView; // @synthesize messageView=_messageView;
@property(readonly, nonatomic) _TVImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)_processSwipeUpMessageEvent:(int)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

