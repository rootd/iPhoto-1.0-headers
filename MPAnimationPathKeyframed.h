/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MPAnimationPath.h"

@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath
{
    NSMutableSet *_keyframes;
}

+ (id)animationPath;
- (double)relativeTimeForKeyframe:(id)fp8;
- (id)parent;
- (id)createKeyframeWithFunction:(id)fp8 atTime:(double)fp12 offsetType:(int)fp20 forDuration:(double)fp24;
- (id)createKeyframeWithFunction:(id)fp8 atTime:(double)fp12 forDuration:(double)fp20;
- (id)createKeyframeWithVector:(id)fp8 atTime:(double)fp12 offsetType:(int)fp20;
- (id)createKeyframeWithVector:(id)fp8 atTime:(double)fp12;
- (id)createKeyframeWithPoint:(struct CGPoint)fp8 atTime:(double)fp16 offsetType:(int)fp24;
- (id)createKeyframeWithPoint:(struct CGPoint)fp8 atTime:(double)fp16;
- (id)createKeyframeWithScalar:(float)fp8 atTime:(double)fp12 offsetType:(int)fp20;
- (id)createKeyframeWithScalar:(float)fp8 atTime:(double)fp12;
- (void)removeAllKeyframes;
- (void)removeKeyframes:(id)fp8;
- (void)removeKeyframe:(id)fp8;
- (void)addKeyframes:(id)fp8;
- (void)addKeyframe:(id)fp8;
- (id)orderedKeyframes;
- (id)keyframes;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)dealloc;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)init;

@end
