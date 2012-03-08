/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@interface MRCroppingSpriteVBO : _ACAccountTypeIdentifierTwitter
{
    struct CGPoint mPosition;
    struct CGSize mHalfSize;
    float mRotation;
    struct CGRect mInnerRect;
    struct CGRect mOuterRect;
    BOOL mPreservesImageAspectRatio;
    BOOL mHitIsActive;
    BOOL mNeedsInSpriteCoordinates;
    struct CGSize mSpriteCoordinatesFactor;
    struct CGPoint mSpriteCoordinatesOffset;
    unsigned char mMeshType;
    unsigned int mVBO;
    unsigned char mMiddleOffset;
    unsigned char mOuterOffset;
    unsigned char mNumberOfVertices;
    BOOL mPositionWasUpdated;
    BOOL mRectsWereUpdated;
}

- (void)setMeshType:(unsigned char)fp8;
- (unsigned char)meshType;
- (void)setSpriteCoordinatesOffset:(struct CGPoint)fp8;
- (struct CGPoint)spriteCoordinatesOffset;
- (void)setSpriteCoordinatesFactor:(struct CGSize)fp8;
- (struct CGSize)spriteCoordinatesFactor;
- (void)setNeedsInSpriteCoordinates:(BOOL)fp8;
- (BOOL)needsInSpriteCoordinates;
- (void)setHitIsActive:(BOOL)fp8;
- (BOOL)hitIsActive;
- (void)setPreservesImageAspectRatio:(BOOL)fp8;
- (BOOL)preservesImageAspectRatio;
- (struct CGRect)outerRect;
- (struct CGRect)innerRect;
- (float)rotation;
- (struct CGSize)halfSize;
- (struct CGPoint)position;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])fp8 withMatrix:(float [16])fp12;
- (BOOL)hitAtPoint:(struct CGPoint)fp8 withInverseMatrix:(float [16])fp16 localPoint:(struct CGPoint *)fp20;
- (void)renderImageOuter:(id)fp8 inContext:(id)fp12;
- (void)renderImageMiddle:(id)fp8 inContext:(id)fp12;
- (void)renderImageInner:(id)fp8 inContext:(id)fp12;
- (void)updateVBOsInContext:(id)fp8;
- (void)getOpaquePosition:(struct CGPoint *)fp8 andHalfSize:(struct CGSize *)fp12;
- (void)setOuterRect:(struct CGRect)fp8;
- (void)setInnerRect:(struct CGRect)fp8;
- (void)fakeRenderInContext:(id)fp8 atPosition:(struct CGPoint)fp12 andSize:(struct CGSize)fp20 zRotation:(float)fp28;
- (void)reset;
- (id)initWithPosition:(struct CGPoint)fp8 size:(struct CGSize)fp16 zRotation:(float)fp24 innerRect:(struct CGRect)fp28 outerRect:(struct CGRect)fp44 context:(id)fp60;
- (id)initWithPosition:(struct CGPoint)fp8 size:(struct CGSize)fp16 zRotation:(float)fp24 innerRect:(struct CGRect)fp28 context:(id)fp44;
- (id)initWithPosition:(struct CGPoint)fp8 size:(struct CGSize)fp16 zRotation:(float)fp24 context:(id)fp28;
- (id)init;

@end
