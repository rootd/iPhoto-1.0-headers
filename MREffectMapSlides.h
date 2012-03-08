/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MREffect.h"

@class MRImageProvider, MURandom, NSMutableDictionary;

@interface MREffectMapSlides : MREffect
{
    NSMutableDictionary *mSprites;
    MRImageProvider *mBoxShadowBig;
    MRImageProvider *mBoxShadowBigBottom;
    MRImageProvider *mBoxShadowBigTop;
    MURandom *mRandom;
}

- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])fp8 withMatrix:(float [16])fp12 forElement:(id)fp16;
- (id)elementHitAtPoint:(struct CGPoint)fp8 withInverseMatrix:(float [16])fp16 localPoint:(struct CGPoint *)fp20;
- (void)_renderBigShadowForRect:(struct CGRect)fp8 scale:(float)fp24 rects:(id)fp28 atTime:(double)fp32 inContext:(id)fp40 withArguments:(id)fp44;
- (void)renderKey:(id)fp8 shadow:(id)fp12 shadowRect:(struct CGRect)fp16 size:(struct CGSize)fp32 position:(struct CGPoint)fp40 xRot:(float)fp48 tX:(float)fp52 time:(double)fp56 inContext:(id)fp64 withArguments:(id)fp68;
- (void)render4SlidesAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20 scale:(float)fp24;
- (void)render3SlidesAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20 scale:(float)fp24;
- (void)render2SlidesAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20 scale:(float)fp24;
- (void)render1SlideAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20 scale:(float)fp24;
- (void)renderAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)prerenderForTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)isLoadedForTime:(double)fp8;
- (void)setPixelSize:(struct CGSize)fp8;
- (void)_cleanup;
- (id)initWithEffectID:(id)fp8;

@end
