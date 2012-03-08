/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "MRLoadable-Protocol.h"
#import "MRRenderable-Protocol.h"

@class MRImage, MRLayerEffect, NSDictionary, NSOperation, NSString;

@interface MREffect : _ACAccountTypeIdentifierTwitter <MRLoadable, MRRenderable>
{
    NSDictionary *mDescription;
    MRLayerEffect *mEffectLayer;
    MRImage *mOutputImage;
    NSString *mEffectID;
    NSDictionary *mAttributes;
    NSDictionary *mFlattenedAttributes;
    unsigned int mSeed;
    struct _NSRange mMultiImageSlideRange;
    BOOL mNeedsToUpdateSlides;
    BOOL mNeedsToUpdateTexts;
    BOOL mNeedsToUpdateAttributes;
    NSOperation *mPreloadOperation;
    struct CGSize mPixelSize;
    MRImage *mAccumulatedImage;
    BOOL mNeedsToUpdateAccumulatedImage;
    double mDefaultPhaseInDuration;
    double mDefaultMainDuration;
    double mDefaultPhaseOutDuration;
    double mPhaseInDuration;
    double mMainDuration;
    double mPhaseOutDuration;
}

+ (id)defaultEffectAttributesWithEffectID:(id)fp8 andSlideInformation:(id)fp12;
+ (id)customTimingWithEffectID:(id)fp8 effectAttributes:(id)fp12 slideInformation:(id)fp16 andTextInformation:(id)fp20;
+ (BOOL)hasCustomTiming;
+ (id)retainedEffectWithEffectID:(id)fp8 forEffectLayer:(id)fp12;
- (double)phaseOutDuration;
- (double)mainDuration;
- (double)phaseInDuration;
- (void)setMultiImageSlideRange:(struct _NSRange)fp8;
- (struct _NSRange)multiImageSlideRange;
- (id)accumulatedImage;
- (void)setNeedsToUpdateTexts:(BOOL)fp8;
- (BOOL)needsToUpdateTexts;
- (void)setNeedsToUpdateSlides:(BOOL)fp8;
- (BOOL)needsToUpdateSlides;
- (struct CGSize)pixelSize;
- (id)attributes;
- (id)effectID;
- (int)_maxLinesForTextElement:(id)fp8;
- (struct CGSize)_maxSizeForTextElement:(id)fp8;
- (id)patchworkAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (id)retainedByUserRenderedImageAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)renderAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)prerenderForTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)isInfinite;
- (BOOL)isAlphaFriendly;
- (BOOL)isOpaque;
- (BOOL)isNative3D;
- (void)cancelLoading;
- (void)unload;
- (void)loadWithArguments:(id)fp8;
- (void)loadForTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20 now:(BOOL)fp24;
- (BOOL)isLoadedForTime:(double)fp8;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])fp8 withMatrix:(float [16])fp12 forElement:(id)fp16;
- (id)elementHitAtPoint:(struct CGPoint)fp8 withInverseMatrix:(float [16])fp16 localPoint:(struct CGPoint *)fp20;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(float)fp8 withDuration:(double)fp12;
- (void)setAccumulatedImage:(id)fp8;
- (void)setLiveAttributes:(id)fp8;
- (void)setAttributes:(id)fp8;
- (void)setPixelSize:(struct CGSize)fp8;
- (void)_cleanup;
- (double)_computeTimeForPhaseTime:(double)fp8;
- (double)_computePhaseTimeForTime:(double)fp8;
- (void)setPhaseInDuration:(double)fp8 mainDuration:(double)fp16 phaseOutDuration:(double)fp24;
- (BOOL)isRetainedByEffectLayer;
- (void)releaseByEffectLayer:(id)fp8;
- (void)retainByEffectLayer:(id)fp8;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)initWithEffectID:(id)fp8;

@end

