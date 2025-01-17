//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents;

@interface HKGraphZoomLevelConfiguration : NSObject
{
    NSDateComponents *_axisLabelIntervalComponents;
    NSDateComponents *_minorAxisIntervalComponents;
    NSDateComponents *_seriesPointIntervalComponents;
    NSDateComponents *_referencePointIntervalComponents;
    int _intendedTimeScope;
    unsigned int _majorTickCalendarUnit;
    double _seriesBlockSize;
    double _zoomLevelThreshold;
    double _canonicalSize;
    double _approximateSeriesPointInterval;
    double _todayOffsetSize;
    double _approximateAxisLabelInterval;
}

+ (id)_axisSpanDateComponentsWithTimeScope:(int)arg1;
+ (id)_snappingStartDateWithStartDate:(id)arg1 velocity:(struct CGPoint)arg2 calendar:(id)arg3 timeScope:(int)arg4 options:(int)arg5;
+ (id)activeRangeFromCadenceRange:(id)arg1 timeScope:(int)arg2 axisRange:(id)arg3 calendar:(id)arg4;
+ (id)snappingRangeForRange:(id)arg1 axisRange:(id)arg2 timeScope:(int)arg3 velocity:(struct CGPoint)arg4 calendar:(id)arg5 options:(int)arg6;
+ (id)chartVisibleRangeForTimeScope:(int)arg1 anchorDate:(id)arg2 alignment:(int)arg3 dataRange:(id)arg4 calendar:(id)arg5 firstWeekday:(int)arg6 cadence:(int)arg7;
+ (id)_fitRange:(id)arg1 toDateRange:(id)arg2 timeScope:(int)arg3 alignment:(int)arg4 calendar:(id)arg5 firstWeekday:(int)arg6 cadence:(int)arg7;
+ (id)_startDateForTimeScope:(int)arg1 forDate:(id)arg2 alignment:(int)arg3;
+ (id)chartDataRangeForTimeScope:(int)arg1 dataRange:(id)arg2 firstWeekday:(int)arg3 calendar:(id)arg4 cadence:(int)arg5;
+ (int)timeScopeForDateRange:(id)arg1;
+ (id)defaultCalendar;
+ (id)configurationForZoomLevel:(int)arg1;
+ (id)_generateConfigurationForZoomLevel:(int)arg1;
@property(readonly, nonatomic) double approximateAxisLabelInterval; // @synthesize approximateAxisLabelInterval=_approximateAxisLabelInterval;
@property(readonly, nonatomic) double todayOffsetSize; // @synthesize todayOffsetSize=_todayOffsetSize;
@property(readonly, nonatomic) double approximateSeriesPointInterval; // @synthesize approximateSeriesPointInterval=_approximateSeriesPointInterval;
@property(readonly, nonatomic) unsigned int majorTickCalendarUnit; // @synthesize majorTickCalendarUnit=_majorTickCalendarUnit;
@property(readonly, nonatomic) double canonicalSize; // @synthesize canonicalSize=_canonicalSize;
@property(readonly, nonatomic) double zoomLevelThreshold; // @synthesize zoomLevelThreshold=_zoomLevelThreshold;
@property(readonly, nonatomic) double seriesBlockSize; // @synthesize seriesBlockSize=_seriesBlockSize;
@property(readonly, nonatomic) int intendedTimeScope; // @synthesize intendedTimeScope=_intendedTimeScope;
@property(readonly, nonatomic) NSDateComponents *referencePointIntervalComponents; // @synthesize referencePointIntervalComponents=_referencePointIntervalComponents;
@property(readonly, nonatomic) NSDateComponents *seriesPointIntervalComponents; // @synthesize seriesPointIntervalComponents=_seriesPointIntervalComponents;
@property(readonly, nonatomic) NSDateComponents *minorAxisIntervalComponents; // @synthesize minorAxisIntervalComponents=_minorAxisIntervalComponents;
@property(readonly, nonatomic) NSDateComponents *axisLabelIntervalComponents; // @synthesize axisLabelIntervalComponents=_axisLabelIntervalComponents;
- (void).cxx_destruct;

@end

