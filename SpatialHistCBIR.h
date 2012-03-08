/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@interface SpatialHistCBIR : _ACAccountTypeIdentifierTwitter
{
    float m_hysteresisThresholdLow;
    float m_hysteresisThresholdHigh;
    float m_hysteresisThresholdSSD;
    float m_hysteresisThresholdSSDHigh;
    float m_hysteresisThresholdSSDCutOff;
    int m_height;
    int m_width;
    int m_bpr;
    int m_ROIPercent;
    int m_rocLevel;
    int m_textureT;
    int m_binHOG;
    _Bool m_BWImage;
    float m_data[432];
}

+ (id)spatialHistFromUIImage:(id)fp8;
- (double)subtractTimes:(unsigned long long)fp8 startTime:(unsigned long long)fp16;
- (void)rgb2hsv:(float)fp8 g:(float)fp12 b:(float)fp16 h:(float *)fp20 s:(float *)fp24 v:(float *)fp28;
- (CDAnonymousStruct4)getRawRGBData:(id)fp8 rawRGBAData:(char *)fp12;
- (CDAnonymousStruct4)nonUniformQuantization:(char *)fp8 fv:(float *)fp12;
- (CDAnonymousStruct4)smoothedSSD:(id)fp8 fv:(float *)fp12;
- (CDAnonymousStruct4)featureExtractionTexture:(char *)fp8 textureDis:(int *)fp12;
- (CDAnonymousStruct4)featureExtractionHOG:(char *)fp8 fv:(float *)fp12;
- (CDAnonymousStruct4)genFeatureVector:(id)fp8 fv:(float *)fp12;
- (void)decisionFusionAcqTimClose:(float *)fp8 auxVector:(int *)fp12 isAHit:(int *)fp16;
- (void)decisionFusionThree:(float *)fp8 auxVector:(int *)fp12 isAHit:(int *)fp16;
- (void)decisionFusionTwo:(float *)fp8 auxVector:(int *)fp12 isAHit:(int *)fp16;
- (void)decisionFusionOne:(float *)fp8 auxVector:(int *)fp12 isAHit:(int *)fp16;
- (void)decisionFusionGray:(float *)fp8 isAHit:(int *)fp12;
- (void)compareTwoFeatureVectors:(float *)fp8 fvTwo:(float *)fp12 isAHit:(int *)fp16 imageS:(float *)fp20;
- (void)compareTwoFeatureVectorsAcqTimClose:(float *)fp8 fvTwo:(float *)fp12 isAHit:(int *)fp16 imageS:(float *)fp20;
- (void)setInitValue;
- (BOOL)isEqual:(id)fp8 acquisitionTimesAreClose:(BOOL)fp12;
- (id)initWithImage:(id)fp8;

@end

