/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MPStyleManager.h"

@interface MPStyleManager (Internal)
- (BOOL)hasImagesForLayerID:(id)fp8 forStyleID:(id)fp12;
- (BOOL)canCancelAuthoringForStyleID:(id)fp8;
- (int)regionOfInterestPickModeForStyleID:(id)fp8;
- (id)backgroundColorLayersForStyleID:(id)fp8;
- (id)layerIDForLayerIndex:(int)fp8 ofStyle:(id)fp12;
- (int)layerIndexForLayerID:(id)fp8 ofStyle:(id)fp12;
- (double)basePeriodForLayerIndex:(int)fp8 ofStyle:(id)fp12;
- (double)defaultTransitionDurationForLayer:(int)fp8 ofStyle:(id)fp12;
- (double)defaultEffectDurationForLayer:(int)fp8 ofStyle:(id)fp12;
- (id)effectPresetIDsForLayerIndex:(int)fp8 ofStyleID:(id)fp12;
- (int)defaultAutoKenBurnsLevelForEffect:(id)fp8 withPreset:(id)fp12 ofStyle:(id)fp16;
- (float)defaultAutoKenBurnsLikelihoodForEffect:(id)fp8 withPreset:(id)fp12 ofStyle:(id)fp16;
- (int)defaultAutoKenBurnsLevelForZIndex:(int)fp8 ofStyle:(id)fp12;
- (float)defaultAutoKenBurnsLikelihoodForZIndex:(int)fp8 ofStyle:(id)fp12;
- (float)defaultFilterLikelihoodForZIndex:(int)fp8 ofStyle:(id)fp12;
- (id)defaultPositionForZIndex:(int)fp8 ofStyle:(id)fp12;
- (struct CGSize)defaultSizeForZIndex:(int)fp8 ofStyle:(id)fp12;
- (BOOL)easeKenBurnsForStyleID:(id)fp8;
@end
