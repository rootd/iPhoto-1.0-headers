/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MPEffect.h"

#import "MPActionableSupportInternal-Protocol.h"

@interface MPEffect (Internal) <MPActionableSupportInternal>
- (id)nearestLayerGroup;
- (BOOL)hasMovies;
- (void)scaleMainDuration;
- (BOOL)needsParallelizer;
- (void)setParentContainer:(id)fp8;
- (void)setContainer:(id)fp8;
- (void)setPlug:(id)fp8;
- (void)cleanup;
- (void)copyAudioPlaylist:(id)fp8;
- (void)copyAnimationPaths:(id)fp8;
- (void)copyFilters:(id)fp8;
- (void)copyTexts:(id)fp8;
- (void)copySecondarySlides:(id)fp8;
- (void)copySlides:(id)fp8;
- (void)copyStruct:(id)fp8;
- (id)nearestPlug;
- (id)parentDocument;
- (id)uuid;
- (id)objectID;
- (id)plugID;
- (void)updateEffectAttributes;
- (id)slideInformation;
- (BOOL)supportsEffectTiming;
- (id)_effectAttributes;
@end

