/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MPLayer.h"

#import "MPActionableSupportInternal-Protocol.h"

@interface MPLayer (Internal) <MPActionableSupportInternal>
- (void)configureActions;
- (void)resetStartTimes;
- (void)reconnectAllTransitions;
- (void)reconnectTransitionForEffectContainerAtIndex:(int)fp8;
- (void)updateMainDuration;
- (void)updateDurationPadding:(double)fp8;
- (void)setSkipTimeCalculations:(BOOL)fp8;
- (BOOL)skipTimeCalculations;
- (void)setMontage:(id)fp8;
- (void)setParent:(id)fp8;
- (void)setPlug:(id)fp8;
- (void)cleanup;
- (void)copyAudioPlaylist:(id)fp8;
- (void)copyActions:(id)fp8;
- (void)copyAnimationPaths:(id)fp8;
- (void)copyFilters:(id)fp8;
- (void)copyEffectContainers:(id)fp8;
- (void)copyStruct:(id)fp8;
- (id)uuid;
- (id)objectID;
- (id)plugID;
- (id)action;
@end

