/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLRetouchEffectLayer.h"

@interface BLRetouchBlurLayer : BLRetouchEffectLayer
{
    int m_radius;
    float m_radiusScale;
    BOOL m_sharpen;
}

+ (id)layerWithBlur:(int)fp8;
+ (id)layerWithSharpen:(int)fp8;
- (void)setSharpen:(BOOL)fp8;
- (BOOL)sharpen;
- (void)setRadiusScale:(float)fp8;
- (float)radiusScale;
- (void)setRadius:(int)fp8;
- (int)radius;
- (struct CGContext *)newContextForRect:(struct CGRect)fp8 inDestRect:(struct CGRect)fp24 withPadding:(float)fp40 andScale:(float)fp44;
- (BOOL)hasAmount;
- (struct CGContext *)newContextWithEffect:(struct CGContext *)fp8;

@end

