/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MREffect.h"

@interface MREffect (DynamicExpansionSupport)
+ (unsigned int)typicalSlideBatchSizeForEffectID:(id)fp8;
+ (BOOL)supportsDynamicExpansionForEffectID:(id)fp8;
- (BOOL)needsMoreSlidesAtTime:(double)fp8;
- (unsigned int)firstSlideIndexStillNeededAtTime:(double)fp8;
- (unsigned int)typicalSlideBatchSize;
- (BOOL)supportsDynamicExpansion;
@end
