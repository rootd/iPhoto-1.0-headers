/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@interface BLProbabalisticHoughTransform : _ACAccountTypeIdentifierTwitter
{
    int m_cols;
    int m_rows;
    float m_rho;
    float m_theta;
    int m_threshold;
    int m_lineLength;
    int m_lineGap;
    int m_numGoodLines;
}

- (void)leastSquareSmooth:(CDAnonymousStruct13 *)fp8;
- (CDAnonymousStruct13 *)houghLinesProbabalistic:(char *)fp8 rows:(int)fp12 cols:(int)fp16 numLines:(int *)fp20;

@end

