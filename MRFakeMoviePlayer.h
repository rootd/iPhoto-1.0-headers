/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class AVAsset, AVAssetImageGenerator;

@interface MRFakeMoviePlayer : _ACAccountTypeIdentifierTwitter
{
    AVAsset *_asset;
    AVAssetImageGenerator *_imageGenerator;
    double _playTimeOffset;
    struct CGImage *_currentImage;
    double _time;
    BOOL _isPlaying;
}

- (BOOL)isPlaying;
- (double)time;
- (void)getNextImage;
- (struct CGImage *)currentImage;
- (void)setIsPlaying:(BOOL)fp8;
- (void)setTime:(double)fp8;
- (void)cleanup;
- (void)dealloc;
- (id)initWithAsset:(id)fp8 andSize:(struct CGSize)fp12;

@end
