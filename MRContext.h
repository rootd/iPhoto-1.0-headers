/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class EAGLContext, MRContextState, MRImage, MRImageManager, MRShader, NSMutableDictionary;

@interface MRContext : _ACAccountTypeIdentifierTwitter
{
    MRContext *mBaseContext;
    EAGLContext *mGLContext;
    struct CGPoint mPixelOffset;
    struct CGSize mPixelSize;
    int mVRAM;
    float mFieldOfViewFactor;
    float mProjectionMatrix[16];
    int mOrientation;
    id <MZMediaManagement> mAssetManager;
    MRImageManager *mImageManager;
    BOOL mIsLocalContext;
    BOOL mIsFlipped;
    BOOL mIsUsingIntelGPU;
    BOOL mIsUsingIntelGMA950;
    BOOL mPrefersSharedVRAM;
    BOOL mSupportsFragmentShaders;
    MRContextState *mOuterState;
    MRContextState *mInnerState;
    NSMutableDictionary *mVertexAttributes;
    BOOL mCurrentVBOWasUpdated;
    float mLocalAspectRatio;
    int mScissorRect[4];
    MRShader *mCurrentShader;
    MRImage *mTextureUnitImages[4];
    int mActiveTextureUnit;
    int mRenderBuffer;
    MRImage *mBlackImage;
    int _dimensionalMode;
}

