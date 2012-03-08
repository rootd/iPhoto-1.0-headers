/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MREffect.h"

@class MRImage, MRTextRenderer, NSDictionary, NSMutableDictionary;

@interface MREffectMagazine : MREffect
{
    NSMutableDictionary *mSprites;
    MRTextRenderer *mTextRenderer0;
    MRImage *mTextImage0;
    BOOL mIsLoaded;
    NSDictionary *mCurrentInfo;
}

- (void)beginMorphingToAspectRatio:(float)fp8 withDuration:(double)fp12;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])fp8 withMatrix:(float [16])fp12 forElement:(id)fp16;
- (id)elementHitAtPoint:(struct CGPoint)fp8 withInverseMatrix:(float [16])fp16 localPoint:(struct CGPoint *)fp20;
- (void)renderAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)_applySizeScripts:(float)fp8;
- (BOOL)prerenderForTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)isLoadedForTime:(double)fp8;
- (void)setPixelSize:(struct CGSize)fp8;
- (void)_cleanup;
- (id)initWithEffectID:(id)fp8;

@end
