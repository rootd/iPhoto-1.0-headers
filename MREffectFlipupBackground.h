/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MREffect.h"

@class MRImageProvider;

@interface MREffectFlipupBackground : MREffect
{
    MRImageProvider *mGradientProvider;
}

- (void)renderAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)setAttributes:(id)fp8;
- (BOOL)prerenderForTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)isLoadedForTime:(double)fp8;
- (void)setPixelSize:(struct CGSize)fp8;
- (void)_cleanup;
- (id)initWithEffectID:(id)fp8;

@end
