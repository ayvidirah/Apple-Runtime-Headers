//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentLayoutAttributeDescriptor.h>

@class STTextExclusionPath;

@interface SXTextComponentLayoutAttributeDescriptor : SXComponentLayoutAttributeDescriptor
{
    STTextExclusionPath *_resultingExclusionPath;
    struct _NSRange _range;
}

+ (id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 withRange:(struct _NSRange)arg4;
@property(retain, nonatomic) STTextExclusionPath *resultingExclusionPath; // @synthesize resultingExclusionPath=_resultingExclusionPath;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;

@end

