/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MRLayer.h"

@class MCContainerParallelizer, NSMutableArray, NSMutableDictionary, NSString;

@interface MRLayerParallelizer : MRLayer
{
    MCContainerParallelizer *mContainer;
    NSMutableArray *mSublayers;
    NSMutableDictionary *mSublayersForPlugs;
    NSString *mCurrentPageID;
    struct CGColor *mBackgroundColor;
    BOOL mNeedsToUpdateSublayersOrdering;
    BOOL mNeedsToUpdateBackgroundColor;
}

- (void)setCurrentPageID:(id)fp8;
- (id)currentPageID;
- (id)sublayers;
- (id)_dumpLayerWithOptions:(unsigned int)fp8;
- (id)_currentState;
- (double)phaseOutSublayerForID:(id)fp8;
- (double)phaseInSublayerForID:(id)fp8;
- (id)actionForKey:(id)fp8 recursive:(BOOL)fp12;
- (id)actionHitAtPoint:(struct CGPoint)fp8 layer:(id *)fp16;
- (id)sublayerHitAtPoint:(struct CGPoint)fp8 onlyIfHitElement:(BOOL)fp16 localPoint:(struct CGPoint *)fp20;
- (id)sublayerForPlugObjectID:(id)fp8 recursive:(BOOL)fp12;
- (id)sublayerForID:(id)fp8;
- (BOOL)hasAudio;
- (void)setNeedsUpdateForPluggerOfSublayer:(id)fp8;
- (id)patchworkAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)prerenderForTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)isInfinite;
- (BOOL)isAlphaFriendly;
- (BOOL)isOpaque;
- (BOOL)_sublayersMakesOpaque;
- (BOOL)isLoadedForTime:(double)fp8;
- (void)depreactivate:(BOOL)fp8;
- (void)deactivate;
- (void)preactivate;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(float)fp8 withDuration:(double)fp12;
- (void)synchronizeTime;
- (BOOL)hasSomethingToRender;
- (void)setPixelSize:(struct CGSize)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)cleanup;
- (id)initWithPlug:(id)fp8 andParameters:(id)fp12 inSuperlayer:(id)fp16;

@end