- (int)dimensionalMode;
- (int)vram;
- (id)glContext;
- (BOOL)prefersSharedVRAM;
- (BOOL)isUsingIntelGMA950;
- (BOOL)isUsingIntelGPU;
- (BOOL)supportsFragmentShaders;
- (BOOL)isFlipped;
- (void)setOrientation:(int)fp8;
- (int)orientation;
- (void)setLocalAspectRatio:(float)fp8;
- (float)localAspectRatio;
- (void)setPixelSize:(struct CGSize)fp8;
- (struct CGSize)pixelSize;
- (void)setPixelOffset:(struct CGPoint)fp8;
- (struct CGPoint)pixelOffset;
- (id)imageManager;
- (void)setAssetManager:(id)fp8;
- (id)assetManager;
- (id)baseContext;
- (BOOL)supportsMirroredRepeatForImage:(id)fp8;
- (void)drawLinesFromOffset:(unsigned int)fp8 count:(unsigned int)fp12;
- (void)drawTrianglesFromOffset:(unsigned int)fp8 count:(unsigned int)fp12;
- (void)drawTriangleStripFromOffset:(unsigned int)fp8 count:(unsigned int)fp12;
- (void)uploadBuffer:(void *)fp8 withSize:(int)fp12 toVertexBuffer2D:(unsigned int)fp16;
- (void)unsetVertexAttributePointerForKey:(id)fp8;
- (void)unsetInSpriteCoordinatesPointer;
- (void)unsetTextureCoordinatesPointerOnTextureUnit:(unsigned int)fp8;
- (void)unsetColorsPointer;
- (void)unsetNormalsPointer;
- (void)unsetVertexPointer;
- (void)setVertexAttributePointer:(const float *)fp8 ofSize:(unsigned int)fp12 forKey:(id)fp16;
- (void)setInSpriteCoordinatesPointer:(const float *)fp8;
- (void)setTextureCoordinatesPointer:(const float *)fp8 onTextureUnit:(unsigned int)fp12;
- (void)setColorsPointer:(const float *)fp8;
- (void)setNormalsPointer:(const float *)fp8;
- (void)setVertex3DPointer:(const float *)fp8;
- (void)setVertex2DPointer:(const float *)fp8;
- (void)setVertexBuffer2D:(unsigned int)fp8 withFeatures:(unsigned int)fp12;
- (void)setVertexBuffer2D:(unsigned int)fp8 withStride:(unsigned int)fp12 inSpriteCoordinatesOffset:(unsigned int)fp16 texture0CoordinatesOffset:(unsigned int)fp20;
- (void)setTextureMatrix:(float [16])fp8 onTextureUnit:(unsigned int)fp12;
- (void)setNormal:(float)fp8:(float)fp12:(float)fp16;
- (void)restoreModelViewMatrix:(float [16])fp8;
- (void)composeModelViewMatrix:(float [16])fp8 saveTo:(float *)fp12;
- (void)setModelViewMatrix:(float [16])fp8 saveTo:(float *)fp12;
- (const float *)modelViewMatrix;
- (const float *)projectionMatrix;
- (void)setShaderUniformVec4:(float)fp8:(float)fp12:(float)fp16:(float)fp20 forKey:(id)fp24;
- (void)setShaderUniformVec3:(float)fp8:(float)fp12:(float)fp16 forKey:(id)fp20;
- (void)setShaderUniformVec2:(float)fp8:(float)fp12 forKey:(id)fp16;
- (void)setShaderUniformFloat:(float)fp8 forKey:(id)fp12;
- (void)setShaderUniformInt:(int)fp8 forKey:(id)fp12;
- (void)unsetShader;
- (void)setShader:(id)fp8;
- (void)_commitOuterToInner;
- (BOOL)commitShaderChange;
- (void)_updateTextureOnUnit:(unsigned int)fp8;
- (id)imageSetOnTextureUnit:(unsigned int)fp8;
- (void)unsetImage:(id)fp8 onTextureUnit:(unsigned int)fp12 state:(const CDAnonymousStruct6 *)fp16;
- (void)setImage:(id)fp8 onTextureUnit:(unsigned int)fp12 withReferenceAspectRatio:(float)fp16 state:(CDAnonymousStruct6 *)fp20;
- (void)restoreBackColor:(const float *)fp8;
- (void)setBackColorRed:(float)fp8 green:(float)fp12 blue:(float)fp16 alpha:(float)fp20 saveTo:(float *)fp24;
- (void)setBackColor:(const float *)fp8 saveTo:(float *)fp12;
- (const float *)backColor;
- (void)restoreForeColor:(const float *)fp8;
- (void)composeForeColorRed:(float)fp8 green:(float)fp12 blue:(float)fp16 alpha:(float)fp20 saveTo:(float *)fp24;
- (void)composeForeColor:(const float *)fp8 saveTo:(float *)fp12;
- (void)setForeColorRed:(float)fp8 green:(float)fp12 blue:(float)fp16 alpha:(float)fp20 saveTo:(float *)fp24;
- (void)setForeColor:(const float *)fp8 saveTo:(float *)fp12;
- (BOOL)foreColorIsOpaqueWhite;
- (const float *)foreColor;
- (void)restoreScissorRect:(const int *)fp8;
- (void)setScissorRect:(const int *)fp8 saveTo:(int *)fp12;
- (void)clear:(int)fp8;
- (void)depthTest:(BOOL)fp8;
- (void)cull:(int)fp8;
- (void)blend:(int)fp8;
- (void)setIsFlipped:(BOOL)fp8;
- (id)retainedByUserBlackImage;
- (id)retainedByUserImageByEndingLocalContext:(id)fp8 andRestoreState:(const CDAnonymousStruct8 *)fp12;
- (id)beginLocalContextWithSize:(struct CGSize)fp8 backgroundColor:(const float *)fp16 state:(CDAnonymousStruct8 *)fp20;
- (void)purgeResources:(BOOL)fp8;
- (void)flush;
- (unsigned long)maxDimension;
- (unsigned int)virtualScreen;
- (BOOL)isDoubleBuffered;
- (struct CGColorSpace *)monochromaticColorSpace;
- (struct CGColorSpace *)colorSpace;
- (float)aspectRatio;
- (struct CGSize)size;
- (void)setDimensionalMode:(int)fp8;
- (void)updateGeometry;
- (void)unlock;
- (void)lock;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)initLocalWithContext:(id)fp8 glContext:(id)fp12 andSize:(struct CGSize)fp16;
- (id)initWithEAGLContext:(id)fp8 andAssetManager:(id)fp12;

@end
