/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class MRContext;

@interface MRProviderPreloadOperation : _ACAccountTypeIdentifierTwitter
{
    id <MRLoadableProvider> mProvider;
    double mTime;
    MRContext *mContext;
}

- (void)main;
- (void)dealloc;
- (id)initWithProvider:(id)fp8 time:(double)fp12 andContext:(id)fp20;

@end
