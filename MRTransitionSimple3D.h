/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MRTransition.h"

@interface MRTransitionSimple3D : MRTransition
{
    unsigned long mSubtype;
    unsigned long mDirection;
}

+ (void)initialize;
- (id)retainedByUserRenderedImageAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)renderAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)setAttributes:(id)fp8;
- (id)initWithTransitionID:(id)fp8;

@end
