/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLPromiseImage;

@interface BLTilingImageTiledView : _ACAccountTypeIdentifierTwitter
{
    struct CGRect m_apparentBounds;
    BLPromiseImage *m_promiseImage;
}

+ (Class)layerClass;
- (void)setPromiseImage:(id)fp8;
- (id)promiseImage;
- (void)drawLayer:(id)fp8 inContext:(struct CGContext *)fp12;
- (void)dealloc;
- (void)setBounds:(struct CGRect)fp8;
- (id)initWithFrame:(struct CGRect)fp8 andPromiseImage:(id)fp24;

@end

