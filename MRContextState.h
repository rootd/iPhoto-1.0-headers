/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class NSMutableDictionary, NSString;

@interface MRContextState : _ACAccountTypeIdentifierTwitter
{
    float modelViewMatrix[16];
    float textureMatrix[4][16];
    float normal[3];
    unsigned int currentVBO;
    int currentVBOStride;
    int inSpriteCoordinatesStride;
    int textureCoordinatesStride[4];
    const float *vertex2DPointer;
    const float *vertex3DPointer;
    const float *colorsPointer;
    const float *normalsPointer;
    float *textureCoordinatesPointer[4];
    const float *inSpriteCoordinatesPointer;
    BOOL vertexArrayIsEnabled;
    BOOL foreColorArrayIsEnabled;
    BOOL normalArrayIsEnabled;
    char textureCoordinatesArrayIsEnabled[4];
    BOOL inSpriteCoordinatesArrayIsEnabled;
    float foreColor[4];
    float backColor[4];
    unsigned int textureTargetOnUnit[4];
    unsigned int textureNameOnUnit[4];
    double textureTimestampOnUnit[4];
    BOOL blendingIsEnabled;
    int blendingType;
    BOOL cullingIsEnabled;
    BOOL cullFrontfacing;
    BOOL depthTestIsEnabled;
    NSString *_shaderID;
    NSMutableDictionary *_vertexAttributes;
    NSMutableDictionary *_temporaryUniforms;
}

- (id)temporaryUniforms;
- (id)vertexAttributes;
- (void)setShaderID:(id)fp8;
- (id)shaderID;
- (void)dealloc;
- (id)init;

@end
