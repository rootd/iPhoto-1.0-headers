/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MRLayerSerializer.h"

@interface MRLayerSerializer (Private)
- (void)_preprecomputeAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)_prerenderSublayersAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (id)_retainedByUserRenderedImageAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)_renderAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)_precomputeAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)_setNeedsToRequestRebuildAudio:(BOOL)fp8;
- (void)_unobservePlugOnDepreactivate;
- (void)_observePlugOnPreactivate;
- (void)_unobservePlug;
- (void)_observePlug;
- (void)_unobserveSublayerOnDepreactivate:(id)fp8;
- (void)_observeSublayerOnPreactivate:(id)fp8;
- (void)_unobserveSublayer:(id)fp8;
- (void)_observeSublayer:(id)fp8;
- (void)_deleteSublayer:(id)fp8;
- (id)_createSublayerForPlug:(id)fp8;
- (void)_updateSublayersTiming;
- (void)_executeLayerCommandQueue;
@end
