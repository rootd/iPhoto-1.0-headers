/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MPAnimationKeyframe.h"

@class NSDictionary, NSString;

@interface MPAnimationKeyframeFunction : MPAnimationKeyframe
{
    double _duration;
    NSString *_function;
    NSDictionary *_functionParameters;
    double _functionTimeOffset;
    double _functionTimeFactor;
    double _innerEaseInControl;
    double _innerEaseOutControl;
}

+ (id)keyframeFunctionWithFunction:(id)fp8 atTime:(double)fp12 offsetType:(int)fp20 withDuration:(double)fp24;
+ (id)keyframeFunctionWithFunction:(id)fp8 atTime:(double)fp12 withDuration:(double)fp20;
- (double)innerEaseOutControl;
- (double)innerEaseInControl;
- (double)functionTimeFactor;
- (double)functionTimeOffset;
- (id)functionParameters;
- (id)function;
- (double)duration;
- (void)setFunctionParameters:(id)fp8;
- (void)setFunction:(id)fp8;
- (void)setInnerEaseOutControl:(double)fp8;
- (void)setInnerEaseInControl:(double)fp8;
- (void)setFunctionTimeFactor:(double)fp8;
- (void)setFunctionTimeOffset:(double)fp8;
- (void)setDuration:(double)fp8;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)initKeyframeFunctionWithFunction:(id)fp8 atTime:(double)fp12 offsetType:(int)fp20 withDuration:(double)fp24;

@end
