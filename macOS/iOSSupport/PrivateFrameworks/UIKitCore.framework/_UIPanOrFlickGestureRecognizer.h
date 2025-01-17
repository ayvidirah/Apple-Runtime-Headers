//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIPanGestureRecognizer.h>

@class UIDelayedAction;
@protocol _UIPanOrFlickGestureRecognizerDelegate;

@interface _UIPanOrFlickGestureRecognizer : UIPanGestureRecognizer
{
    unsigned long long _touchCount;
    BOOL _didLongPress;
    BOOL _longPressOnly;
    unsigned long long _allowedFlickDirections;
    double _maximumFlickDuration;
    double _minimumFlickDistance;
    double _minimumPressDuration;
    double _allowableMovement;
    double _responsivenessDelay;
    double _timestampBeforeGestureBegan;
    double _timestampOfLastEvent;
    UIDelayedAction *_elapsedAction;
    UIDelayedAction *_responsivenessAction;
    struct CGPoint _initialCentroidLocation;
}

@property(nonatomic) struct CGPoint initialCentroidLocation; // @synthesize initialCentroidLocation=_initialCentroidLocation;
@property(retain, nonatomic) UIDelayedAction *responsivenessAction; // @synthesize responsivenessAction=_responsivenessAction;
@property(retain, nonatomic) UIDelayedAction *elapsedAction; // @synthesize elapsedAction=_elapsedAction;
@property(nonatomic) double timestampOfLastEvent; // @synthesize timestampOfLastEvent=_timestampOfLastEvent;
@property(nonatomic) double timestampBeforeGestureBegan; // @synthesize timestampBeforeGestureBegan=_timestampBeforeGestureBegan;
@property(nonatomic) double responsivenessDelay; // @synthesize responsivenessDelay=_responsivenessDelay;
@property(readonly, nonatomic) BOOL didLongPress; // @synthesize didLongPress=_didLongPress;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(nonatomic) double minimumFlickDistance; // @synthesize minimumFlickDistance=_minimumFlickDistance;
@property(nonatomic) double maximumFlickDuration; // @synthesize maximumFlickDuration=_maximumFlickDuration;
@property(nonatomic) unsigned long long allowedFlickDirections; // @synthesize allowedFlickDirections=_allowedFlickDirections;
@property(nonatomic) BOOL longPressOnly; // @synthesize longPressOnly=_longPressOnly;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)startTimer;
- (void)clearTimer;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (void)responsivenessTimeElapsed:(id)arg1;
- (BOOL)isValidLongPress;
@property(readonly, nonatomic) unsigned long long recognizedFlickDirection;
@property(readonly, nonatomic) id <_UIPanOrFlickGestureRecognizerDelegate> panOrFlickDelegate;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

