/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class NSString;

@interface MPSlideInternal : _ACAccountTypeIdentifierTwitter
{
    double startTime;
    double duration;
    double audioFadeInDuration;
    double audioFadeOutDuration;
    double audioDuckInDuration;
    double audioDuckOutDuration;
    double audioDuckLevel;
    float scale;
    float rotation;
    struct CGPoint center;
    float audioVolume;
    NSString *sizingMode;
    int mediaType;
    BOOL isSecondary;
    BOOL mirrorToDuplicatePaths;
    double cachedShowTime;
    double cachedShowDuration;
}

- (void)setCachedShowDuration:(double)fp8;
- (double)cachedShowDuration;
- (void)setCachedShowTime:(double)fp8;
- (double)cachedShowTime;
- (void)setMirrorToDuplicatePaths:(BOOL)fp8;
- (BOOL)mirrorToDuplicatePaths;
- (void)setIsSecondary:(BOOL)fp8;
- (BOOL)isSecondary;
- (void)setCenter:(struct CGPoint)fp8;
- (struct CGPoint)center;
- (void)setRotation:(float)fp8;
- (float)rotation;
- (void)setScale:(float)fp8;
- (float)scale;
- (void)setSizingMode:(id)fp8;
- (id)sizingMode;
- (void)setAudioVolume:(float)fp8;
- (float)audioVolume;
- (void)setAudioDuckLevel:(double)fp8;
- (double)audioDuckLevel;
- (void)setAudioDuckOutDuration:(double)fp8;
- (double)audioDuckOutDuration;
- (void)setAudioDuckInDuration:(double)fp8;
- (double)audioDuckInDuration;
- (void)setAudioFadeOutDuration:(double)fp8;
- (double)audioFadeOutDuration;
- (void)setAudioFadeInDuration:(double)fp8;
- (double)audioFadeInDuration;
- (void)setDuration:(double)fp8;
- (double)duration;
- (void)setStartTime:(double)fp8;
- (double)startTime;
- (void)setMediaType:(int)fp8;
- (int)mediaType;
- (void)dealloc;
- (id)init;

@end
