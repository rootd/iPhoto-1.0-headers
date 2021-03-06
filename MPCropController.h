/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class MPDocument;

@interface MPCropController : _ACAccountTypeIdentifierTwitter
{
    id _delegate;
    MPDocument *_authoredDocument;
}

+ (void)releaseSharedController;
+ (id)sharedController;
- (void)applyCropToSlide:(id)fp8 inDocument:(id)fp12 withOptions:(id)fp16;
- (void)applyCropToSlidesInEffectContainers:(id)fp8 inDocument:(id)fp12 withOptions:(id)fp16;
- (void)_applyCropToSlidesInEffectContainersWithArguments:(id)fp8;
- (void)cropSlidesForLayerGroup:(id)fp8 inDocument:(id)fp12 withOptions:(id)fp16;
- (void)cropSlidesInDocument:(id)fp8 withOptions:(id)fp12;
- (void)batchCrop:(id)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)init;

@end

