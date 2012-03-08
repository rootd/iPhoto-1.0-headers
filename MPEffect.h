/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "MPActionableSupport-Protocol.h"
#import "MPAnimationSupport-Protocol.h"
#import "MPAudioSupport-Protocol.h"
#import "MPEffectSupport-Protocol.h"
#import "MPFilterSupport-Protocol.h"
#import "MPGeometrySupport-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCContainerEffect, MCPlugParallel, MPAudioPlaylist, MPEffectContainer, MPEffectInternal, NSMutableArray, NSMutableDictionary, NSObject<MZEffectTiming>;

@interface MPEffect : _ACAccountTypeIdentifierTwitter <NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport>
{
    NSMutableArray *_slides;
    NSMutableArray *_secondarySlides;
    NSMutableArray *_texts;
    NSMutableArray *_filters;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_animationPaths;
    MCContainerEffect *_container;
    MCPlugParallel *_plug;
    MPAudioPlaylist *_audioPlaylist;
    MPEffectContainer *_parentContainer;
    BOOL _replaceSlides;
    BOOL _supportsEffectTiming;
    NSObject<MZEffectTiming> *_effectTiming;
    MPEffectInternal *_internal;
}

+ (id)effectWithEffectID:(id)fp8 strings:(id)fp12 paths:(id)fp16;
+ (id)effectWithEffectID:(id)fp8 andStrings:(id)fp12;
+ (id)effectWithEffectID:(id)fp8 andPaths:(id)fp12;
+ (id)effectWithEffectID:(id)fp8;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)fp8;
- (id)effectTiming;
- (void)setRandomSeed:(int)fp8;
- (int)randomSeed;
- (id)parentContainer;
- (void)setAudioPriority:(int)fp8;
- (int)audioPriority;
- (void)setAudioPlaylist:(id)fp8;
- (id)audioPlaylist;
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
- (BOOL)isTextOnly;
- (void)moveTextsFromIndices:(id)fp8 toIndex:(int)fp12;
- (void)removeAllTexts;
- (void)removeTextsAtIndices:(id)fp8;
- (void)insertTexts:(id)fp8 atIndex:(int)fp12;
- (void)addTexts:(id)fp8;
- (void)addText:(id)fp8;
- (id)texts;
- (double)lowestDisplayTime;
- (void)_updateTiming:(BOOL)fp8;
- (void)_updateEffectTiming;
- (void)setReplaceSlides:(BOOL)fp8;
- (BOOL)replaceSlides;
- (BOOL)supportsUnlimitedSlides;
- (void)removeAllSecondarySlides;
- (void)removeSecondarySlidesAtIndices:(id)fp8;
- (void)insertSecondarySlides:(id)fp8 atIndex:(int)fp12;
- (void)addSecondarySlides:(id)fp8;
- (void)addSecondarySlide:(id)fp8;
- (id)secondarySlides;
- (void)moveSlidesFromIndices:(id)fp8 toIndex:(int)fp12;
- (void)replaceSlide:(id)fp8 atIndex:(int)fp12;
- (void)replaceSlideAtIndex:(int)fp8 withSlide:(id)fp12;
- (void)removeAllSlides;
- (void)removeSlidesAtIndices:(id)fp8;
- (void)insertSlides:(id)fp8 atIndex:(int)fp12;
- (void)addSlides:(id)fp8;
- (void)addSlide:(id)fp8;
- (id)slides;
- (int)zIndex;
- (void)setMainDuration:(double)fp8;
- (double)mainDuration;
- (void)setPhaseOutDuration:(double)fp8;
- (double)phaseOutDuration;
- (void)setPhaseInDuration:(double)fp8;
- (double)phaseInDuration;
- (void)setYRotationAngle:(float)fp8;
- (float)yRotationAngle;
- (void)setXRotationAngle:(float)fp8;
- (float)xRotationAngle;
- (void)setSize:(struct CGSize)fp8;
- (struct CGSize)size;
- (void)setRotationAngle:(float)fp8;
- (float)rotationAngle;
- (void)setZPosition:(float)fp8;
- (float)zPosition;
- (void)setPosition:(struct CGPoint)fp8;
- (struct CGPoint)position;
- (void)setScale:(float)fp8;
- (float)scale;
- (void)setOpacity:(float)fp8;
- (float)opacity;
- (void)setEffectAttribute:(id)fp8 forKey:(id)fp12;
- (id)effectAttributeForKey:(id)fp8;
- (void)setEffectAttributes:(id)fp8;
- (id)effectAttributes;
- (void)setPresetID:(id)fp8;
- (id)presetID;
- (void)setEffectID:(id)fp8;
- (id)effectID;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)description;
- (id)init;
- (id)initWithEffectID:(id)fp8 strings:(id)fp12 paths:(id)fp16;
- (id)initWithEffectID:(id)fp8 andStrings:(id)fp12;
- (id)initWithEffectID:(id)fp8 andPaths:(id)fp12;
- (id)initWithEffectID:(id)fp8;

@end

