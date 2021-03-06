/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLBaseLayerStack.h"

@class UIImage;

@interface BLRetouchLayerStack : BLBaseLayerStack
{
    struct CGContext *m_labContextRef;
    UIImage *m_maskSourceImage;
}

+ (id)layerStack;
- (id)maskSourceImage;
- (struct CGContext *)newContextForRect:(struct CGRect)fp8 inDestRect:(struct CGRect)fp24 withPadding:(float)fp40 andScale:(float)fp44;
- (double)timestamp;
- (void)dealloc;
- (int)disabledBrushTypes;
- (BOOL)haveLayerMask;
- (BOOL)readyToDraw;
- (void)setStrokesDataDictionary:(id)fp8;
- (id)strokesDataDictionary;
- (void)prepareLabBufferAsync:(BOOL)fp8 completionBlock:(id)fp(null);
- (void)prepareLabBuffer:(id)fp(null);
- (struct CGContext *)labContextRef;
- (void)setLabContextRef:(struct CGContext *)fp8;
- (void)setMaskSourceImage:(id)fp8;
- (void)setMaskSize:(struct CGSize)fp8;
- (id)init;
- (int)maxEdgeSize;

@end

