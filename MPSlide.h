/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "MPAnimationSupport-Protocol.h"
#import "MPFilterSupport-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCSlide, MPFrame, MPLayerGroup, MPSlideInternal, NSMutableArray, NSMutableDictionary, NSObject<MPEffectSupport>, NSString;

@interface MPSlide : _ACAccountTypeIdentifierTwitter <NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport>
{
    MPFrame *_frame;
    NSMutableDictionary *_attributes;
    NSString *_path;
    MPLayerGroup *_layerGroup;
    NSMutableArray *_filters;
    NSMutableDictionary *_animationPaths;
    MCSlide *_slide;
    NSObject<MPEffectSupport> *_parent;
    MPSlideInternal *_internal;
}

+ (id)slideWithPath:(id)fp8;
+ (id)slide;
- (void)setUserInfoAttribute:(id)fp8 forKey:(id)fp12;
- (id)userInfoAttributeForKey:(id)fp8;
- (BOOL)isSecondary;
- (void)setRotation:(float)fp8;
- (float)rotation;
- (void)setScale:(float)fp8;
- (float)scale;
- (void)setCenter:(struct CGPoint)fp8;
- (struct CGPoint)center;
- (id)parentSubtitleEffect;
- (id)parent;
- (id)parentEffect;
- (float)aspectRatio;
- (int)liveIndex;
- (int)index;
- (void)setSizingMode:(id)fp8;
- (id)sizingMode;
- (void)setAudioDuckLevel:(float)fp8;
- (float)audioDuckLevel;
- (void)setAudioDuckOutDuration:(double)fp8;
- (double)audioDuckOutDuration;
- (void)setAudioDuckInDuration:(double)fp8;
- (double)audioDuckInDuration;
- (void)setAudioFadeOutDuration:(double)fp8;
- (double)audioFadeOutDuration;
- (void)setAudioFadeInDuration:(double)fp8;
- (double)audioFadeInDuration;
- (void)setAudioVolume:(float)fp8;
- (float)audioVolume;
- (void)setDuration:(double)fp8;
- (double)duration;
- (void)setStartTime:(double)fp8;
- (double)startTime;
- (double)showDisplayStartTime;
- (double)showDisplayTime;
- (double)showDuration;
- (double)showTime;
- (void)removeAnimationPathForKey:(id)fp8;
- (void)setAnimationPath:(id)fp8 forKey:(id)fp12;
- (id)animationPathForKey:(id)fp8;
- (id)animationPaths;
- (void)moveFiltersFromIndices:(id)fp8 toIndex:(int)fp12;
- (void)removeAllFilters;
- (void)removeFiltersAtIndices:(id)fp8;
- (void)insertFilters:(id)fp8 atIndex:(int)fp12;
- (void)addFilters:(id)fp8;
- (void)addFilter:(id)fp8;
- (id)filters;
- (void)setLayerGroup:(id)fp8;
- (id)layerGroup;
- (void)setAbsolutePath:(id)fp8;
- (id)absolutePath;
- (void)setPath:(id)fp8;
- (id)path;
- (void)setFrame:(id)fp8;
- (id)frame;
- (void)dealloc;
- (void)finalize;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)initWithLayerGroup:(id)fp8;
- (id)initWithPath:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)init;

@end

