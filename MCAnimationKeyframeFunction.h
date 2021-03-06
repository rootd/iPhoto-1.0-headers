/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MCAnimationKeyframe.h"

@class NSDictionary, NSString;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe
{
    double mDuration;
    NSString *mFunction;
    NSDictionary *mFunctionParameters;
    double mFunctionTimeOffset;
    double mFunctionTimeFactor;
    float mInnerEaseInControl;
    float mInnerEaseOutControl;
}

+ (id)keyframeWithFunction:(id)fp8 atTime:(double)fp12 offsetKind:(int)fp20 forDuration:(double)fp24;
- (float)innerEaseOutControl;
- (float)innerEaseInControl;
- (double)functionTimeFactor;
- (double)functionTimeOffset;
- (double)duration;
- (void)_copySelfToSnapshot:(id)fp8;
- (id)description;
- (void)setInnerEaseOutControl:(float)fp8;
- (void)setInnerEaseInControl:(float)fp8;
- (void)setFunctionTimeFactor:(double)fp8;
- (void)setFunctionTimeOffset:(double)fp8;
- (void)setFunctionParameters:(id)fp8;
- (id)functionParameters;
- (void)setFunction:(id)fp8;
- (id)function;
- (void)setDuration:(double)fp8;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)fp8;
- (id)init;

@end

