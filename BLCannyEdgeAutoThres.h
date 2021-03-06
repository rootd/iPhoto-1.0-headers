/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@interface BLCannyEdgeAutoThres : _ACAccountTypeIdentifierTwitter
{
    int m_cols;
    int m_rows;
    float m_sigma;
    char *m_dataPointer;
    int *m_smoothedImg;
    int *m_deriv_x;
    int *m_deriv_y;
    int *m_magnitude;
    char *m_nonMaxSup;
    float *m_anglePointer;
}

- (void)follow_edges:(char *)fp8 edgeMagPtr:(int *)fp12 lowVal:(int)fp16;
- (void)apply_hysteresis:(char *)fp8;
- (void)non_max_supp;
- (void)magnitude_x_y;
- (void)derivative_x_y;
- (void)genGaussianKernel:(float *)fp8;
- (void)gaussianSmooth;
- (void)CannyEdge:(char *)fp8 rows:(int)fp12 cols:(int)fp16 output:(char *)fp20 outputAngle:(float *)fp24;

@end

