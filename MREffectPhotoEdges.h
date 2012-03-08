/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MREffect.h"

@class MRImage, MRImageProvider, MRTextRenderer, NSMutableDictionary;

@interface MREffectPhotoEdges : MREffect
{
    MRImageProvider *mFrameProvider;
    NSMutableDictionary *mSprites;
    MRTextRenderer *mText0Renderer;
    MRImage *mText0Image;
}

- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])fp8 withMatrix:(float [16])fp12 forElement:(id)fp16;
- (id)elementHitAtPoint:(struct CGPoint)fp8 withInverseMatrix:(float [16])fp16 localPoint:(struct CGPoint *)fp20;
- (void)renderAtTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (BOOL)prerenderForTime:(double)fp8 inContext:(id)fp16 withArguments:(id)fp20;
- (void)setAttributes:(id)fp8;
- (void)setPixelSize:(struct CGSize)fp8;
- (BOOL)isLoadedForTime:(double)fp8;
- (void)_cleanup;
- (id)initWithEffectID:(id)fp8;

@end

