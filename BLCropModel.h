/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@interface BLCropModel : _ACAccountTypeIdentifierTwitter
{
    struct CGRect m_cropRect;
    float m_cropConstrain;
    float m_angle;
    struct CGSize m_photoSize;
    struct CGSize m_nsqPhotoSize;
}

- (void)setCropConstrain:(float)fp8;
- (float)cropConstrain;
- (void)setAngle:(float)fp8;
- (float)angle;
- (struct CGSize)photoSize;
- (id)croppedImageFromImage:(id)fp8;
- (void)setCropAndAngleFromCIAffineTransform:(struct CGAffineTransform)fp8 andCICrop:(struct CGRect)fp32 forSourceSize:(struct CGSize)fp48;
- (struct CGAffineTransform)ciAffineTransformForSourceSize:(struct CGSize)fp8;
- (struct CGRect)ciCropRectForSourceSize:(struct CGSize)fp8;
- (struct CGImage *)newAspectedPreviewFromImage:(struct CGImage *)fp8 forSize:(struct CGSize)fp12 andRatio:(float)fp20 withCropRect:(struct CGRect)fp24 andOrientation:(int)fp40;
- (struct CGImage *)newAspectedPreviewFromImage:(struct CGImage *)fp8 forSize:(struct CGSize)fp12 andRatio:(float)fp20 withCropRect:(struct CGRect)fp24;
- (struct CGAffineTransform)CGAffineTransformForSize:(struct CGSize)fp8;
- (struct CGAffineTransform)CGAffineTransform;
- (struct CGImage *)newRenderedCroppedImageFromImage:(struct CGImage *)fp8 forSize:(struct CGSize)fp12 andOrientation:(int)fp20;
- (struct CGImage *)newRenderedCroppedImageFromImage:(struct CGImage *)fp8 forSize:(struct CGSize)fp12;
- (struct CGSize)croppedSizeForSize:(struct CGSize)fp8;
- (struct CGSize)croppedSize;
- (struct CGRect)normalizedIntersectionPointsForCropWithLineFromPoint:(struct CGPoint)fp8 toPoint:(struct CGPoint)fp16;
- (void)changeCropAspectRatioTo:(float)fp8 fromCropRect:(struct CGRect)fp12;
- (void)adjustEdgeForDragAction:(int)fp8 withAmount:(struct CGPoint)fp12 andLockAspectRatio:(BOOL)fp20;
- (void)translate:(float)fp8 atAngle:(float)fp12;
- (void)scale:(float)fp8 fromPoint:(struct CGPoint)fp12;
- (void)rotate:(float)fp8 fromPoint:(struct CGPoint)fp12;
- (struct CGRect)recomputeCropRect:(struct CGRect)fp8 forStraightenAngle:(float)fp24;
- (struct CGPoint)maxAllowableEdgeAdjustmentForDragAction:(int)fp8 withDirection:(struct CGPoint)fp12 andLockAspectRatio:(BOOL)fp20;
- (float)maxAllowedTranslateWithDirection:(float)fp8;
- (int)touchedImageSidesForCurrentCrop;
- (float)maxAllowedScaleFromPoint:(struct CGPoint)fp8 scaleUp:(BOOL)fp16;
- (float)maxAllowedRotationFromPoint:(struct CGPoint)fp8 counterClockwise:(BOOL)fp16;
- (void)calculateCornerPoints:(struct CGPoint *)fp8;
- (void)setCropRect:(struct CGRect)fp8;
- (struct CGRect)cropRect;
- (void)reset;
- (BOOL)hasCrop;
- (id)initWithSize:(struct CGSize)fp8;
- (id)initWithSize:(struct CGSize)fp8 andDictionary:(id)fp16;

@end
