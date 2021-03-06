/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MREffect.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface MREffectOrigami : MREffect
{
    NSArray *mPatchworkAtBeginning;
    NSArray *mPatchworkAtEnd;
    NSMutableDictionary *mSprites;
    NSMutableArray *mSpriteKeysWatcher;
    NSMutableArray *mAnimationTimeBounds;
    NSMutableArray *mItemInfos;
    double mDurationStretchFactor;
    float mDescriptionAspectRatio;
    float mPixelUnit;
    BOOL mIsHorizontal;
    BOOL mIsOriginallyHorizontal;
}

+ (void)initialize;
- (void)beginMorphingToAspectRatio:(float)fp8 withDuration:(double)fp12;
- (BOOL)_needsRenderingAtTime:(double)fp8 remainingStillDurationAfter:(double *)fp16;
- (double)_stretchTime:(double)fp8;
- (id)patchworkAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)renderUnfoldingFlowerAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)renderFlipDiagonalAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)renderFold4LeftAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)render1To3LeftAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)render1To3DownAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)renderFoldDownAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)renderFoldLeftAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)renderFlipDownAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)renderFlipLeftAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)renderStillAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)renderFallAtTime:(double)fp8 andProgress:(float)fp16 inContext:(id)fp20 withArguments:(id)fp24 inRect:(struct CGRect)fp28 withAttributes:(id)fp44;
- (void)setPhaseInDuration:(double)fp8 mainDuration:(double)fp16 phaseOutDuration:(double)fp24;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])fp8 withMatrix:(float [16])fp12 forElement:(id)fp16;
- (id)elementHitAtPoint:(struct CGPoint)fp8 withInverseMatrix:(float [16])fp16 localPoint:(struct CGPoint *)fp20;
- (void)renderAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)prerenderForTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)setPixelSize:(struct CGSize)fp8;
- (void)_setTargetSizeOfImageProviders;
- (void)_unload;
- (void)_cleanup;
- (id)initWithEffectID:(id)fp8;

@end

