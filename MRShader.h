/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class MRContext, NSDictionary, NSMutableDictionary, NSString;

@interface MRShader : _ACAccountTypeIdentifierTwitter
{
    NSString *mShaderID;
    NSString *mShaderKey;
    NSDictionary *mDescription;
    MRContext *mContext;
    unsigned int mProgram;
    unsigned int mVertexShader;
    unsigned int mFragmentShader;
    MRContext *mUseContext;
    float mModelViewProjectionMatrix[16];
    float mNormal[3];
    float mTextureMatrix[4][16];
    float mForeColor[4];
    int mModelViewProjectionMatrixLocation;
    int mNormalLocation;
    int mTextureMatrixLocation[4];
    int mForeColorLocation;
    NSMutableDictionary *mUniformLocations;
    NSMutableDictionary *mUniforms;
    NSMutableDictionary *mAttributeLocations;
}

- (unsigned int)program;
- (id)shaderKey;
- (id)shaderID;
- (int)locationForAttribute:(id)fp8;
- (void)setUniformVec4:(float)fp8:(float)fp12:(float)fp16:(float)fp20 forKey:(id)fp24;
- (void)setUniformVec3:(float)fp8:(float)fp12:(float)fp16 forKey:(id)fp20;
- (void)setUniformVec2:(float)fp8:(float)fp12 forKey:(id)fp16;
- (void)setUniformFloat:(float)fp8 forKey:(id)fp12;
- (void)setUniformInt:(int)fp8 forKey:(id)fp12;
- (int)_locationForUniform:(id)fp8;
- (void)setForeColor:(const float *)fp8;
- (BOOL)caresAboutForeColor;
- (void)setTextureMatrix:(float [16])fp8 onTextureUnit:(unsigned int)fp12;
- (void)setNormal:(float)fp8:(float)fp12:(float)fp16;
- (BOOL)caresAboutNormal;
- (void)setModelViewProjectionMatrix:(float [16])fp8;
- (void)setUseContext:(id)fp8;
- (void)dealloc;
- (id)initWithShaderID:(id)fp8 shaderKey:(id)fp12 description:(id)fp16 vertexShader:(unsigned int)fp20 andFragmentShader:(unsigned int)fp24 inContext:(id)fp28;

@end
